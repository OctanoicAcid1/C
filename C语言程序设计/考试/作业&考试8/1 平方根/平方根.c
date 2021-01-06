#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int k;
		scanf("%d",&k);
		if(k<0)
		  printf("ERROR\n");
		else{
			float a;
			a=sqrt(k);
			printf("%.2f\n",a);
		}
	}
	return 0;
 } 
