//��������ظ����ֵ�����
//Checks numbers for repeated digits

#include<stdbool.h>
#include<stdio.h>
int main(void)
{
	bool digit_seen[10]={false};//ʵ��ֻ��ʼ�˵�һ��Ԫ�أ�����Ԫ��Ϊ0����0��false����ȵ� 
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld",&n);
	
	while(n>0){
		digit=n%10;
		if(digit_seen[digit])//�����Ԫ��Ϊ�棬����whileѭ�� 
		  break;
		digit_seen[digit]=true;//��Ԫ�ص�һ�γ��֣������Ϊ�� 
		n/=10;
	}
	
	if(n>0)
	  printf("Repeated digit\n");
	else
	  printf("No repeated digit\n");
	  
	return 0;
}
