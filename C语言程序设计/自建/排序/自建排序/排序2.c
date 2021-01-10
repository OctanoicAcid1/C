//相邻较大的数字往后推，所以每次循环最大的数都会被推至最后
//相当于每次循环至少排好了最后一位
//所以i至少循环有多少位-1那么多次（排好第二位，第一位也排好了）
//j循环到上一次排好的最后一位之前（每次比较与后一位比，所以-1） 

#include<stdio.h>
int main(void)
{
	int i,j,n;
	printf("需要排序的数字个数："); 
	scanf("%d",&n);
	int num[n];
	printf("请依次输入%d位数字：",n);
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	
	//排序开始
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(num[j]>num[j+1]){
				int t;
				t=num[j];
				num[j]=num[j+1];
				num[j+1]=t;
			}
		}
	}
	//结束
	 
	for(i=0;i<n;i++){
		printf("%d ",num[i]);
	}
	printf("\n"); 
	return 0;
 } 
