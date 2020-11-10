//选择起飞时间与用户输入最接近的航班，显示起飞时间和抵达时间

#include<stdio.h>
int main(void)
{
	int hour,minute,time;
	
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&hour,&minute);
	
	time=hour*60+minute;
	
	printf("Closest departure time is ");
	if(time<(8*60+9*60+43)/2)
	  printf("8:00 a.m., arriving at 10:16 a.m.");
	else if(time<(9*60+11*60+19)/2)
	  printf("9:43 a.m., arriving at 11:52 a.m.");
	else if(time<(11*60+19+12*60+47)/2)
	  printf("11:19 a.m., arriving at 1:31 p.m.");
	else if(time<(12*60+47+(2+12)*60)/2)
	  printf("12:47 p.m., arriving at 3:00 p.m.");
	else if(time<((2+12)*60+(3+12)*60+45)/2)
	  printf("2:00 p.m., arriving at 4:08 p.m.");
	else if(time<((3+12)*60+45+(7+12)*60)/2)
	  printf("3:45 p.m., arriving at 5:55 p.m.");
	else if(time<((7+12)*60+(9+12)*60+45)/2)
	  printf("7:00 p.m., arriving at 9:20 p.m.");
	else
	  printf("9:45 p.m., arriving at 11:58 p.m.");
	  
	printf("\n");
	
	return 0;
 } 
