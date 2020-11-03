//分解用户录入的ISBN信息

#include <stdio.h>

int main(void)
{
	int i1, i2, i3, i4, i5;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &i1, &i2, &i3, &i4, &i5);
	
	printf("GS1 prefix: %d\n", i1);
	printf("Group identifier: %d\n", i2);
	printf("Publisher code: %d\n", i3);
	printf("Item number: %d\n", i4);
	printf("Check digit: %d\n", i5);
	
	return 0;
 } 
