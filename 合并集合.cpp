#include<stdio.h>
#define MAX 10
int set_interesection(int a[],int b[],int c[],int re[])//记录相同元素，并进行合并
{
	void print(int a[],int n);
	int i=0,num=0,j=0;
	
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{
			if(a[i]==b[j])
				c[num++]=a[i];
		}
	
	printf("Eaual wrrite in c[]:");
	print(c,num);
for(i=0;i<num;i++)
		re[i]=c[i];
	/*printf("记录相同数组:");
	print(re,num);*/
	return num;
}
int check_element(int a[],int b[],int an,int bn,int union_a[MAX])//查找不同元素；an\bn分别为数组长度
{
	int i=0,j=0,num=0,k=0;//存放不同值
	for(i=0;i<an;i++)
	{
		for(j=0;j<bn;j++)
		{
			if(a[i]==b[j])break;
			if(a[i]!=b[j]&&j==(bn-1))
			{
				union_a[num++]=a[i];k=num;
			}
			
		}
	}
	return k;
	
}
void copy_arr(int ca[],int cb[],int length)//将B表中元素放入空表A中
{
	int i=0;
	for(i=0;i<length;i++)
		ca[i]=cb[i];
}

int  union_different(int a[],int b[],int re[])//合并不同元素
{
    void print(int a[],int n);
	void copy_arr(int ca[],int cb[],int length);
   int union_arr(int a[],int b[],int a_length,int b_length,int record[]);
	int check_element(int a[],int b[],int an,int bn,int union_a[MAX]);
	int an=MAX,bn=MAX,c[MAX],d[MAX],j1=0,j2=0,k=0;
	int record[MAX];
	j1=check_element(a,b,an,bn,c);//记录数组长度
	j2=check_element(b,a,bn,an,d);
	k=union_arr(c,d,j1,j2,record);//接下来需要记录这个新数组
	/*for(i=0;i<k;i++)
	re[i]=record[i];*/
	copy_arr(re,record,k);
/*	printf("数组\n");
	print(re,k);*/
	return k;
}
int union_arr(int a[],int b[],int a_length,int b_length,int record[])//合并数组
{  
	void copy_arr(int ca[],int cb[],int length);
	void print(int a[],int n);
	int i=0;
  	int record_length=0;
	for(i=0;i<b_length;i++)
	{
		a[a_length++]=b[i];
		record_length=a_length;
	}
	for(i=0;i<record_length;i++)
	{
		record[i]=a[i];
	}
	
	copy_arr(record,a,record_length);
	/*printf("记录数组\n");
	print(record,record_length);
	printf("不同：):");*/
	print(a,record_length);
	return record_length;
	
}
void set_difference(int a[],int b[],int c[])//将不同元素放入c中
{
	void print(int a[],int n);
	void  union_different(int a[],int b[]);
	
}
void sort(int a[],int n)
{
	void print(int a[],int n);
	int i=0,j=0,t=0;
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1-j;i++)
			if(a[i]>a[i+1])	
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	}
	print(a,n);
}
void print(int a[],int n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%2d",a[i]);
	printf("\n");
	
}
int main()
{	
    int  union_different(int a[],int b[],int re[]);
    void print(int a[],int n);
	int union_arr(int a[],int b[],int a_length,int b_length,int record[]);
	void sort(int a[],int n);
	int set_interesection(int a[],int b[],int c[],int re[]);
	int a[MAX]={1,3,5,7,8};
	int b[MAX]={2,4,6,8,9};
	int c[MAX];
	int record1[MAX],record2[MAX],union_record[MAX];//记录不同元素数组
	int r1_length=0,r2_length=0,r3=0;//记录长度
	printf("arr1:\n");
	print(a,5);
	printf("arr2:\n");
	print(b,5);
	printf("new arr1:\n");
	sort(a,5);
	printf("new arr2:\n");
	sort(b,5);
	r1_length=set_interesection(a,b,c,record1);//相等；
	set_difference(a,b,c);//不同
	printf("不同元素放入ser_diffrernt:");
	r2_length=union_different(a,b,record2);//不同的连接
	printf("无序sort_(a,b,c):");	
	union_arr(record1,record2,r1_length,r2_length,union_record);
	r3=r1_length+r2_length;
	printf("有序sort_(a,b,c):");
	sort(union_record,r3);
     return 0;
	
	
	
}

