//ÏÔÊ¾Ë°½ğ

#include<stdio.h>
int main(void)
{
	float income;
	
	printf("Enter income: ");
	scanf("%f",&income);
	
	if(income<750.00f)
	  printf("Tax is: %.2f",income*(1.00f/100.00f));
	else if(income<=2250.00f)
	  printf("Tax is: %.2f",7.50f+(income-750.00f)*(2.00f/100.00f));
	else if(income<=3750.00f)
	  printf("Tax is: %.2f",37.50f+(income-2250.00f)*(3.00f/100.00f));
	else if(income<=5250.00f)
	  printf("Tax is: %.2f",82.50f+(income-3750.00f)*(4.00f/100.00f));
	else if(income<=7000.00f)
	  printf("Tax is: %.2f",142.50f+(income-5250.00f)*(5.00f/100.00f));
	else
	  printf("Tax is: %.2f",230.00f+(income-7000.00f)*(6.00f/100.00f));
	  
	printf("\n");
	
	return 0;  
 } 
