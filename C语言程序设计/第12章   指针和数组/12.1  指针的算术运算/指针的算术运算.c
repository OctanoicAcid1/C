//÷∏’ÎÀ„ ı‘ÀÀ„

#include<stdio.h>
int main(void)
{
	int a[10]={2,5,8,6,4,88,65,21,46,3},*p,*q,i;
	
	p=&a[2];
	printf("%d\n",*p);
	
	q=p+3;//*q=a[5]
	printf("%d\n",*q);
	
	p+=6;//*p=a[8]
	printf("%d\n",*p);
	
	q=p-5;//*q=a[3]
	printf("%d\n",*q);
	
	i=q-p;//-5
	printf("%d\n",i);
	
	return 0;
}
