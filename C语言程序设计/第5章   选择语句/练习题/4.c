//根据i是否小于、等于或大于j，分别取值-1、0、+1
#include<stdio.h>
int main(void)
{
	int i,j;
	printf("Enter value of i, j: ");
	scanf("%d%d",&i,&j);
	
	printf("%d\n",(i>j)+(i>=j)-1);
	return 0;
 } 
