//��ȡ5��5�����飬����ÿ�С�ÿ��֮��

#include<stdio.h>
int main(void)
{
	int a[5][5],row=0,col=0;
	int i,j;
	
	for(i=0;i<5;i++){
		printf("Enter row %d: ",i+1);
		for(j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nRow totals: ");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			row+=a[i][j];
		}
		printf("%d ",row);
		row=0;
	}
	printf("\nColumn totals: ");
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			col+=a[i][j];
		}
		printf("%d ",col);
		col=0;
	}
	printf("\n");
	
	return 0;
 }
