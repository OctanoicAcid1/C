#include<stdio.h>
int main(void)
{
	int i,j,a[10];
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<10;i++){
		if(a[i]!=0){
			j=i;
			printf("%d",i);
			break;
		}
	}
	for(i=0;i<10;i++){
		if(i==j)
		  a[i]--;
		for(;a[i]>0;a[i]--){
			printf("%d",i);
		}
	}
	printf("\n");
	return 0;
 } 
