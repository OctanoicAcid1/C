//循环在读入10个非零数后循环终止

#include<stdio.h>
int main(void)
{
	int n=0,i;
	
	while(n<10){
		scanf("%d",&i);
		if(i==0)
		  continue; 
		n++;
	}
	return 0;
 } 
