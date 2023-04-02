#include<stdio.h>
#define MAX 5
int check_element(int a[],int b[],int an,int bn,int union_a[MAX])//查找不同；an\bn分别为数组长度
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
int main()
{
	int check_element(int a[],int b[],int an,int bn,int union_a[MAX]);
	int a[5]={1,2,3,5,6},b[5]={1,2,3,4,7};
	int an=MAX,bn=MAX,c[MAX],d[MAX],i=0,j1=0,j2=0;
	
    j1=check_element(a,b,an,bn,c);//记录数组长度
    j2=check_element(b,a,bn,an,d);
	for(i=0;i<j1;i++)
		printf("%2d",c[i]);
	printf("\n");
	for(i=0;i<j2;i++)
		printf("%2d",d[i]);

	/*printf("%2d",c[1]);
	printf("\n");
	for(i=0;i<MAX;i++)
		printf("%2d",d[i]);
	printf("\n");*/
}

