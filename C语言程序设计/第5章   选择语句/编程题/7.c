//只用四个if找出四个整数中的最大值和最小值 

#include<stdio.h>
int main(void)
{
	int a,b,c,d,
	    min1,min2,max1,max2,min,max;
	
	printf("Enter four integers: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a<b){
	  min1=a;
	  max1=b;
	}else{
	  min1=b;
	  max1=a;
	}
	
	if(c<d){
	  min2=c;
	  max2=d;
	}else{
	  min2=d;
	  max2=c;
	}
	
	if(max1>max2)
	  printf("Largest: %d",max1);
	else
	  printf("Largest: %d",max2);
	  
	printf("\n");
	  
	if(min1<min2)
	  printf("Smallest: %d",min1);
	else
	  printf("Smallest: %d",min2);
	
	printf("\n");
	return 0;
}
