#include<string.h>
#include<stdio.h>
int main(void)
{
	int i,j,n,len;
	scanf("%d",&n);
	
	char num[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&num[i]);
		len=strlen(num[i]);
		for(j=0;j<len;j++){
			if(num[i][j]!=num[i][len-1-j])
			  break;
		}
		if(j==len)
		  printf("Yes\n");
		else
		  printf("No\n");
	}
	return 0;
}
