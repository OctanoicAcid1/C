//��ʾ����5%˰�ʺ����Ӧ��� 

#include <stdio.h>

#define TAX_RATE (5.0f / 100.0f)

int main(void)
{
	float amount, sum;
	
	printf("Enter an amount: ");
	scanf("%f", &amount);
	
	sum = (1 + TAX_RATE) * amount;
	
	printf("With tax added: $%.2f\n", sum);
	
	return 0;
 } 
