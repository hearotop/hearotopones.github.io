#include <stdio.h> 

#include <stdlib.h>
#define ERROR 0
#define OK 1
typedef int ElemType;
typedef struct Node

{
	
	ElemType data;
	
	struct Node* next;
	
}Node,Linklist;

Linklist *Creat_LinkF()
{

		int link_length(Linklist *head);
	ElemType ix;
Linklist *head,*p,*tail;
	head=(Linklist*)malloc(sizeof(Linklist));
	if(head==NULL)
		return head;
	head->next=NULL;
	tail=head;
	printf("输入数字以0结束:\n");
	scanf("%d",&ix);
	while(ix!=0)
	{
		p=(Linklist*)malloc(sizeof(Linklist));
		if(p==NULL)
		return head;
			p->data=ix;
			tail->next=p;
		tail=p;
		tail->next=NULL;
		scanf("%d",&ix);
	}
	return head;
	
}
int Print_linklist(Linklist*head)
{
	Linklist*p=head->next;
	if(p==NULL)
		return 0;
	while(p!=NULL)
	{
	printf(" %d ",p->data);
		p=p->next;//TODO
	}
	printf("\n");
	return 1;
}
int link_length(Linklist *head)
{
	Linklist *p=head;
	int j=0;
	while(p->next!=NULL){
		p=p->next;
		j++;
		//TODO
	}
	return j;
}
Linklist *GetDate_Linklist(Linklist *head,int i)
{
	Linklist *p;
	int j=0;
	if(i<=0)return NULL;
	p=head;
	while(p->next!=NULL&&j<i)
	{
		p=p->next;
		j++;
		
		//TODO
	}
	if(i==j) 
		return p;
	else 
		return NULL;
	
	
}
void insert(Linklist *p,Linklist *s)
{
	s->next=p->next;
	p->next=s;
}
void insert(Linklist &L)
	{
		int Print_linklist(Linklist*head);
	int i,j=0,data;
	Node *p,*s;
	p=&L;
	printf("\n 请输入插入的位置 i：");
	scanf("%d",&i);
	printf("\n 插入的数据 data："); 
	scanf("%d",&data);
	while(p&&j<i-1){
		p=p->next;++j;
	}
	s=(Linklist*)malloc(sizeof(Linklist));
	s->data=data;
	s->next=p->next;
	p->next=s;
	Print_linklist(&L);
	printf("\n插入成功\n");     
}
int insert_Linklist(Linklist*head,Linklist*s,int i)
{
	Linklist *p;
	if(i<=0)
		p=NULL;
	else if(i==1)
		p=head;
	else
		p=GetDate_Linklist(head,i-1);
	if(p==NULL)
		return 0;
	else
	
	{
insert(p,s);
	return 1;
	}
	
}
int delete_Listlink(Linklist *head,int i)
{
	
	Linklist *p,*r;
	if(i<=0)p=NULL;
	else p=GetDate_Linklist(head,i-1);
	if(p==NULL)
	{
		return 0;
	}else
	{
		r=p->next;
		if(r==NULL)return 0;
		p->next=r->next;
		free(r);
		return 1;
	}

	
}
void deleter(Linklist &L){
	int i,j=0,data;
	Node *p,*q;
	p=&L; 
	printf("\n 请输入删除的位置 i:");
	scanf("%d",&i);
	while(p->next&&j<i-1){
		p=p->next;
		++j;
	}
	q=p->next;
	p->next=q->next;
	data=q->data;
	delete q;
	printf("\n删除成功\n");
	printf("\n删除的数据为%d上的数据：%d\n",i,data);
		Print_linklist(&L);
}


int main()
{
	void deleter(Linklist &L);
	int delete_Listlink(Linklist *head,int i);
	int link_length(Linklist *head);
	void insert(Linklist &L);
int Print_linklist(Linklist*head);
	Linklist *GetDate_Linklist(Linklist *head,int i);
Linklist *Creat_LinkF();
	Linklist *t,*record,*L;
	int list_length=0,i=0;
	t=Creat_LinkF();
	Print_linklist(t);
list_length=link_length(t);
	printf("链表的长度为:");
	printf("%d\n",list_length);
	printf("你想查找的地址:");
	scanf("%d",&i);
	L=GetDate_Linklist(t,i);
	printf("%d\n",L->data);
    insert(*t);
    deleter(*t);


	
	
	
	
}





