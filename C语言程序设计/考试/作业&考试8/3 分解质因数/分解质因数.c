#include<stdio.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int j,m;
		scanf("%d",&m);
		for(j=2;;j++){
			for(;m%j==0&&m>j;){
				m/=j;
				printf("%d*",j);
			}
			if(m==j){
				printf("%d\n",j);
				break;
			}
		}
	}
	return 0;
}
