//¸ù¾Ýe=1+1/1!+1/2£¡+1/3£¡+...¼ÆËãe

#include<stdio.h>
int main(void)
{
	int a,i,n;
	float b,e;
	
	printf("Enter value of n: ");
	scanf("%d",&n);
	
	e=1.0f;
	b=1.0f;
	for(i=1;i<=n;i++){
		for(a=1;a<=i;a++)
		  b*=a;
	    e+=1.0f/b;
	}
	printf("e=%f\n",e);
	return 0;
 } 
