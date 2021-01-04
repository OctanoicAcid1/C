//关于数组型实际参数的一个重要论点是：函数可以改变数组型形式参数的元素，且会在相应的实际参数中体现出来 
//数组初始化时，内层列表的元素没有占满数组的一行，那么改行剩余元素用0补充 

#include<stdio.h>
#define N 4
void fun(int a[][N],int b[])
{
	int i;
	for(i=0;i<N;i++)
	  b[i]=a[i][i];
}
int main(void)
{
	int c[][N]={{1,2,3},{4},{5,6,8,0},{1,5,3,1}};
	int d[N],i;
	fun(c,d);
	for(i=0;i<N;i++)
	  printf("%d,",d[i]);
	return 0;
}
