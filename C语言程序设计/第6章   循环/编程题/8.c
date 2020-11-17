//显示单月的日历

#include<stdio.h>
int main(void)
{
	int i,d,w;
	
	printf("Enter number of days in month: ");
	scanf("%d",&d);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d",&w);
	
	printf("\n");
	
	if(w==2)
	  printf("   ");
	else if(w==3)
	  printf("      ");
	else if(w==4)
	  printf("         ");
	else if(w==5)
	  printf("            ");
	else if(w==6)
	  printf("               ");
	else if(w==7)
	  printf("                  ");
	  
	for(i=1;i<=d;i++){
		printf("%2d ",i);
		if((i+w-1)%7==0)
		  printf("\n");
	}
	printf("\n");
	return 0;
 } 
