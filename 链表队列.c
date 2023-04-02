#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

//定义结点，结点中除了可以存放数据，还有一个指向下一个结点的指针next
typedef struct node
{
	int data;
	struct node *next;
}LinkQueueNode;


typedef struct 
{
	LinkQueueNode *front;   //表示队首结点
	LinkQueueNode *rear; //表示队尾结点
}LinkQueue;
int CreatQ(LinkQueue*Q)//创建链表
{
	Q->front = (LinkQueueNode *)malloc(sizeof(LinkQueueNode));
	if(Q->front != NULL)
	{
		Q->rear = Q->front;
		Q->front->next = NULL;
		printf("队列初始化成功！\n");
		return TRUE;
	}
	else
		return FALSE;
}

int EmptyQ(LinkQueue *Q)//检查链队是否为空
{
	if(Q->front == Q->rear)
	{
		return FALSE;
	}
	return TRUE;
}

int EnterQ(LinkQueue *Q,int data)//让元素进入队列
{
	LinkQueueNode *NewNode;
	NewNode = (LinkQueueNode *)malloc(sizeof(LinkQueueNode));
	if(NewNode != NULL)
	{
		NewNode->data = data;
		NewNode->next = NULL;
		Q->rear->next = NewNode;
		Q->rear = NewNode;
		return TRUE;
	}
	else
		return FALSE;
}

int DeleteQ(LinkQueue *Q,int *data)//元素出队
{
	LinkQueueNode *p;
	if(Q->front == Q->rear)
		return FALSE;
	p = Q->front->next;
	Q->front->next = p->next;
	*data = p->data;
	free(p);
	return TRUE;
}

int ClearQ(LinkQueue *Q)//
{
	LinkQueueNode *p,*temp;
	if(Q->front == Q->rear)
		return FALSE;
	temp = Q->front->next;
	while(temp)
	{
		p = temp;
		temp = p->next;
		free(p);
	}
	temp = Q->front;
	Q->front = Q->rear = NULL; //这一步骤是必要的，必须要让front和rear有确定的归属，如果没有，删除掉头节点后，front和rear就成了野指针，指向哪里都有可能
	free(temp);
	return TRUE;
}

int GetQ_data(LinkQueue *Q,int *data)//获取数据
{
	if(Q->front != NULL)
	{
		*data = Q->front->next->data;
		return *data;
	}
}

int PrintQ(LinkQueue *Q)//打印队列数据
{
	LinkQueueNode *p,*temp;
	if(Q->front == NULL)
	{
		printf("队列为空，无法打印!\n");
		return FALSE;
	}
	temp = Q->front->next;
	while(temp)
	{
		p = temp;
		temp = p->next;
		printf("%d  ",p->data);
	}
	return TRUE;
}
