//编写函数计算多项式的值
#include<stdio.h>
int compute_polynomials(int x);
int main(void)
{
	int x;
	printf("Enter value of x: ");
	scanf("%d",&x);
	printf("Result: %d\n", compute_polynomials(x));
	return 0;
 } 
int compute_polynomials(int x)
{
	return 3*x*x*x*x*x+2*x*x*x*x-5*x*x*x-x*x+7*x-6;
}
