#include<stdio.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	int a,b,c;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&a,&b,&c); 
		if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a)
		  printf("No\n");
		else{
		    if((a*a+b*b==c*c)||(a*a==b*b+c*c)||(a*a+c*c==b*b))
		      printf("Yes\n");
		    else
		      printf("No\n");
        }
	}
	return 0;
 } 
