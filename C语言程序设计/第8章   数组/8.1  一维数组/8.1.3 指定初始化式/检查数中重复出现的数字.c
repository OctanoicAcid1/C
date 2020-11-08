//检查数中重复出现的数字
//Checks numbers for repeated digits

#include<stdbool.h>
#include<stdio.h>
int main(void)
{
	bool digit_seen[10]={false};//实际只初始了第一个元素，其他元素为0，而0跟false是相等的 
	int digit;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld",&n);
	
	while(n>0){
		digit=n%10;
		if(digit_seen[digit])//如果该元素为真，跳出while循环 
		  break;
		digit_seen[digit]=true;//该元素第一次出现，将其变为真 
		n/=10;
	}
	
	if(n>0)
	  printf("Repeated digit\n");
	else
	  printf("No repeated digit\n");
	  
	return 0;
}
