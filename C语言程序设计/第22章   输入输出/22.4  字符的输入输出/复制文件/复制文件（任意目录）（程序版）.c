#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *source_fp,*dest_fp;
	char source[1000],dest[1000];
	int i=0;
	int ch;
	
	printf("请输入源文件名：");
	while((source[i]=getchar())!='\n'){
		i++;
	}
	source[i]='\0';
	
	if((source_fp=fopen(source,"rb"))==NULL){
		printf("无法打开%s\n",source);
		exit(EXIT_FAILURE); 
	}
	
	i=0;
	printf("请输入复制文件的文件名：");
	while((dest[i]=getchar())!='\n'){
		i++;
	}
	dest[i]='\0';
	
	if((dest_fp=fopen(dest,"wb"))==NULL){
		printf("无法打开%s\n",dest);
		fclose(source_fp);
		exit(EXIT_FAILURE);
	}
	
	while((ch=getc(source_fp))!=EOF){
		putc(ch,dest_fp);
	}
	
	printf("复制成功！\n");
	fclose(source_fp);
	fclose(dest_fp);
	return 0;
 } 
