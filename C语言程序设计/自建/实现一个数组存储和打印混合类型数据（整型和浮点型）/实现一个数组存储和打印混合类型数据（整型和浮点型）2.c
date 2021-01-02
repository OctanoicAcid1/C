//实现一个数组存储和打印混合类型数据（整型和浮点型）
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
	scanf("%d",&n);//录入数组大小 
	Number number_array[n];//元素为结构 
	char work[1];
	work[0]=getchar();
	
	for(x=0;x<n;x++){
		number_array[x].u.i=scan_number(number_array[x]);//建个存储函数，同时对kind赋值
		number_array[x].u.d=scan_number(number_array[x]);
	}
	
	for(x=0;x<n;x++){
		print_number(number_array[x]);//打印函数 
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
	}while(num[p]!=' '&&num[p]!='\n');//字符串录入数字 
	num[p]='\0';
	for(q=0;q<p;q++){//判断是整型还是浮点型 
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
