#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	if(n<1||n>100)
	  return 0;
	char work[1],ch[n][5];
	work[0]=getchar();
	for(i=0;i<n;i++){
		int j=-1;
		do{
			j++;
			ch[i][j]=getchar();
		}while(ch[i][j]!=' '&&ch[i][j]!='\n');
		ch[i][j]='\0';
	}
	
	for(i=0;i<n;i++){
		if(strcmp(ch[i],"n/a")!=0)
		  break;
	}
	if(i==n){
	    printf("n/a\n");
	}
	
	else{
	    int j=0;
	    float num[n],sum=0;
	    for(i=0;i<n;i++){
		    if(strcmp(ch[i],"n/a")!=0){
			    num[j]=ch[i][0]-'0';
			    j++;
		    }
	    }
	    for(i=0;i<j;i++){
		    sum+=num[i];
	    }
	    printf("%.2f\n",sum/j);
	}
	
	return 0;
}
