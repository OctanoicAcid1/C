#include<stdio.h>
int main(void)
{
	int i,j;
	int a[3][3];
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		  scanf("%d",&a[i][j]);
	}
	
	int *p;
	p=&a;
	printf("%d ",*(p+8));
	
	int *k;
	k=a;
	printf("%d ",*(k+8));
	
	int **y;
	*y=a;
	printf("%d ",*y);//加1跳两个数？？ 
	return 0;
 } 
