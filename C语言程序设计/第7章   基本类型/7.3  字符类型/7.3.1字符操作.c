//��Сд��ĸת��Ϊ��д��ĸ

#include<stdio.h>
int main(void)
{
	char ch;
	
	scanf("%c",&ch);
	
	if('a'<=ch&&ch<='z')
	  ch=ch-'a'+'A';
	printf("%c\n",ch);
	return 0;
 } 
