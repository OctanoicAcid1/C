#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,n,x,y,len1,len2,add,sum,product;
	char a[1000],b[1000],c[2000];//c的长度为a，b的两倍，保证能完整储存乘积 
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2000;j++){
			c[j]='0';//将c全部初始化为‘0’字符
		}
		scanf("%s",a);
		scanf("%s",b);
		len1=strlen(a);
		len2=strlen(b);
		for(x=len1-1;x>=0;x--){//算法核心 
			add=0;//表示进位 
			for(y=len2-1;y>=0;y--){//一个数的一位与另一个数的每位相乘 
				product=(a[x]-'0')*(b[y]-'0');//表示计算的两数之积 
				sum=c[x+y+1]-'0'+product+add;//求和（包括计算的本位原本有的值（整型化）、针对本位计算的两数乘积、上一位的进位）
				c[x+y+1]=sum%10+'0';//计算新的本位的值（字符化）（对sum处理的第一步）
				add=sum/10;//计算进位（对sum处理的第二步） 
			}
			c[x]+=add;//每次循环结束后计算到最高位可能溢出，需进位
		}
		for(j=0;c[j]=='0';j++);//消去c中前部未计算到的位，注意分号
		for(;j<len1+len2;j++){
			printf("%c",c[j]);
		}
		printf("\n");
	}
	return 0;
}
