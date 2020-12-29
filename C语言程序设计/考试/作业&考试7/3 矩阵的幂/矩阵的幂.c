#include<stdio.h>
int main(void)
{
	int i,j,n,k;
	scanf("%d%d",&n,&k);
	if(n<1||n>7||k<1||k>7)
	  return 0;
	int num[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&num[i][j]);
		}
	}
	int a[n][n],b[n][n],t;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		  b[i][j]=0;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		  a[i][j]=num[i][j];
	}
	
	int p;
	for(p=0;p<k-1;p++){
	    for(i=0;i<n;i++){
		    for(j=0;j<n;j++){
			    for(t=0;t<n;t++){
				    b[i][j]+=a[i][t]*num[t][j];
			    }
		    }
	    }
	    for(i=0;i<n;i++){
	    	for(j=0;j<n;j++){
	    		a[i][j]=b[i][j];
	    		b[i][j]=0;
			}
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
 } 
