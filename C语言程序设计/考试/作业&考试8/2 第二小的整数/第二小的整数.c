#include<stdio.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int j,m,p,q;
		scanf("%d",&m); 
		int num[m];
		for(j=0;j<m;j++){
			scanf("%d",&num[j]); 
		}
		for(p=0;p<m-1;p++){
			for(q=0;q<m-1-p;q++){
				if(num[q]>num[q+1]){
					int t;
					t=num[q];
					num[q]=num[q+1];
					num[q+1]=t;
				}
			}
		}
		if(m==1){
			printf("ERROR\n");
			continue;
		}
		for(j=0;j<m-1;j++){
			if(num[j]!=num[j+1])
			  break;
		}
		if(j==m-1){
			printf("ERROR\n");
			continue;
		}
		for(j=0;j<m;j++){
			if(num[j]>num[0]){
				printf("%d\n",num[j]);
				break;
			}
		}
	}
	return 0;
}
