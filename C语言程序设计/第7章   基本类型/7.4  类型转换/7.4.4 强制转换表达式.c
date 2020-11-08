//强制转换表达式 （类型名）表达式
//这里的类型名表示的是表达式应该转换成的类型
//计算float类型值小数部分的方法

#include<stdio.h>
int main(void)
{
	float f,frac_part;
	printf("Enter value of f: ");
	scanf("%f",&f);
	
	frac_part=f-(int)f;
	printf("Now frac_part: %f\n",frac_part);
	return 0;
 } 
