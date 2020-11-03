//对用户录入的产品信息进行格式化

#include <stdio.h>

int main(void)
{
	int num, i1, i2, i3;
	float price;
	
	printf("Enter item number: ");
	scanf("%d", &num);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &i1, &i2, &i3);
	
	printf("Item\t Unit\t\t Purchase\n\t Price\t\t Date\n");
	printf("%-d\t $%7.2f\t %-d/%-d/%-d\n", num, price, i1, i2, i3);
	
	return 0;
 } 
