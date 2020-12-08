//realloc函数可实现数组的扩增和缩减，该数组必须是动态数组 

#include<malloc.h>
#include<stdio.h>
int main(void)
{
	int i;
	int *p;
	
	p=(int *)malloc(5*sizeof(int));
	
	for(i=0;i<5;i++)
	  scanf("%d",(p+i));//先将5个数输入长度为5的数组 
	
	realloc(p,10*sizeof(int));//第一个实参为数组名，第二个实参为该数组扩增或缩减后要占用的字节数(10个元素的字节数） 
                              //若扩增，扩增数之前的数不变；若缩减，删除尾部超出变化后数组范围的数，保留前部分数 

	for(i=5;i<10;i++)
	  scanf("%d",(p+i));//将后5个数输入扩增后的数组 
	  
	for(i=0;i<10;i++)
	  printf("%d ",p[i]);//输出所输入的10个数 
	  
	return 0; 
}
