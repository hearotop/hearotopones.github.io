#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define MAXSIZE 1024
typedef int elemtype;
typedef struct QueueNode
{
elemtype data;
	struct QueueNode *next;
	
}LinkedQueNode;
//创建一个链表结构
typedef struct LQueue
{
	LinkedQueNode *front;
	LinkedQueNode *rear;
}LQueue,*LinkedQueue;
LinkedQueue Init_LinkedQueue()
{
	LinkedQueue Q=(LinkedQueue)malloc(sizeof(LQueue));
	LinkedQueNode *head=(LinkedQueNode*)malloc(sizeof(LinkedQueNode));
	if(head!=NULL&&Q!=NULL)
	{
		head->next=NULL;
		Q->front=head;
		Q->rear=head;
		
	}
	return Q;
}

void YH_triangle(int n)
{
	LinkedQueue Q;
	int i,j,k,record,sum,temp;
Q=Init_LinkedQueue();
	if(Q==NULL)
		printf("申请失败!");
	else
		printf("申请成功!");
	printf("\n");
	for(i=0;i<=1;i++)
	{
		if(i==0)
		{	
			printf("%2d",1);
			printf("\n");
		}
		if(i==1)
		{
			printf("%2d%2d",1,1);
			printf("\n");
		}
		for(i=2;i<=n;i++)
		{
			printf("%2d",1);
			x=1;
			Q->front=x;
			Q->rear=x;
			sum=Q->front+Q=
			printf("%2d",1);
			
			
		}
	
	
}
}
int main()
{

	int n=1;
	printf("您想要几行?");
	scanf("%d",&n);
	YH_triangle(n);
	
}
