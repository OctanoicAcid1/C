#include<string.h>
#include<stdio.h>
int main(void)
{
	int i,x,y,n;
	scanf("%d",&n);
	
	int num[n],num2[n],num3[n],num4[n],len[n];
	
	//录入数 
	for(i=0;i<n;i++){
		scanf("%d",&num[i]);
        num2[i]=num[i];
        num3[i]=num[i];
        num4[i]=num[i];
	}
	
	//记录每个数长度 
	for(i=0;i<n;i++){
		for(len[i]=0;num2[i]!=0;len[i]++)
		  num2[i]/=10;
	}
	
	for(i=0;i<n;i++){
		for(y=1;len[i]-y>0;y++){
			for(x=0;x<len[i]-y;x++)
			  num3[i]/=10;
		    for(x=0;x<y;x++){
		        if(y-x==1) 
				  num4[i]=num4[i]%10;
		        else
		          num4[i]/=10;
			}
		    if(num3[i]!=num4[i])
		      break;
		    num3[i]=num[i];
		    num4[i]=num[i];
		}
		if(len[i]-y==0)
		  printf("YES\n");
		else
		  printf("NO\n");
	}
	return 0;
}
