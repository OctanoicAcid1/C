//用指针对数组赋值、求和 

#include<stdio.h>

#define N 10

int main(void)
{
	int a[N],*p,sum=0;
	
	printf("Enter %d numbers: ",N); 
	for(p=&a[0];p<&a[N];p++)
	  scanf("%d",p);//赋值 
	
	for(p=&a[0];p<&a[N];p++)
	  sum+=*p;
	printf("Sum: %d\n",sum);
	    
	return 0;  
 } 
