//经典指针_互换两个数字
 
#include<stdio.h>

void swap(int *p,int *q);
int main(void)
{
	int a,b;
	
	scanf("%d%d",&a,&b);
    
    swap(&a,&b);
	printf("%d %d\n",a,b);
	
	return 0;
}
void swap(int *p,int *q)
{
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
