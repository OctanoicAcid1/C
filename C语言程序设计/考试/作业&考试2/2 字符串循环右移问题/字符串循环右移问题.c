#include<stdio.h>
#include<string.h>
int main(void)
{
	int i=-1,n,len;
	scanf("%d",&n);
	char a[1000],b[1];

    b[0]=getchar();

    do{
	    i++;
    	a[i]=getchar();
	}while(a[i]!='\n');

    a[i]='\0'; 

	len=strlen(a);
	
	for(i=0;i<len;i++){
		if(len-n+i<len)
		  printf("%c",a[len-n+i]);
	    else
	      printf("%c",a[i-n]);
	}
	printf("\n");
	return 0;
}
