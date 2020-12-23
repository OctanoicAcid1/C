#include<stdio.h>
int main(void)
{
	char ch[200];
	int i=-1;
	do{ 
		i++;
		ch[i]=getchar();
	}while(ch[i]!='\n'); 
	ch[i]='\0';
	printf("%d\n",i);
	return 0;
 } 
