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
	
	
	if((fp=fopen("inventory.txt","r+"))==NULL){
		fprintf(stderr,"Can't open inventory file\n");
		exit(EXIT_FAILURE);
	}
	
	fread(inventory,sizeof(struct part),N,fp);
	for(i=0;i<N;i++){
		printf("��%d����������ƣ�%s\n",inventory[i].number,inventory[i].name);
		printf("��������Ŀ������%d\n",inventory[i].on_hand);
	}
	
	for(;;){
	    printf("\n�Ƿ���Ҫ�޸Ŀ�������ǣ������롰1�����������롰0����");
	    int k;
	    scanf("%d",&k);
	    if(k==0){
	    	rewind(fp);
	    	fwrite(inventory,sizeof(struct part),N,fp);
	    	fclose(fp);
	    	return 0;
	    }
	    if(k==1){
		    printf("��������Ҫ�޸ĵڼ��������");
		    int p;
			scanf("%d",&p);
			for(i=0;i<N;i++){
				if(inventory[i].number==p){
					printf("�������µĿ������");
					scanf("%d",&inventory[i].on_hand); 
				}
			} 
	    }
	}
} 
