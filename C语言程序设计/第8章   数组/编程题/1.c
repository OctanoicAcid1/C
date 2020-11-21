//检查重复数字，并显示该数字

#include<stdbool.h>
#include<stdio.h>
int main(void)
{
	bool digit_seen[10]={false};
	int digit;
	long n,n1;
	
	printf("Enter a number: ");
	scanf("%ld",&n1);
	
	n=n1;
	while(n>0){
		digit=n%10;
		if(digit_seen[digit])
		  break;
		digit_seen[digit]=true;
		n/=10;
	}
	
	if(n>0){ 
	  printf("Repeated digit(s) is/are: ");
	  bool digit_seen2[10]={false};
	  while(n1>0){
	  	digit=n1%10;
	  	if(digit_seen2[digit])
	  	  printf("%d ",digit);
	  	if(!digit_seen2[digit])
	  	  digit_seen2[digit]=true;
	  	n1/=10;
	  }
	  printf("\n");
	}else{
	  printf("No repeated digit\n");
    }
	return 0;
}
