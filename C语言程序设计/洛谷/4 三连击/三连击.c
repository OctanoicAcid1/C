#include<stdio.h>
int main(void)
{
	int i;
	int num[9];
	for(i=123;i<=333;i++){
		int j=i*2,k=i*3;
		num[0]=i/100;
		num[1]=(i/10)%10;
		num[2]=i-(i/10)*10;
		num[3]=j/100;
		num[4]=(j/10)%10;
		num[5]=j-(j/10)*10;
		num[6]=k/100;
		num[7]=(k/10)%10;
		num[8]=k-(k/10)*10;
		int x,y;
		for(x=0;x<9;x++){
			if(num[x]==0)
			  break;
		}
		if(x<9)
		  continue;
		for(x=0;x<9;x++){
			for(y=x+1;y<9;y++){
				if(num[x]==num[y])
				  break;
			}
			if(y!=9)
			  break;
		}
		if(x==9)
		  printf("%d%d%d %d%d%d %d%d%d\n",num[0],num[1],num[2],num[3],num[4],num[5],num[6],num[7],num[8]);
	}
	return 0;
 } 
