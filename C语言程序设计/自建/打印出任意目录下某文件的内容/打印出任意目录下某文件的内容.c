//打印出任意目录下文本文件的内容（注意编码格式的转换） 

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	char name[1000];
	printf("请告诉我一个文件的完整路径："); 
	gets(name);
	
	if((fp=fopen(name,"r"))==NULL){
		fprintf(stderr,"无法打开%s\n",name);
		exit(EXIT_FAILURE);
	}
	
	char ch;
	while((ch=fgetc(fp))!=EOF){
		putchar(ch);
	}
	
	fclose(fp);
	return 0;
 } 
