#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int i,j,x,n,r,c,m;
	scanf("%d%d",&r,&c);
	
	int **a,**store,**b;
	
	a=(int**)malloc(r*sizeof(int *));//��̬��ά���� 
	store=(int**)malloc(r*sizeof(int *));
	
	for(i=0;i<r;i++){
		a[i]=(int *)malloc(c*sizeof(int));
	}//������̬��ά�����еĶ�̬һά���� 
	for(i=0;i<r;i++){
		store[i]=(int *)malloc(c*sizeof(int));
	}
	
	for(i=0;i<r;i++)
	  for(j=0;j<c;j++){
		  scanf("%d",&a[i][j]);//¼��ԭʼ���� 
          store[i][j]=a[i][j];//����һ��ԭʼ���� 
      }
      
    scanf("%d",&n);
    char cmd[n][20],hp[20],work[1];
    int y,z;//����¼�뱻������������ 
    
    work[0]=getchar();//�����鿪ʼ�� 
    
    for(x=0;x<n;x++){//��getchar��SR��SC��¼��һ�����飬���ո�¼���������飬��if������SR����IR�ж�Ҫ���뼸�����֣���Ҫ�����int��������scanf�ֱ�¼��һ�����飬Ȼ����strcmp�Ƚϲ����������ͱȽ����ֽ��в��� 
        i=-1;
        do{
	        i++;
    	    hp[i]=getchar();//���cmdû�ô���ͽ�hp����cmd 
	    }while(hp[i]!=' ');
        hp[i]='\0';
        if(strcmp(hp,"SR")==0||strcmp(hp,"SC")==0){
            scanf("%d",&y);
            work[0]=getchar();//����������� 
            scanf("%d",&z);
            if(strcmp(hp,"SR")==0){
            	for(j=0;j<c;j++){
            		a[y-1][j]=store[z-1][j];
            		a[z-1][j]=store[y-1][j];//�������ع����µ�store���� 
				}	
			}
			if(strcmp(hp,"SC")==0){
				for(m=0;m<r;m++){
					a[m][y-1]=store[m][z-1];
					a[m][z-1]=store[m][y-1];
				}
		    }
			for(m=0;m<r;m++){
				for(j=0;j<c;j++){
					store[m][j]=a[m][j];
				}
			}
		}
        if(strcmp(hp,"DR")==0){
        	r--;
        	scanf("%d",&y);
        	a=(int**)malloc(r*sizeof(int*));
        	for(j=0;j<c;j++){
        		a[j]=(int*)malloc(c*sizeof(int));
			}
			for(m=0;m<y-1;m++){
				for(j=0;j<c;j++){
					a[m][j]=store[m][j];
				}
			}
			for(m=y-1;m<r;m++){
				for(j=0;j<c;j++){
					a[m][j]=store[m+1][j];
				}
			}
			store=(int**)malloc(r*sizeof(int*));
			for(j=0;j<c;j++){
				store[j]=(int*)malloc(c*sizeof(int));
			}
			for(m=0;m<r;m++){
				for(j=0;j<c;j++){
					store[m][j]=a[m][j];
				}
			}
		}
		if(strcmp(hp,"DC")==0){
			c--;
			scanf("%d",&z);
			a=(int**)malloc(r*sizeof(int*));
        	for(j=0;j<c;j++){
        		a[j]=(int*)malloc(c*sizeof(int));
			}
			for(j=0;j<z-1;j++){
				for(m=0;m<r;m++){
					a[m][j]=store[m][j];
				}
			}
			for(j=z-1;j<c;j++){
				for(m=0;m<r;m++){
					a[m][j]=store[m][j+1];
				}
			}
			store=(int**)malloc(r*sizeof(int*));
			for(j=0;j<c;j++){
				store[j]=(int*)malloc(c*sizeof(int));
			}
			for(m=0;m<r;m++){
				for(j=0;j<c;j++){
					store[m][j]=a[m][j];
				}
			}
		}
		if(strcmp(hp,"IR")==0){
			r=r+1;
			scanf("%d",&y);
			a=(int**)malloc(r*sizeof(int*));
			for(j=0;j<c;j++){
				a[j]=(int*)malloc(c*sizeof(int));
			}
			for(m=0;m<y-1;m++){
				for(j=0;j<c;j++){
					a[m][j]=store[m][j];
				}
			}
			for(m=y;m<r;m++){
				for(j=0;j<c;j++){
					a[m][j]=store[m-1][j];
				}
			}
			for(j=0;j<c;j++){
				a[y-1][j]=0;
			}
			store=(int**)malloc(r*sizeof(int*));
			for(j=0;j<c;j++){
				store[j]=(int*)malloc(c*sizeof(int));
			}
			for(m=0;m<r;m++){
				for(j=0;j<c;j++){
					store[m][j]=a[m][j];
				}
			}
		}
		if(strcmp(hp,"IC")==0){
			c=c+1;
			scanf("%d",&z);
			a=(int**)malloc(r*sizeof(int*));
			for(j=0;j<c;j++){
				a[j]=(int*)malloc(c*sizeof(int));
			}
			for(j=0;j<z-1;j++){
				for(m=0;m<r;m++){
					a[m][j]=store[m][j];
				}
			}
			for(j=z;j<c;j++){
				for(m=0;m<r;m++){
					a[m][j]=store[m][j-1];
				}
			}
			for(m=0;m<r;m++){
				a[m][z-1]=0;
			}
			store=(int**)malloc(r*sizeof(int*));
			for(j=0;j<c;j++){
				store[j]=(int*)malloc(c*sizeof(int));
			}
			for(m=0;m<r;m++){
				for(j=0;j<c;j++){
					store[m][j]=a[m][j];
				}
			}
		}
		if(x<n-1) 
		  work[0]=getchar();//����������� 
	}
	
	
	
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++)
    	  printf("%d ",a[i][j]);
	    printf("\n");
	}
	free(a);
	free(store);
    
	return 0;
}
