//�ҳ��û�����һ�����������
//��Ҫ��ʾ�û�һ��һ���������������û�����0ʱ�ҳ������

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
