//���޸�����·�����ļ�����·�����������޸��ļ���׺�������޸��ļ�·����ǰ������Ҫ�з���Ȩ�ޣ� 
//CSDN��ʵ���õ�gets¼���ַ�
//�л��Ὠ��DOS�µ��޸��ļ�����ʹ�������в�����

//remove������ɾ��Ŀ¼���ļ�����rename�����÷����ƣ����򵥣������óɹ�Ҳ�᷵��0 
 
#include<stdio.h>
int main(void)
{
	int i=0; 
	char oldname[1000],newname[1000];
	printf("�������һ���ļ�������·����");
	
	while((oldname[i]=getchar())!='\n'){
		i++;
	}
	oldname[i]='\0';
	
	printf("�������µ�·�����ļ�����"); 
	i=0;
	while((newname[i]=getchar())!='\n'){
		i++;
	}
	newname[i]='\0';
	if(rename(oldname,newname)==0)
	  printf("�Ѿ����ļ��� %s �޸�Ϊ %s ��\n",oldname,newname);
	else
	  printf("�޸�ʧ��\n");
	return 0;
 } 
