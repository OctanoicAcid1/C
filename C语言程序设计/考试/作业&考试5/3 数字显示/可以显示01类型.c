#include<stdio.h>
int main(void)
{
	int i,j;
	char lattice[10][5][7];//可能需要初始化为\0 
	
	//0的点阵 
	for(i=0;i<7;i++){
		lattice[0][0][i]='*';
		lattice[0][4][i]='*';
	}
	for(i=1;i<4;i++){
		lattice[0][i][0]='*';
		lattice[0][i][6]='*';
		for(j=1;j<6;j++){
			lattice[0][i][j]=' ';
		}
	}
	
	//1
	for(i=0;i<7;i++){
		lattice[1][4][i]='*';
	} 
	for(i=0;i<4;i++){
		for(j=0;j<7;j++){
			lattice[1][i][j]='\0';
		}
	}
	
	//2
	for(i=0;i<4;i++){
		lattice[2][0][i]='*';
	}
	lattice[2][0][4]=' ';
	lattice[2][0][5]=' ';
	lattice[2][0][6]='*';
	for(i=1;i<4;i++){
		lattice[2][i][0]='*';
		lattice[2][i][3]='*';
		lattice[2][i][6]='*';
		lattice[2][i][1]=' ';
		lattice[2][i][2]=' ';
		lattice[2][i][4]=' ';
		lattice[2][i][5]=' ';
	}
	for(i=3;i<7;i++){
		lattice[2][4][i]='*';
	}
	lattice[2][4][2]=' ';
	lattice[2][4][1]=' ';
	lattice[2][4][0]='*';
	
	//3
	for(i=0;i<5;i++){
		lattice[3][i][0]='*';
		lattice[3][i][3]='*';
		lattice[3][i][6]='*';
		lattice[3][i][1]=' ';
		lattice[3][i][2]=' ';
		lattice[3][i][4]=' ';
		lattice[3][i][5]=' ';
	} 
	lattice[3][4][1]='*';
	lattice[3][4][2]='*';
	lattice[3][4][4]='*';
	lattice[3][4][5]='*';
	
	//4
	for(i=0;i<5;i++){
		lattice[4][i][0]=' ';
		lattice[4][i][1]=' ';
		lattice[4][i][2]=' ';
		lattice[4][i][4]=' ';
		lattice[4][i][5]=' ';
		lattice[4][i][6]=' ';
		lattice[4][i][3]='*';
	}
	lattice[4][0][4]='*';
	lattice[4][0][5]='*';
	lattice[4][0][6]='*';
	for(i=0;i<7;i++){
		lattice[4][4][i]='*';
	}
	
	//5
	for(i=0;i<5;i++){
		lattice[5][i][0]='*';
		lattice[5][i][3]='*';
		lattice[5][i][6]='*';
		lattice[5][i][1]=' ';
		lattice[5][i][2]=' ';
		lattice[5][i][4]=' ';
		lattice[5][i][5]=' ';
	}
	lattice[5][0][4]='*';
	lattice[5][0][5]='*';
	lattice[5][4][1]='*';
	lattice[5][4][2]='*';
	
	//6
	for(i=0;i<5;i++){
		for(j=0;j<7;j++){
			lattice[6][i][j]='*';
		}
	}
	lattice[6][1][1]=' ';
	lattice[6][1][2]=' ';
	lattice[6][1][4]=' ';
	lattice[6][1][5]=' ';
	lattice[6][2][1]=' ';
	lattice[6][2][2]=' ';
	lattice[6][2][4]=' ';
	lattice[6][2][5]=' ';
	lattice[6][4][4]=' ';
	lattice[6][4][5]=' ';
	lattice[6][3][1]=' ';
	lattice[6][3][2]=' ';
	lattice[6][3][4]=' ';
	lattice[6][3][5]=' ';
	
	//7
	for(i=0;i<4;i++){
		for(j=0;j<6;j++){
			lattice[7][i][j]=' ';
		}
		lattice[7][i][6]='*';
	}
	for(i=0;i<7;i++){
		lattice[7][4][i]='*';
	}
	
	//8
	for(i=0;i<5;i++){
		lattice[8][i][0]='*';
		lattice[8][i][3]='*';
		lattice[8][i][6]='*';
		lattice[8][i][1]=' ';
		lattice[8][i][2]=' ';
		lattice[8][i][4]=' ';
		lattice[8][i][5]=' ';
	}
	for(i=0;i<7;i++){
		lattice[8][0][i]='*';
		lattice[8][4][i]='*';
	}
	
	//9
	for(i=0;i<5;i++){
		lattice[9][i][0]='*';
		lattice[9][i][3]='*';
		lattice[9][i][6]='*';
		lattice[9][i][1]=' ';
		lattice[9][i][2]=' ';
		lattice[9][i][4]=' ';
		lattice[9][i][5]=' ';
	}
	for(i=0;i<7;i++){
		lattice[9][0][i]='*';
		lattice[9][4][i]='*';
	}
	lattice[9][0][1]=' ';
	lattice[9][0][2]=' ';
	
	
	int k;
	scanf("%d",&k);
	char work[1];
	work[0]=getchar();
	for(i=0;i<k;i++){
		int t,x,y;
		char num1[20];
		x=-1;//录入测试数
		do{
			x++;
			num1[x]=getchar();
		}while(num1[x]!='\n');
		num1[x]='\0';
		for(y=0;y<x;y++){
			printf("%c",num1[y]);
		}
		printf(":\n");
		int num[x];
		for(j=0;j<x;j++){//将x的每位数记录到一个数组里，一个下标对应一个数字 
			num[j]=num1[j]-'0';
		}
		int n,p,q;
		
		for(n=6;n>=0;n--){//输出：算法核心 
	        for(p=0;p<x;p++){
	        	q=num[p];
		        for(j=0;j<5;j++){
	                printf("%c",lattice[q][j][n]);
                }
                printf("  ");
            }
            printf("\n");
        }
	}
	return 0;
 } 
