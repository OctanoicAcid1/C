//�ù�ʽ1+1/1��+1/2!+1/3!+......+1/n!����e�Ľ���ֵ

#include<stdio.h>
int main(void)
{
	int i,n;
	double e=1.0,a=1.0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		a*=i;
		e+=1.0/a;
	}
	printf("%lf\n",e);
	return 0;
 } 
