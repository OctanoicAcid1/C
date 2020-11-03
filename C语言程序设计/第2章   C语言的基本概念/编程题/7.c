//显示使用最少的20美元、10美元、5美元和1美元

#include <stdio.h>

int main(void)
{
	int amount, i1, i2, i3, i4;
	
	printf("Enter a dollar amount: ");
	scanf("%d", &amount);
	
	i1 = amount / 20;
	i2 = (amount - i1 * 20) / 10;
	i3 = (amount - i1 * 20 - i2 * 10) / 5;
	i4 = (amount - i1 * 20 - i2 * 10 - i3 * 5) / 1;
	
	printf("$20 bills: %d\n", i1);
	printf("$10 bills: %d\n", i2);
	printf("$5 bills: %d\n", i3);
	printf("$1 bills: %d\n", i4);
	
	return 0;
 } 
