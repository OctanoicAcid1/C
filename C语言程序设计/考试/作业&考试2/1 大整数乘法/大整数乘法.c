#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,n,x,y,len1,len2,add,sum,product;
	char a[1000],b[1000],c[2000];//c�ĳ���Ϊa��b����������֤����������˻� 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2000;j++){
			c[j]='0';//��cȫ����ʼ��Ϊ��0���ַ�
		}
		scanf("%s",a);
		scanf("%s",b);
		len1=strlen(a);
		len2=strlen(b);
		for(x=len1-1;x>=0;x--){//�㷨���� 
			add=0;//��ʾ��λ 
			for(y=len2-1;y>=0;y--){//һ������һλ����һ������ÿλ��� 
				product=(a[x]-'0')*(b[y]-'0');//��ʾ���������֮�� 
				sum=c[x+y+1]-'0'+product+add;//��ͣ���������ı�λԭ���е�ֵ�����ͻ�������Ա�λ����������˻�����һλ�Ľ�λ��
				c[x+y+1]=sum%10+'0';//�����µı�λ��ֵ���ַ���������sum����ĵ�һ����
				add=sum/10;//�����λ����sum����ĵڶ����� 
			}
			c[x]+=add;//ÿ��ѭ����������㵽���λ������������λ
		}
		for(j=0;c[j]=='0';j++);//��ȥc��ǰ��δ���㵽��λ��ע��ֺ�
		for(;j<len1+len2;j++){
			printf("%c",c[j]);
		}
		printf("\n");
	}
	return 0;
}
