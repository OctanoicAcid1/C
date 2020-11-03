//显示多项式的值

#include <stdio.h>

int main(void)
{
	float x, result1, result2;
	
	printf("Enter the value of x: ");
	scanf("%f", &x);
	
	result1 = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;
	result2 = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;
	
	printf("Result1: %.2f\n", result1);
	printf("Result2: %.2f\n", result2);
	
	return 0;
 } 
