//蒲福风力等级
#include<stdio.h>
int main(void)
{
	float speed;
	 
	printf("Enter wind speed (sea mile / hour): ");
	scanf("%f",&speed);
	
	if(speed<1)
	  printf("Calm");
    else if(speed<=3)
      printf("Light air");
    else if(speed<=27)
      printf("Breeze");
    else if(speed<=47)
      printf("Gale");
    else if(speed<=63)
      printf("Storm");
    else if(speed>63)
      printf("Hurricane");
      
    printf("\n");
    return 0;
 } 
