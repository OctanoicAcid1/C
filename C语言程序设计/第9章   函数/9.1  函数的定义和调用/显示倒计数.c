//��ʾ����������������ֵ�ĺ����� 
//Prints a countdown

#include<stdio.h>

void print_count(int n)//Ϊ��ָʾ����������ֵ�ĺ�������Ҫָ�����ຯ���ķ���������void 
{
	printf("T minus %d and counting\n",n);
 } 
 
int main(void)
{
	int i;
	
	for(i=10;i>0;i--)
	  print_count(i);//��ʾһ�κ󷵻ص������õĵط�����for����ѭ���� 
	  
	return 0;
 } 
