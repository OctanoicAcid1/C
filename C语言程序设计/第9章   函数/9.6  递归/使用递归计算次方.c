//使用递归计算次方

#include<stdio.h>
int power(int x,int n)
{
	if(n==0)
	  return 1;
	else
	  return x*power(x,n-1);
 } 
int main(void)
{
	int x,n;
	
	printf("Enter value of base: ");//base底数
	scanf("%d",&x);
	printf("Enter value of index: ");//index指数
	scanf("%d",&n);
	
	printf("%d\n ",power(x,n));
	return 0; 
}
