//输入n，显示1~n的偶数平方值

#include<stdio.h>
int main(void)
{
	int i,n;
	
	printf("Enter number of n: ");
	scanf("%d",&n);
	
	for(i=2;i*i<=n;i+=2){
		printf("%d\n",i*i);
	}
	return 0;
 } 
