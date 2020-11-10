//显示倒计数（不带返回值的函数） 
//Prints a countdown

#include<stdio.h>

void print_count(int n)//为了指示出不带返回值的函数，需要指明这类函数的返回类型是void 
{
	printf("T minus %d and counting\n",n);
 } 
 
int main(void)
{
	int i;
	
	for(i=10;i>0;i--)
	  print_count(i);//显示一次后返回到被调用的地方，即for语句的循环体 
	  
	return 0;
 } 
