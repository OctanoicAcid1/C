#include<stdio.h>
int main(void)
{
	int i,j,n,m,c;
	scanf("%d%d",&n,&m);
	int a[n],b[n-m+1];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-m+1;i++){
		b[i]=0;
	}
	for(i=0;i<n-m+1;i++){
		for(j=i;j<i+m;j++){
			b[i]+=a[j];
		}
	}
	c=b[0];
	for(i=1;i<n-m+1;i++){
		if(b[i]<c)
		  c=b[i];
	}
	printf("%d\n",c);
	return 0;
}
