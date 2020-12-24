#include<stdio.h>
#include<string.h>
int main(void)
{
	char ch[2000];
	int i,j,x=0,y,t=-1;
	do{//录入文本 
		t++;
		ch[t]=getchar();
	}while(ch[t]!=EOF);
	
	char letter[200][200];
	for(i=0;i<t;i++){//提取单词 
		if((ch[i]>=65&&ch[i]<=90)||(ch[i]>=97&&ch[i]<=122)){
			for(j=i;j<t;j++){
				if((ch[j]>=65&&ch[j]<=90)||(ch[j]>=97&&ch[j]<=122))
				  letter[x][j-i]=ch[j];
				else{
					x++;
					i=j;
					break;
				}
			}
		}
	}
	
	int len;
	for(i=0;i<x;i++){//将大写字母变为小写 
		len=strlen(letter[i]);
		for(j=0;j<len;j++){
			if(letter[i][j]<=90)
			  letter[i][j]=letter[i][j]+32;
		}
	}
	
	int count[200];
	for(i=0;i<200;i++){
		count[i]=0;
	}
	for(i=0;i<x;i++){//记录单词次数 
		for(j=i;j<x;j++){
			if(strcmp(letter[i],letter[j])==0)
			  count[i]++;
		}
	}
	
	int p,max=0;
	for(i=0;i<x;i++){
		if(count[i]>max){
			max=count[i];
			p=i;
		}
		if(count[i]==max){//比较字典序 
			int len1,len2;
			len1=strlen(letter[i]);
			len2=strlen(letter[p]);
			if(len1<len2)
			  len=len1;
			else
			  len=len2;
			for(j=0;j<len;j++){
				if(letter[i][j]<letter[p][j])
				  break;
				if(letter[i][j]>letter[p][j]){
					max=count[i];
					p=i;
					break;
				}
			}
		}
	}
	
	printf("%s %d\n",letter[p],max);

	return 0;
 } 
