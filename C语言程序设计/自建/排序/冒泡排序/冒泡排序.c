//���ڽϴ�����������ƣ�����ÿ��ѭ�����������ᱻ�������
//�൱��ÿ��ѭ�������ź������һλ
//����i����ѭ���ж���λ-1��ô��Σ��źõڶ�λ����һλҲ�ź��ˣ�
//jѭ������һ���źõ����һλ֮ǰ��ÿ�αȽ����һλ�ȣ�����-1�� 

#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("��Ҫ��������ָ�����"); 
	scanf("%d",&n);
	int num[n];
	printf("����������%dλ���֣�",n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	//����ʼ
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(num[j]>num[j+1]){
				int t;
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	//����
	 
	for(i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	printf("\n"); 
	return 0;
 } 
