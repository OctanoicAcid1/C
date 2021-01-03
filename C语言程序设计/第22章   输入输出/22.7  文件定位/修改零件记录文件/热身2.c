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
		printf("第%d类零件的名称：%s\n",inventory[i].number,inventory[i].name);
		printf("该种零件的库存数：%d\n",inventory[i].on_hand);
	}
	
	for(;;){
	    printf("\n是否需要修改库存数？是，请输入“1”；否，请输入“0”：");
	    int k;
	    scanf("%d",&k);
	    if(k==0){
	    	rewind(fp);
	    	fwrite(inventory,sizeof(struct part),N,fp);
	    	fclose(fp);
	    	return 0;
	    }
	    if(k==1){
		    printf("请输入需要修改第几类零件：");
		    int p;
			scanf("%d",&p);
			for(i=0;i<N;i++){
				if(inventory[i].number==p){
					printf("请输入新的库存数：");
					scanf("%d",&inventory[i].on_hand); 
				}
			} 
	    }
	}
} 
