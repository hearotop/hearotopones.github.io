#include<stdio.h>
#include<string.h>
#define NUM 5
struct tel_list
{
	char name[32];
	char tel[32];
};
int main()
{
	struct tel_list my[NUM]={{"wang","1"},{"b","2"},{"c","3"},{"d","4"},{"e","5"}};
	struct tel_list *p;
	char sname[32],*a;
	int i=0;
	a=sname;
	scanf("%s",a);
	printf("name_____tel\n");
	for(p=my;p<my+NUM;p++)
	{
		if(strcmp(a,p->name)==0)
			printf("%s_____%s",p->name,p->tel);break;
		if(strcmp(a,p->name)!=0)
		{
			printf("NOT found!\n");
		}
	}
	return 0;
}

