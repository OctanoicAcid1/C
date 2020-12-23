#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,x=0,len;
	char a[2000];
	int t=-1;
	do{
		t++;
		a[t]=getchar();
	}while(a[t]!='\n');
	a[t]='\0';
	char letter[200][200],ch[200][200];
	for(i=0;i<t;){
		if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122)){
			for(j=i;;j++){
			    if((a[j]>=65&&a[j]<=90)||(a[j]>=97&&a[j]<=122)){
			    	letter[x][j-i]=a[j];
				}
				else
				  break;
			}
			x++;
			i=j;
		}
		if(a[i]<65||(a[i]>90&&a[i]<97)||a[i]>122){
			for(j=i;;j++){
				if(a[j]<65||(a[j]>90&&a[j]<97)||a[j]>122){
					letter[x][j-i]=a[j];
				}
				else
				  break;
			}
			x++;
			i=j;
		}
	}
	for(i=0;i<x;i++){
		if((letter[i][0]>=65&&letter[i][0]<=90)||(letter[i][0]>=97&&letter[i][0]<=122)){
			len=strlen(letter[i]);
			for(j=0;j<len;j++){
				ch[i][len-j-1]=letter[i][j];
			}
			for(j=0;j<len;j++){
				letter[i][j]=ch[i][j];
			}
		}
	}
	for(i=0;i<x;i++){
		printf("%s",letter[i]);
	}
	printf("\n");
	return 0;
}
