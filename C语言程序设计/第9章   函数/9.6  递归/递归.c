//递归(即函数调用其本身） 

#include<stdio.h>
int fact(int n)
{
	if(n<=1)
	  return 1;
	else
	  return n*fact(n-1);
 } 

int main(void)
{
	int n;
	
	printf("Enter value of n: ");
	scanf("%d",&n); 
	
	printf("%d\n",fact(n));
	return 0;
 } 
