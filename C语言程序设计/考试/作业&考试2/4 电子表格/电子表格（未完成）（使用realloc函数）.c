#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int i,j,x,n,r,c;
	scanf("%d%d",&r,&c);
	
	int **a,**store;
	
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
				for(i=0;i<r;i++){
					a[i][y-1]=store[i][z-1];
					a[i][z-1]=store[i][y-z];
				}
		    }
		}
        if(strcmp(hp,"DR")==0){
        	scanf("%d",&y);
        	for(i=0;y+i<r;i++){
        	    for(j=0;j<c;j++){
        		    a[y-1+i][j]=store[y+i][j];
			    }
		    }
		    realloc(a,(r-1)*sizeof(int*));
		    r--;
		}
		if(strcmp(hp,"DC")==0){
			scanf("%d",&z);
			for(j=0;z+j<c;j++){
			    for(i=0;i<r;i++){
				    a[i][z-1+j]=store[i][z+j];
			    }
		    }
		    for(i=0;i<r;i++){
		    	realloc(a[i],(c-1)*sizeof(int));
			}
		    c--;
		}
		if(strcmp(hp,"IR")==0){
			scanf("%d",&y);
			realloc(a,(r+1)*sizeof(int*));
			realloc(a[r],c*sizeof(int));
			r++;
			for(i=0;y+i<r;i++){
				for(j=0;j<c;j++){
					a[r-1-i][j]=store[r-2-i][j];
				}
			}
			for(j=0;j<c;j++){
				a[y-1][j]=0;
			}
		}
	}
	
	
	
    for(i=0;i<r;i++){
    	for(j=0;j<c;j++)
    	  printf("%d ",a[i][j]);
	    printf("\n");
	}
    
	return 0;
}
