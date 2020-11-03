//计算欧洲国家产品代码的校验码

#include<stdio.h>
int main(void)
{
	int i1,i2,i3,i4,i5,i6,i7,i8,i9,j1,j2,j3,digit;
	printf("Enter the first 12 digits of an EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&j1,&j2,&j3);
	
	digit=9-(((i2+i4+i6+i8+j1+j3)*3+(i1+i3+i5+i7+i9+j2)-1)%10);
	printf("Check digit: %d\n",digit);
	return 0;
 } 
