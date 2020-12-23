#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,x=0,y=0,len;
	char ch[70000];
	
	i=-1;
	do{
		i++;
		ch[i]=getchar();
	}while(ch[i]!='E');
	
	len=strlen(ch); 
	for(i=0;i<len;i++){
		if(ch[i]==' '||ch[i]=='\n')
		  continue;
		if(ch[i]=='W')
		  x++;
		if(ch[i]=='L')
		  y++;
		if(x>=11&&x-y>=2){
		    printf("%d:%d\n",x,y);
		    x=0;
		    y=0;
		}
		if(y>=11&&y-x>=2){
			printf("%d:%d\n",x,y);
			x=0;
			y=0;
		}
		if(i==len-1){
			printf("%d:%d\n",x,y);
			x=0;
			y=0;
		}
	}
	printf("\n"); 
	for(i=0;i<len;i++){
		if(ch[i]==' '||ch[i]=='\n')
		  continue;
		if(ch[i]=='W')
		  x++;
		if(ch[i]=='L')
		  y++;
		if(x>=21&&x-y>=2){
		    printf("%d:%d\n",x,y);
		    x=0;
		    y=0;
		}
		if(y>=21&&y-x>=2){
			printf("%d:%d\n",x,y);
			x=0;
			y=0;
		}
		if(i==len-1){
			printf("%d:%d\n",x,y);
			x=0;
			y=0;
		}
	}
	return 0;
 } 
