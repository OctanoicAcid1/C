//�ڵ����������ճ���Ļ��������һ�����ܣ���ʾ��ǰ���������ڼ�

#include<stdio.h>
int main(void)
{
	int month,day,year,week,c,y,m;//cΪ����-1��yΪ��ݺ���λ,mΪ�� 
	
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
    } //ÿ���1��2�·ݵ�����һ���13��14�·��� 
	
	week=(c/4-2*c+y+y/4+13*(m+1)/5+day-1)%7;//��ʱweek����Ϊ��
	
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
