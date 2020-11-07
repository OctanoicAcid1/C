//在第五章年月日程序的基础上添加一个功能：显示当前日期是星期几

#include<stdio.h>
int main(void)
{
	int month,day,year,week,c,y,m;//c为世纪-1，y为年份后两位,m为月 
	
	printf("Enter date (mm/dd/yyyy): ");
	scanf("%d /%d /%d",&month,&day,&year);
	
	printf("Dated this %d",day);
	switch(day){
		case 1:case 21:case 31:
			printf("st");break;
		case 2:case 22:
			printf("nd");break;
		case 3:case 23:
			printf("rd");break;
		default:
			printf("th");break;
	}
	
	printf(" day of ");
	
	switch (month){
		case 1:printf("January");break;
		case 2:printf("February");break;
		case 3:printf("March");break;
		case 4:printf("April");break;
		case 5:printf("May");break;
		case 6:printf("June");break;
		case 7:printf("July");break;
		case 8:printf("August");break;
		case 9:printf("September");break;
		case 10:printf("October");break;
		case 11:printf("November");break;
		case 12:printf("December");break;
	}
	
	printf(", %d, ",year);
	
	c=year/100;
	y=year%100;
	m=month; 
	if(m<3){
	  m=m+12;
	  y=y-1;
    } //每年的1，2月份当作上一年的13，14月份算 
	
	week=(c/4-2*c+y+y/4+13*(m+1)/5+day-1)%7;//此时week可能为负
	
	if(week<0)
	  week=week+7;
	  
	switch(week){
		case 0:printf("Sunday.\n");break;
		case 1:printf("Monday.\n");break;
		case 2:printf("Tuesday.\n");break;
		case 3:printf("Wednesday.\n");break;
		case 4:printf("Thursday.\n");break;
		case 5:printf("Friday.\n");break;
		case 6:printf("Saturday.\n");break;
	}
	
	return 0;
 } 
