//实现数组列数增加1，并且将增加的列赋值为0 
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,r=3,c=5;
	int **q;
	q=(int**)malloc(r*sizeof(int*));
	for(i=0;i<r;i++){
		q[i]=(int*)malloc(c*sizeof(int));
	}
	for(i=0;i<r;i++)
	  for(j=0;j<c;j++)
	    scanf("%d",&q[i][j]);
	
	for(i=0;i<r;i++){
	    realloc(q[i],(c+1)*sizeof(int));
        q[i][c]=0;
	}
	c++;
	printf("\n");
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		  printf("%d ",q[i][j]);
		printf("\n");  
	}
	
	return 0;
}
