#include<stdio.h>
int main()
{
int n,i,sumx,sumy,sumz,sum;
printf("You want accelete numer length:\n");	
	scanf("%d",&n);
	int a[n],b[n];
	printf("input a[%d]\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		printf("input b[%d]\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	
		sumx=a[1]*b[2]-a[2]*b[1];
	sumy=a[2]*b[0]-a[0]*b[2];
	sumz=a[0]*b[1]-a[1]*b[0];
	printf("sum=(%d,%d,%d)\n",sumx,sumy,sumz);
	

	

	
	
	
	
}
