//可修改任意路径的文件名或路径名，可以修改文件后缀，可以修改文件路径（前提是需要有访问权限） 
//CSDN的实例用的gets录入字符
//有机会建个DOS下的修改文件名（使用命令行参数）

//remove函数（删除目录或文件）和rename函数用法类似（更简单），调用成功也会返回0 
 
#include<stdio.h>
int main(void)
{
	int i=0; 
	char oldname[1000],newname[1000];
	printf("请告诉我一个文件的完整路径：");
	
	while((oldname[i]=getchar())!='\n'){
		i++;
	}
	oldname[i]='\0';
	
	printf("请输入新的路径及文件名："); 
	i=0;
	while((newname[i]=getchar())!='\n'){
		i++;
	}
	newname[i]='\0';
	if(rename(oldname,newname)==0)
	  printf("已经将文件名 %s 修改为 %s 。\n",oldname,newname);
	else
	  printf("修改失败\n");
	return 0;
 } 
