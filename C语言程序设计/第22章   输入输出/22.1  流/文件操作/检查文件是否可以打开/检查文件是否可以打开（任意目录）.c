//��ɹ�������
//���Լ������Ŀ¼�µ��ļ��ܷ��
//ע�⣺·����\��ת���Ϊ\\
//��ʽ����������ļ��Ƿ���Դ򿪣�����Ŀ¼�� C:\\Users\\�M\\Desktop\\ѧϰ\\����������.docx 
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
