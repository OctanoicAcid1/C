//显示两个整数的最大公约数
//0与任何数的最大公约数就是这个数本身 

#include<stdio.h>
int main(void)
{
	int i,j,a,x,y;
	
	printf("Enter two integers: ");
	scanf("%d%d",&i,&j);
	
	if(i==0||j==0){
	  if(i>j)
	    printf("Greatest common divisor: %d\n",i);
	  else
	    printf("Greatest common divisor: %d\n",j);
    }else{
	for(a=i;a>0;a--){
		x=i%a;
		y=j%a;
		if(x==0&&y==0)
		  break;
	}
	
	  printf("Greatest common divisor: %d\n",a);
    }
	return 0;
 } 
