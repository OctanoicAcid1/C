//计算利息
//Prints a table of compound interest

#include<stdio.h>

#define NUM_RATES ((int)(sizeof(value)/sizeof(value[0])))//数组长度 
#define INITIAL_BALANCE 100.00//100美元投资

int main(void)
{
	int i,low_rate,num_years,year;
	double value[5];
	
	printf("Enter interest rate: ");
	scanf("%d",&low_rate);
	printf("Enter number of years: ");
	scanf("%d",&num_years);
	
	printf("\nYears");
	for(i=0;i<NUM_RATES;i++){
		printf("%6d%%",i+low_rate);
		value[i]=INITIAL_BALANCE;
	} 
	printf("\n");
	
	for(year=1;year<=num_years;year++){
		printf("%3d    ",year);
		for(i=0;i<NUM_RATES;i++){
			value[i]+=(i+low_rate)/100.0*value[i];
			printf("%7.2f",value[i]);
		}
		printf("\n");
	}
	return 0;
 } 
