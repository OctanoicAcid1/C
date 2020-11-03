//计算股票经纪人的佣金
//Calculates a broker's commission

#include <stdio.h>
int main(void)
{
	float trade,commission;
	
	printf("Enter value of trade: ");
	scanf("%f",&trade);
	
	if (trade < 2500.00f){
		commission = 30.00f + 0.017f * trade;
		if (commission < 39.00f){
			printf("Commission: $39.00\n");
	    }else{
	    	printf("Commission: $%.2f\n",commission);
		}
	}else{if (trade <= 6250.00f){
		printf("Commissional: $%.2f\n",56.00f + 0.0066f* trade);
	}else{if (trade <= 20000.00f){
		printf("Commissional: $%.2f\n",76.00f + 0.0034f * trade);
	}else{if (trade <= 50000.00f){
		printf("Commissional: $%.2f\n",100.00f + 0.0022f * trade);
	}else{if (trade <= 500000.00f){
		printf("Commissional: $%.2f\n",155.00f + 0.0011f * trade);
	}else{
	    printf("Commissional: $%.2f\n",255.00f + 0.0009f * trade);
	}
	}
    }
	}
	}
	
	return 0;
 } 
