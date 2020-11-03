//确定一个数的位数（假设输入的数不超过四位） 

#include<stdio.h>
int main(void)
{
	int num;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	if(0<=num&&num<=9)
	  printf("The number %d has 1 digit.\n",num);
	else if(10<=num&&num<=99)
	  printf("The number %d has 2 digits.\n",num);
	else if(100<=num&&num<=999)
	  printf("The number %d has 3 digits.\n",num);
	else
	  printf("The number %d has 4 digits.\n",num);
	  
	return 0;
 } 
