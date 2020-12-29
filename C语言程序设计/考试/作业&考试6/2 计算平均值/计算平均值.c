#include<stdio.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	float a[n],sum=0;
	for(i=0;i<n;i++){
		scanf("%f",&a[i]);
		sum+=a[i];
	}
	printf("%.2f\n",sum/n);
	return 0;
 } 
