//显示月日年

#include <stdio.h>

int main(void)
{
	int i1, i2, i3;
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &i1, &i2, &i3);
	
	printf("You entered the date %d%.2d%.2d\n", i3, i1, i2);
	
	return 0;
 } 
