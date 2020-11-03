//错误！！！switch只可用于整数型 
//用switch语句 计算股票经纪人的佣金

#include <stdio.h>
int main(void)
{
	float trade,commission;
	
	printf("Enter value of trade: ");
	scanf("%f",&trade);
	
	switch (trade){
		case trade < 2500.00f:   commission = 30.00f + 0.017f * trade;
		break;
		case trade < 6250.00f:   commission = 56.00f + 0.0066f * trade;
		break;
		case trade < 20000.00f:  commission = 76.00f + 0.0034f * trade;
		break;
		case trade < 50000.00f:  commission = 100.00f + 0.0022f * trade;
		break;
		case trade < 500000.00f: commission = 155.00f + 0.0011f * trade;
		break;
		case trade >= 500000.00f:commission = 255.00f + 0.0009f * trade;
		break; 
	}
	
	switch (commission){
		case commission <39.00f:printf("Commission: $39.00\n");
		break;
		case commission >= 39.00f:printf("Commission: $%.2f\n", commission);
		break;
	}
	
	return 0;
 } 
