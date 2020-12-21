#include<stdio.h>
int main(void)
{
	int i,j,b,x,y,z=0,a[2000];
	scanf("%d",&x);
	if(x<=6||(x%2==1))
	  printf("ERROR\n");
	else{
		for(i=3;i<=9999;i++){
	        for(y=2;y*y<=i;y++){
		        j=i%y;
		        if(j==0)
		          break;
			}
	        if(y*y>i){
	            a[z]=i;
                z++;
			}
		}
		for(z=0;a[z]<x;z++){
			b=x-a[z];
			for(i=z;a[i]<x;i++){
				if(b==a[i])
				  printf("%d %d\n",a[z],a[i]);
			}
		}
	}
	return 0;
 } 
