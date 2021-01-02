#include<stdio.h>
#include<string.h>
int main(void)
{
	int i;
	char a[]={65,66,67,68,69,70};//相当于录入ASCⅡ码 
	for(i=0;i<6;i++){
		printf("%c ",a[i]);
	}
	
	return 0;
 } 
