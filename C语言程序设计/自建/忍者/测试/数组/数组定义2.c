#include<stdio.h>
int main(void)
{
	int x[][3]={0};//这样定义居然是对的，虽然不知道打印时下标怎么填 
	printf("%d",x[0][0]);
	return 0;
}
