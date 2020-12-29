#include<stdio.h>
int main(void)
{
	int a,b,c,p=0,q=0;
	scanf("%d/%d/%d",&a,&b,&c);
	//满足第一种
	if(a>=1&&a<=12&&b>=1&&b<=31){//第一种所需情况，还不完整 
		if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){//31天情况（上面已经强调过b的范围） 
			p=1;//满足第一种，记录p为真 
		}
		if((a==4||a==6||a==9||a==11)&&b<=30){//30天情况
		    p=1; 
		}
		if(a==2&&c%4!=0&&b<=28){//28天情况
		    p=1; 
		}
		if(a==2&&c%4==0&&b<=29){//29天情况
		    p=1; 
		}
	}
	//满足第二种
	if(b>=1&&b<=12&&c>=1&&c<=31){//第二种所需情况，还不完整
	    if(b==1||b==3||b==5||b==7||b==8||b==10||b==12){//31天情况（上面已经强调过c的范围） 
			q=1;//满足第一种，记录q为真 
		}
		if((b==4||b==6||b==9||b==11)&&c<=30){//30天情况
		    q=1; 
		}
		if(b==2&&a%4!=0&&c<=28){//28天情况
		    q=1; 
		}
		if(b==2&&a%4==0&&c<=29){//29天情况
		    q=1; 
		} 
	}
	
	if(p==1&&q==0){//只满足第一种
	    if(a==1)printf("January");
	    if(a==2)printf("February");
	    if(a==3)printf("March");
	    if(a==4)printf("April");
	    if(a==5)printf("May");
	    if(a==6)printf("June");
	    if(a==7)printf("July");
	    if(a==8)printf("August");
	    if(a==9)printf("September");
	    if(a==10)printf("October");
	    if(a==11)printf("November");
	    if(a==12)printf("December");
	    if(c<10)
	      printf(" %d, 200%d\n",b,c);
	    else
	      printf(" %d, 20%d\n",b,c);
	}
	
	if(p==0&&q==1){//只满足第二种
	    if(b==1)printf("January");
	    if(b==2)printf("February");
	    if(b==3)printf("March");
	    if(b==4)printf("April");
	    if(b==5)printf("May");
	    if(b==6)printf("June");
	    if(b==7)printf("July");
	    if(b==8)printf("August");
	    if(b==9)printf("September");
	    if(b==10)printf("October");
	    if(b==11)printf("November");
	    if(b==12)printf("December");
	    if(a<10)
	      printf(" %d, 200%d\n",c,a);
	    else
	      printf(" %d, 20%d\n",c,a);
	}
	
	if(p==1&&q==1){//满足两种（不可能为00年）（算与2000.1.1的差距）（本身那年单独算） 
	    int x1,y1;
		x1=((c-1)/4+1)*366+(c-((c-1)/4+1))*365;//除去本身的其他年份
		if(c%4==0){//本年是闰月年
			if(a==1)y1=b;if(a==2)y1=31+b;if(a==3)y1=31+29+b;if(a==4)y1=31*2+29+b;if(a==5)y1=31*2+30+29+b;if(a==6)y1=31*3+30+29+b;if(a==7)y1=31*3+30*2+29+b;
			if(a==8)y1=31*4+30*2+29+b;if(a==9)y1=31*5+30*2+29+b;if(a==10)y1=31*5+30*3+29+b;if(a==11)y1=31*6+30*3+29+b;if(a==12)y1=31*6+30*4+29+b;
		}
		if(c%4!=0){//本年不是闰月年
			if(a==1)y1=b;if(a==2)y1=31+b;if(a==3)y1=31+28+b;if(a==4)y1=31*2+28+b;if(a==5)y1=31*2+30+28+b;if(a==6)y1=31*3+30+28+b;if(a==7)y1=31*3+30*2+28+b;
			if(a==8)y1=31*4+30*2+28+b;if(a==9)y1=31*5+30*2+28+b;if(a==10)y1=31*5+30*3+28+b;if(a==11)y1=31*6+30*3+28+b;if(a==12)y1=31*6+30*4+28+b; 
		}
		int x2,y2;
		x2=((a-1)/4+1)*366+(a-((a-1)/4+1))*365;//除去本身的其他年份
		if(a%4==0){//本年是闰月年
			if(b==1)y2=c;if(b==2)y2=31+c;if(b==3)y2=31+29+c;if(b==4)y2=31*2+29+c;if(b==5)y2=31*2+30+29+c;if(b==6)y2=31*3+30+29+c;if(b==7)y2=31*3+30*2+29+c;
			if(b==8)y2=31*4+30*2+29+c;if(b==9)y2=31*5+30*2+29+c;if(b==10)y2=31*5+30*3+29+c;if(b==11)y2=31*6+30*3+29+c;if(b==12)y2=31*6+30*4+29+c;
		}
		if(a%4!=0){//本年不是闰月年
			if(b==1)y2=c;if(b==2)y2=31+c;if(b==3)y2=31+28+c;if(b==4)y2=31*2+28+c;if(b==5)y2=31*2+30+28+c;if(b==6)y2=31*3+30+28+c;if(b==7)y2=31*3+30*2+28+c;
			if(b==8)y2=31*4+30*2+28+c;if(b==9)y2=31*5+30*2+28+c;if(b==10)y2=31*5+30*3+28+c;if(b==11)y2=31*6+30*3+28+c;if(b==12)y2=31*6+30*4+28+c;
		}
		printf("%d\n",x1+y1-x2-y2);
	}
	return 0;
}
