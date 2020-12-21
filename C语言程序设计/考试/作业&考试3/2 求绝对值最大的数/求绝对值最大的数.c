#include<stdio.h>
int main(void)
{
	int i,m,max,c;
	scanf("%d",&m);
	int a[m],b[m];
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
		if(a[i]<0)
		  b[i]=-a[i];
		else
		  b[i]=a[i];
	}
	max=b[0];
	for(i=1;i<m;i++){
		if(b[i]>max){
		    max=b[i];
		    c=i;
	    }
	}
	printf("%d\n",a[c]);
	return 0;	
}
