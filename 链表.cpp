#include <stdio.h>

#include <malloc.h>
#define LISTSIZE 20 //线性表最大存储空间，使用数组实现



typedef int ElemType;    //ElemType表示要存储数据的类型，根据情况而定，

typedef struct

{
	
	ElemType data[LISTSIZE];    //数组存储数据元素
	
	int length;    //线性表当前长度
	
	int max;
	
}SqList;    //表名



//初始线性表

 int *init()

{ 
	SqList* L;
    L=(SqList*)malloc(sizeof(SqList));
	if(L!=NULL)
	{
		L->length=-1;
	}
	L->length=0;
	L->max=LISTSIZE;
	return L;
}



//向线性表中指定位置插入元素

void insertElem(SqList* L, int i, ElemType e)

{
	void print(const SqList* L);
	int k=0;
	for(k=L->length;k>=i-1;k--)
	
        L->data[k+1]=L->data[k];
		L->data[i-1]=e;
	  	L->length=L->length+1;
		

	
}



//删除指定位置处的元素

void deleteElem(SqList* L, int i, ElemType* e)

{
	
	
	
	
	
}



//打印表数据

void print(const SqList* L)

{
	
	int i;
	
	printf("list data:\n");
	
	for (i = 0; i < L->length; i++)
		
	{
		
		printf("%d ", L->data[i]);
		
	}

		printf("\n");

	
}



void main()

{
	void print(const SqList* L);
	void insertElem(SqList* L, int i, ElemType e);
     int *init();
	SqList *list;
	ElemType e;
	int i; //初始化 
    list=init ( );
	for(i=0;i<10;i++)//表里输入数据
	{
		list.data[i]=i;
		list.length++;
		//printf("%2d",list.data[i]);
	}
	print(&list);
	printf("\n");
	printf("放入你喜欢的数字\n");
	scanf("%d",&e);
	printf("选择你喜欢的位置\n");
	scanf("%d",&i);
	insertElem(&list, i, e);//测试插入 1--10
	//测试删除 
	deleteElem(&list, 6, &e);
	
	print(&list);
	
	
	
	return 0;
	
}
