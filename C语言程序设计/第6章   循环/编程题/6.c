//����n����ʾ1~n��ż��ƽ��ֵ

#include<stdio.h>
int main(void)
{
	int i,n;
	
	printf("Enter number of n: ");
	scanf("%d",&n);
	
	for(i=2;i*i<=n;i+=2){
		printf("%d\n",i*i);
	}
	return 0;
 } 
