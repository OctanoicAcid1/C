//��ָ������鸳ֵ����� 

#include<stdio.h>

#define N 10

int main(void)
{
	int a[N],*p,sum=0;
	
	printf("Enter %d numbers: ",N); 
	for(p=&a[0];p<&a[N];p++)
	  scanf("%d",p);//��ֵ 
	
	for(p=&a[0];p<&a[N];p++)
	  sum+=*p;
	printf("Sum: %d\n",sum);
	    
	return 0;  
 } 
