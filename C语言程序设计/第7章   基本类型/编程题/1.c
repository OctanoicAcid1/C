//�޸�6.3�ڵ�square2.c��ÿ24��ƽ���������Ϣ���û����»س��Լ���
//Ϊʲô���� 

#include<stdio.h>
int main(void)
{
	int a,i,n;
	char ch;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d",&n);
	
	i=1;
	
	do  {
		for(a=1;a<=24&&i<=n;a++){
			printf("%10d%10d\n",i,i*i);
			i++;
		}
		if(i>n)
		  break;
		printf("Press Enter to continue...\n");
		ch=getchar();
		}while(ch=='\r');
		
	return 0;
	
}
