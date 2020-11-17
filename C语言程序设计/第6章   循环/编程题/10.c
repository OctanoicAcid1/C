//输入任意个日期，判定哪个日期最早

#include<stdio.h>
int main(void)
{
	int m,d,y,m1,d1,y1;
	
	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d",&m,&d,&y);
	
	for(;;){
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d",&m1,&d1,&y1);
		if(m1!=0||d1!=0||y1!=0){
		  if(y>y1){
			y=y1;
			d=d1;
			m=m1;
		  }else if(y==y1){
		        if(m>m1){
		        	d=d1;
		        	m=m1;
				}else if(m==m1){
				        if(d>d1)
				          d=d1;
	      }
          }
        }else
           break;
		}
		printf("%d/%d/%d is the earliest date\n",m,d,y);
		return 0;
}
 
