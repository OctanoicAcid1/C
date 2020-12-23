#include<stdio.h>
int main(void)
{
	int i,j,n,x,y,t1,t2,t3;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&x,&y);
		for(j=x;j<=y;j++){
			t1=j/100;
			t2=(j/10)%10;
			t3=j%10;
			if(j==t1*t1*t1+t2*t2*t2+t3*t3*t3)
			  printf("%d ",j);
		}
		for(j=x;j<=y;j++){
			t1=j/100;
			t2=(j/10)%10;
			t3=j%10;
			if(j==t1*t1*t1+t2*t2*t2+t3*t3*t3)
			  break;
		}
		if(j==y+1)
		  printf("-1");
		printf("\n");
	}
	return 0; 
 } 
