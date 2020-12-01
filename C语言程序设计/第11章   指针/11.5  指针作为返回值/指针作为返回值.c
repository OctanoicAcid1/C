//指针作为返回值

#include<stdio.h>
int *max(int *a,int *b);
int main(void)
{
	int i,j,*p;
	printf("Enter value of i and j: ");
	scanf("%d%d",&i,&j);
	p=max(&i,&j);
	printf("Max: %d\n",*p);
	return 0;
 } 
 
int *max(int *a,int *b)
{
	if(*a>*b)
	  return a;
	else
	  return b;
}
