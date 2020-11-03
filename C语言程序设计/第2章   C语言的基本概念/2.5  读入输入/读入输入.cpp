//读入输入

#include <stdio.h>

int main(void)
{
int height, length, width;
 
	printf("请输入盒子的高：");
	scanf("%d", &height);
	printf("请输入盒子的长："); 
	scanf("%d", &length);
	printf("请输入盒子的宽：");
	scanf("%d", &width);
	
	printf("volume: %d", height * length * width);
	return 0;
}


