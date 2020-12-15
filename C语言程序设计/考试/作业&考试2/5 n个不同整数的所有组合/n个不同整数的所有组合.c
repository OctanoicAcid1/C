#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool b_tree(int*a,int*b,int x,int y);
int main(void)
{
	int i,j,m,n;
	scanf("%d",&m);
	
	for(i=0;i<m;i++){
		scanf("%d",&n);//数组长度(输入数的个数） 
		int *a;
		a=(int*)malloc(n*sizeof(int));
		for(j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		int b[n];
		b_tree(a,b,0,n);
	    free(a);
	}
	return 0;
}
bool b_tree(int*a,int*b,int x,int y)
{
	int i;
	if(x==y){//此时递归结束 
		printf("--> ");
		for(i=0;i<y;i++){
			if(b[i]==true)
			  printf("%d ",a[i]);
		}
		printf("\n");
		return 0;
	}	
	b[x]=true;
	b_tree(a,b,x+1,y);
	b[x]=false;
	b_tree(a,b,x+1,y);
}
