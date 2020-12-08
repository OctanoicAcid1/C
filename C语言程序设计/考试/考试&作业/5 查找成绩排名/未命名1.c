#include<string.h>
#include<stdio.h>
int main(void)
{
	int i,n;
	char inf[20];
	
	scanf("%d",&n);
	
	char name[n][10],id[n][19];
	char score[n][5],rank[n][5];
	
	scanf("%s",inf);
	
	for(i=0;i<n;i++){
		scanf("%s%s%s",&name[i],&id[i],&score[i]);
	} 
	
	for(i=0;i<n;i++){
		if(strcmp(score[i],"n/a")==0)
          rank[i]="n/a";
	}
	
	for(i=0;i<n;i++){
		
	}
	
	
	
	
	for(i=0;i<n;i++){
		if(strcmp(name[i],inf)==0)
		  printf()
	}
	
	
}
