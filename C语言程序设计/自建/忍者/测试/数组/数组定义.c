#include<stdio.h>
int main(void)
{
	int x[2][3]={{1,2},{3,4},{5,6}};
	printf("%d %d %d %d %d %d",x[0][0],x[0][1],x[0][2],x[1][0],x[1][1],x[1][2]);
	printf("\n%d",x[2][0]);//��ʹ������һ��Ҳ�ᾯ�棬����һ�е�ֵ�Ǵ�� 
	return 0;
 } 
