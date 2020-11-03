//条件表达式
//表达式1 ? 表达式2 : 表达式3

#include <stdio.h>
int main(void)
{
	int i,j;
	
	printf("Enter value of i & j: "); 
	scanf("%d%d",&i,&j);
	
	printf("%d\n",i > j ? i : j);
	return 0;
 } 

 
