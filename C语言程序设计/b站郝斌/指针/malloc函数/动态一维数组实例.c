//��̬һά����ʵ��
//ʹ�ö�̬�ڴ�ʵ�ֱ䳤���� 
//���з��� 
#include<malloc.h>
#include<stdio.h>
int main(void)
{
	int i,len;
	int *p;
	printf("��������Ҫ�����鳤�ȣ�");
	scanf("%d",&len); 
	p=(int *)malloc(sizeof(int)*len);
	for(i=0;i<len;i++){
		scanf("%d",(p+i));//(p+i)����&p[i]���� 
	}
	for(i=len-1;i>=0;i--){
		printf("%d ",p[i]);//p[i]����*(p+i)���� 
	}
	printf("\n");
	
	free(p);//�ֶ��ͷŶ�̬��������� 
	
	return 0;
 } 
