//�޸ĵ�7�⣬ʹ����ʾ�û�����ÿ��ѧ��5�Ų���ĳɼ�����5��ѧ����
//����ÿ��ѧ�����ֺܷ�ƽ���֣��Լ�ÿ�Ų����ƽ���֡��߷֡��ͷ�

#include<stdio.h>
int main(void)
{
	float a[5][5],row=0,col=0,max,min;
	int i,j;
	
	printf("\t\t\t\tChinese  Math  English  Physics  Chemistry\n");
	
	for(i=0;i<5;i++){
		printf("Enter the scores of student%d: ",i+1);
		for(j=0;j<5;j++){
			scanf("%f",&a[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			row+=a[i][j];
		}
		printf("\nstudent %d:\n",i+1);
		printf("\ttatol score: %.1f",row);
		printf("\taverage score: %.1f\n",row/5);
		row=0;
	}
	
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			col+=a[i][j];
		}
		printf("\nCourse %d:\n",j+1);
		printf("\taverage score: %.1f ",col/5);
		max=a[0][j];
		for(i=1;i<5;i++){
			if(a[i][j]>max)
			  max=a[i][j];
		}
		printf("\tmax score: %.1f",max);
		min=a[0][j];
		for(i=1;i<5;i++){
			if(a[i][j]<min)
			  min=a[i][j];
		}
		printf("\tmin score: %.1f",min);
		col=0;
	}
	printf("\n");
	
	return 0;
 } 
