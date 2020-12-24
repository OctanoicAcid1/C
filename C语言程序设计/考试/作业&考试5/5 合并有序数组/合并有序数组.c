#include<stdio.h>
int main(void){
	int i,j,x,y;
	scanf("%d%d",&x,&y);
	int num1[x],num2[y];
	for(i=0;i<x;i++){
		scanf("%d",&num1[i]);
	}
	for(i=0;i<y;i++){
		scanf("%d",&num2[i]);
	}
	
	int num[x+y],t=0;
		i=0;
		for(j=0;j<y;j++){
		    for(;i<x;i++){
			    if(num1[i]<=num2[j]){
				    num[t]=num1[i];
				    t++;
			    }
			    else{
			    	num[t]=num2[j];
			    	t++;
			    	break;
				}
		    }
		    if(i==x&&j<y){
		    	num[t]=num2[j];
		    	t++;
			}
		}
		if(j==y&&i<x){
			for(;i<x;i++){
				num[t]=num1[i];
				t++;
			}
		}
	
	for(i=0;i<x+y;i++){
		printf("%d ",num[i]);
	}
	printf("\n");
	
	return 0;
} 
