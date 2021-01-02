//ʵ��һ������洢�ʹ�ӡ����������ݣ����ͺ͸����ͣ�
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	int kind;
	union{
		int i;
		double d;
	}u;
}Number;

void scan_number(Number n);
void print_number(Number n);
int main(void)
{	
	int x,y,n;
	scanf("%d",&n);//¼�������С 
	Number number_array[n];//Ԫ��Ϊ�ṹ 
	char work[1];
	work[0]=getchar();
	
	for(x=0;x<n;x++){
		number_array[x].u.i=scan_number(number_array[x]);//�����洢������ͬʱ��kind��ֵ
		number_array[x].u.d=scan_number(number_array[x]);
	}
	
	for(x=0;x<n;x++){
		print_number(number_array[x]);//��ӡ���� 
	}
	
	return 0;
} 

void scan_number(Number n)
{
	int p=-1,q;
	char num[1000];
	do{
		p++;
		num[p]=getchar();
	}while(num[p]!=' '&&num[p]!='\n');//�ַ���¼������ 
	num[p]='\0';
	for(q=0;q<p;q++){//�ж������ͻ��Ǹ����� 
		if(num[q]=='.')
		  break;
	}
	if(q==p){
		int num1;
		num1=atoi(num);
		n.kind=0;
		return num1;
	}
	else{
		double num1;
		num1=atof(num);
		n.kind=1;
		return num1;
	}
}

void print_number(Number n)
{
	if(n.kind==0)
	  printf("%d ",n.u.i);
	else
	  printf("%g ",n.u.d);
}
