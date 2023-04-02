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
	struct tel_list my[NUM]={{"aaa","1"},{"bbb","2"},{"ccc","3"},{"ddd","4"},{"eee","5"}};
	char s_name[32];
	int i=0;
	int j=0;	
	printf("请输入查找的名字：");
  gets(s_name);
	for(i=0;i<NUM;i++)
		for(j=0;j<NUM;j++)
			if(s_name==my[i].name[j])
				printf("%s____%s\n",my[i].name[j],my[i].tel[j]);
		else 
		printf(	"NOT found!\n");
	return 0;

}
