#include<stdio.h>
int main(void)
{
	int i,k;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		int j,num;
		scanf("%d",&num);
		for(j=2;j<num;j++){
			for(;num!=j;){
				if(num%j==0){
					printf("%d*",j);
					num/=j;
				}
				else
				  break;
			}
		}
		printf("%d\n",num);
	}
	return 0;
}
