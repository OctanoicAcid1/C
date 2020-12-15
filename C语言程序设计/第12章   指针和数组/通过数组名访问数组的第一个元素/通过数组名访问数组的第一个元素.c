//数组名是一个地址，表示该数组的地址
//数组名同时可以表示数组第一个元素的地址（与数组地址相同），所以可以通过*数组名访问数组第一个元素的内容 

#include<stdio.h>
int main(void)
{
	int a[5]={1,3,5};
	printf("%d\n",a[0]);
    printf("%d\n",*a);
    return 0;
}
