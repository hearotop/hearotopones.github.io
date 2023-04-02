#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
#define MAXSIZE 1024
typedef char elemtype;
typedef struct SL{
	elemtype data[MAXSIZE];
	int top;
	
}SL; 
SL *Int()//creat link
{
SL *ll;
	ll=(SL*)malloc(sizeof(SL));
	if(ll==NULL)
		return ll;
	ll->top=-1;
return ll;
	}
int S_length(SL *s)//record length
{
	return (s->top+1);
}
int push(SL *s,elemtype x)//save data
{
	if(s->top>=MAXSIZE-1)
		return 0;
	s->top++;
	s->data[s->top]=x;
	return 1;
}
	
int isPalindrome(char *s,SL *m,int length)//judge
{
	int pop(SL*s,elemtype*x);
	int SL_length;
   int k,i=0,next=0,mid=0;
	elemtype e;
	mid=length/2-1;
	for(i=0;i<=mid;i++)
	{
		push(m,s[i]);
	}
	SL_length=S_length(m);
	printf("栈的长度为:%d\n",SL_length);
	if(length%2==0)
	{
		next=mid+1;
	}
	
	else
	{
		next=mid+2;
	}
	for(i=next;i<=length-1;i++)
	{
		
		
		pop(m,&e);
		if(e!=s[i])
		{
	k=1;
		}
		
		else 
		k=0;
	}
	return k;
}
int pop(SL*s,elemtype*x)//output
{
	if(s->top==-1)
		return 0;
	else
	{	
		*x=s->data[s->top];
		s->top--;
	
		return *x;
	}
}
int main()
{    
	SL *LK;
	int k=0,ch_length=0,SL_length=0;
	char s[MAXSIZE];
	printf("输入字符串:\n");
	scanf("%s",&s);
	ch_length=strlen(s);
	LK=Int();
	if(LK==NULL)
		printf("error\n!");
	else
			printf("success!\n");
	
	
	printf("\n");
	
	k=isPalindrome(s,LK,ch_length);

	if(k==0)
		printf("是!\n");
	else
		printf("否!\n");
}
