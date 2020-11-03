//计算第一、第二、第三个月还贷后剩余的贷款金额

#include <stdio.h>
 
int main(void)
{
	float loan, rate, payment, i1, i2, i3;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	
	i1 = loan - payment + loan * (rate / 100 / 12);
	i2 = i1 - payment + i1 * (rate / 100 / 12);
	i3 = i2 - payment + i2 * (rate / 100 / 12);
	
	printf("Balance remaining after first payment: $%.2f\n", i1);
	printf("Balance remaining after second payment: $%.2f\n", i2);
	printf("Balance remaining after third payment: $%.2f\n", i3);
	
	return 0;
 } 
