#include<stdio.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	int a[n],b[n],g[n],k[n];
	for(i=0;i<n;i++){
		scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
	}
	int x,y;
	scanf("%d%d",&x,&y);
	
	for(i=n-1;i>=0;i--){
		if(x>=a[i]&&x<=(a[i]+g[i])&&y>=b[i]&&y<=(b[i]+k[i])){
			printf("%d\n",i+1);
			break;
		}
	}
	if(i==-1)
	  printf("-1\n");
	return 0;
}
