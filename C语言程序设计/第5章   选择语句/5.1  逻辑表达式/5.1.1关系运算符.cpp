//逻辑表达式
//小于0，大于1，等于2 
 
#include <stdio.h>

int main(void)
{
	int i1, i2;
	
	printf("Enter the value of i1, i2: ");
	scanf("%d%d", &i1,&i2);
	 
	printf("%d\n",(i1 >= i2) + (i1 == i2));
	return 0;
 } 
