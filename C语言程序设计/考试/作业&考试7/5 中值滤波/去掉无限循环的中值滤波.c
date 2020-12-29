#include<stdio.h>
int main(void)
{
	
		int w,n;
		scanf("%d%d",&w,&n);
		int i,j,num[n],num3[n],p,q,x,y;
		for(i=0;i<n;i++){
			scanf("%d",&num[i]);
			num3[i]=num[i];
		}
		if(w%2==0){
			printf("ERROR\n");
			return 0;
		}
		if(n>w){//多个子序列 
			for(i=0;i<=n-w;i++){//子序列第一个数的范围 
			    int num1[w],num2[w];
				for(j=i;j<i+w;j++){//每个子序列的范围 
					num1[j-i]=num[j];
				}
				p=0;
	            q=0; 
	            for(x=0;x<w;x++){
                    for(y=0;y<w;y++){
	                    if(num1[y]<num1[x])
	                      p++;
	                    if(num1[y]==num1[x]){ 
	                        q++;
	                        if(y<=x)
	                          q--;
	                    }
                    }
                    num2[p+q]=num1[x]; 
                    p=0;
                    q=0; 
                }
				int z=w/2;
				num3[i+z]=num2[z];
			} 
		}
		if(n<=w){
		int num2[n];
		p=0;
        q=0; 
        for(x=0;x<n;x++){
            for(y=0;y<n;y++){
	            if(num[y]<num[x])
	              p++;
	            if(num[y]==num[x]){ 
                    q++;
                    if(y<=x)
                      q--;
                }
            }
            num2[p+q]=num[x]; 
            p=0;
            q=0; 
        }
        int z=n/2;
        num3[z]=num2[z];
        }
		for(i=0;i<n;i++){
			printf("%d ",num3[i]);
		}
		printf("\n");
	
	return 0;
}
