//ǿ��ת�����ʽ �������������ʽ
//�������������ʾ���Ǳ��ʽӦ��ת���ɵ�����
//����float����ֵС�����ֵķ���

#include<stdio.h>
int main(void)
{
	float f,frac_part;
	printf("Enter value of f: ");
	scanf("%f",&f);
	
	frac_part=f-(int)f;
	printf("Now frac_part: %f\n",frac_part);
	return 0;
 } 
