#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	char str[100];
	int n;
	if((fp=fopen("text.txt","a+"))==NULL){
		printf("cannot open this file.\n");
		return -1;
	}
	printf("please input into a string:\n");
	gets(str);
	fputs(str,fp);
	fseek(fp,0,SEEK_END);
	n=ftell(fp);
	printf("%d\n",n);
	fclose(fp);
	return 0;
}
