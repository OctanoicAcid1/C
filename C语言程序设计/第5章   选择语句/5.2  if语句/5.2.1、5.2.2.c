// if语句、else语句、复合语句
//求i,j,k中的最大值，并将其存储在max中 

#include <stdio.h>
int main(void)
{
	int i,j,k,max;
	
	printf("Enter the value of i, j, k: ");
	scanf("%d%d%d",&i,&j,&k);
	
	if (i > j){
		if (i > k){
			max=i;
		}else{ 
		    max=k;
		}
	}else{
	    if (j > k){
	    	max=j;
	    }else{
	        max=k;
		}
	}
	
	printf("%d\n",max);
	
	return 0;
 } 
