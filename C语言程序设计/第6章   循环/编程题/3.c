//将输入的分式约分为最简分式（分子分母除以最大公约数）

#include<stdio.h>
int main(void)
{
	int i,j,a,x,y;
	
	printf("Enter a fraction (x/y): ");
	scanf("%d/%d",&i,&j);
	
	if(j==0)
		printf("WRONG\n");
	else if(i==0)
	    printf("In lowest terms: 0\n");
	else{
	    for(a=i;a>0;a--){
	    	x=i%a;
	    	y=j%a;
	    	if(x==0&&y==0)
	    	  break;
		}
		i=i/a;
		j=j/a;
		printf("In lowest terms: %d/%d\n",i,j);
    }
    
	return 0;	
 } 
