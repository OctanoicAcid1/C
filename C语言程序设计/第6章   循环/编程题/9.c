//���뻹������������ÿ�λ�����ʣ��Ĵ�����

#include <stdio.h>
 
int main(void)
{
	float loan, rate, payment;
	int i,t;
	
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &rate);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	
	printf("Enter time of payment: ");
	scanf("%d",&t);
	
	printf("\n");
	
	for(i=1;i<=t;i++){
		loan=loan-payment+loan*(rate/100/12);
		printf("Balance remaining after payment: $%.2f\n",loan); 
	}
	
	return 0;
 } 
