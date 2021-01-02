//大成功！！！
//可以检测任意目录下的文件能否打开
//注意：路径中\的转义符为\\
//格式举例：检测文件是否可以打开（任意目录） C:\\Users\\凪\\Desktop\\学习\\八秒正能量.docx 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i;
	char name[1000];
	for(i=0;i<1000;i++){
		name[i]='\0';
	}
	FILE *fp;
	for(i=1;i<argc;i++){
        strcat(name,argv[i]);
	}
	if((fp=fopen(name,"r"))==NULL){
		printf("%s can't be opened.\n",name);
		exit(EXIT_FAILURE); 
	}
	printf("%s can be opened.\n",name);
	fclose(fp);
	return 0;
}
