#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	char work[1];
	work[0]=getchar(); 
	for(i=0;i<n;i++){
		char num[200];
		int j=-1;
		do{
			j++;
			num[j]=getchar();
		}while(num[j]!='\n');
		num[j]='\0';
		int t;
		for(t=0;t<j;t++){
			if(num[t]!=num[j-t-1])
			  break;
		}
		if(t==j)
		  printf("yes\n");
		else
		  printf("no\n");
	}
	return 0;
 } 
