#include<stdio.h>
#include<stdlib.h>

#define N 5

struct part{
	int number;
	char name[25];
	int on_hand;
}inventory[N];

int main(void)
{
	FILE *fp;
	int i;
	
	for(i=0;i<N;i++){
		inventory[i].number=i+1;
		printf("�������%d����������ƣ�",inventory[i].number);
		gets(inventory[i].name);
		printf("�������������Ŀ������"); 
		scanf("%d",&inventory[i].on_hand);
		char work[1];
		work[0]=getchar();
	}
	
	if((fp=fopen("inventory.txt","w+"))==NULL){
		fprintf(stderr,"Can't open inventory file\n");
		exit(EXIT_FAILURE);
	}
	
	fwrite(inventory,sizeof(struct part),N,fp);
	fclose(fp);
	return 0;
} 
