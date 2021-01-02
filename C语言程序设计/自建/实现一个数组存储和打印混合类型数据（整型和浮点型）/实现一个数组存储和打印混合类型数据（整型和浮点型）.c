//ʵ��һ������洢�ʹ�ӡ����������ݣ����ͺ͸����ͣ�
//��Ȼû���뵽ʵ�����ã����Ǽ����˶Խṹ�����ϡ�ö�١�atoi��atof��������ʶ
//���¼��Ҳ���ú�������ô��Ҫʹ��ָ�룬��Ϊ�޷�ͬʱ����kind��u 
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	enum{INT_KIND,DOUBLE_KIND
	}kind;//ö�� 
	union{
		int i;
		double d;
	}u;//���� 
}Number;//�ṹ 

void print_int_number(Number n);
void print_double_number(Number n);
int main(void)
{	
	int x,y,n;
	scanf("%d",&n);//¼�������С 
	Number number_array[n];//Ԫ��Ϊ�ṹ 
	char work[1];
	work[0]=getchar();
	
	for(x=0;x<n;x++){
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
		    number_array[x].u.i=atoi(num);//atoi�ַ�������->�������� 
		    number_array[x].kind=INT_KIND;//ö�� 
	    }
	    else{
		    number_array[x].u.d=atof(num);//atof�ַ�������->���������� 
		    number_array[x].kind=DOUBLE_KIND;//ö�� 
	    }
	}
	
	for(x=0;x<n;x++){
		print_int_number(number_array[x]);//��ӡ���� 
	}
	printf("\n");
	
	for(x=0;x<n;x++){
		print_double_number(number_array[x]);//��ӡ������ 
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
