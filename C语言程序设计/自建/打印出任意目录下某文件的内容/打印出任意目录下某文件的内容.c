//��ӡ������Ŀ¼���ı��ļ������ݣ�ע������ʽ��ת���� 

#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	char name[1000];
	printf("�������һ���ļ�������·����"); 
	gets(name);
	
	if((fp=fopen(name,"r"))==NULL){
		fprintf(stderr,"�޷���%s\n",name);
		exit(EXIT_FAILURE);
	}
	
	char ch;
	while((ch=fgetc(fp))!=EOF){
		putchar(ch);
	}
	
	fclose(fp);
	return 0;
 } 
