//�޸�11�⣬ʹ��������ӷ����㣬ֱ��ǰ��С��d,d���û�����Ľ�С�ĸ����� 

#include<stdio.h>
int main(void)
{
	int i,n;
	double e=1.0,a=1.0,d;
	
	printf("Enter value of d: ");
	scanf("%lf",&d);
	for(i=1;(1.0/a)>=d;i++){
		a*=i;
		e+=1.0/a;
	}
	printf("%lf\n",e);
	return 0; 
 } 
