// if��䡢else��䡢�������
//��i,j,k�е����ֵ��������洢��max�� 

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
