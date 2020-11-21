//修改11题，使程序持续加法运算，直到前项小于d,d是用户输入的较小的浮点数 

#include<stdio.h>
int main(void)
{
	int i,n;
	double e=1.0,a=1.0,d;
	
	printf("Enter value of d: ");
	scanf("%lf",&d);
	for(i=1;(1.0/a)>=d;i++){
		a*=i;
		e+=1.0/a;
	}
	printf("%lf\n",e);
	return 0; 
 } 
