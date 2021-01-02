//实现一个数组存储和打印混合类型数据（整型和浮点型）
//虽然没有想到实际作用，但是加深了对结构、联合、枚举、atoi和atof函数的认识
//如果录入也改用函数，那么需要使用指针，因为无法同时返回kind和u 
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	enum{INT_KIND,DOUBLE_KIND
	}kind;//枚举 
	union{
		int i;
		double d;
	}u;//联合 
}Number;//结构 

void print_int_number(Number n);
void print_double_number(Number n);
int main(void)
{	
	int x,y,n;
	scanf("%d",&n);//录入数组大小 
	Number number_array[n];//元素为结构 
	char work[1];
	work[0]=getchar();
	
	for(x=0;x<n;x++){
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
		    number_array[x].u.i=atoi(num);//atoi字符串数字->整型数字 
		    number_array[x].kind=INT_KIND;//枚举 
	    }
	    else{
		    number_array[x].u.d=atof(num);//atof字符串数字->浮点型数字 
		    number_array[x].kind=DOUBLE_KIND;//枚举 
	    }
	}
	
	for(x=0;x<n;x++){
		print_int_number(number_array[x]);//打印整型 
	}
	printf("\n");
	
	for(x=0;x<n;x++){
		print_double_number(number_array[x]);//打印浮点型 
	}
	
	return 0;
} 

void print_int_number(Number n)
{
	if(n.kind==INT_KIND)
	  printf("%d ",n.u.i);
}

void print_double_number(Number n)
{
	if(n.kind==DOUBLE_KIND)
	  printf("%g ",n.u.d);
}
