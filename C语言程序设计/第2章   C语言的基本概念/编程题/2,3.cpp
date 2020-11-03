//计算球体体积 

#include <stdio.h>

#define PI 3.1415926

int main(void)
{
	int r;
	float v;
	
	printf("Enter r: ");
	scanf("%d", &r);
	
	v = (4.0f / 3.0f) * PI * r * r * r;
	
	printf("v: %.1f\n", v);
	
	return 0;
 } 
