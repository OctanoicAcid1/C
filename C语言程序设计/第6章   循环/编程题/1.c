//找出用户输入一串数的最大数
//需要提示用户一个一个地输入数，当用户输入0时找出最大数

#include<stdio.h>
int main(void)
{
	float i,j;
	
	printf("Enter a number: ");
	scanf("%f",&i);
	
	while(i>0&&j>0){
		printf("Enter a number: ");
		scanf("%f",&j);
		if(i<j)
		  i=j;
	}
	printf("The largest number entered was %f\n",i);
	return 0;
 } 
