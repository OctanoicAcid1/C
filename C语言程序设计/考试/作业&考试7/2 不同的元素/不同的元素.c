#include<stdio.h>
int main(void)
{
	int i,j,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count=1;
	for(i=1;i<n;i++){
		for(j=i-1;j>=0;j--){
			if(a[i]==a[j])
			  break;
		}
		if(j==-1)
		  count++;
	}
	printf("%d\n",count);
	return 0;
	
 } 
