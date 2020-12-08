//动态一维数组实例
//使用动态内存实现变长数组 
//数列反向 
#include<malloc.h>
#include<stdio.h>
int main(void)
{
	int i,len;
	int *p;
	printf("输入你想要的数组长度：");
	scanf("%d",&len); 
	p=(int *)malloc(sizeof(int)*len);
	for(i=0;i<len;i++){
		scanf("%d",(p+i));//(p+i)可用&p[i]代替 
	}
	for(i=len-1;i>=0;i--){
		printf("%d ",p[i]);//p[i]可用*(p+i)代替 
	}
	printf("\n");
	
	free(p);//手动释放动态分配的数组 
	
	return 0;
 } 
