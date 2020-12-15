#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int i,j,x,n,r,c,m;
	scanf("%d%d",&r,&c);
	
	int **a,**store,**b;
	
	a=(int**)malloc(r*sizeof(int *));//动态二维数组 
	store=(int**)malloc(r*sizeof(int *));
	
	for(i=0;i<r;i++){
		a[i]=(int *)malloc(c*sizeof(int));
	}//创建动态二维数组中的动态一维数组 
	for(i=0;i<r;i++){
		store[i]=(int *)malloc(c*sizeof(int));
	}
	
	for(i=0;i<r;i++)
	  for(j=0;j<c;j++){
		  scanf("%d",&a[i][j]);//录入原始数组 
          store[i][j]=a[i][j];//备用一份原始数组 
      }
      
    scanf("%d",&n);
    char cmd[n][20],hp[20],work[1];
    int y,z;//用于录入被操作的行列数 
    
    work[0]=getchar();//打工数组开始打工 
    
    for(x=0;x<n;x++){//用getchar将SR、SC等录入一个数组，将空格录入垃圾数组，用if语句根据SR还是IR判断要输入几个数字，将要输入的int型数字用scanf分别录入一个数组，然后用strcmp比较操作，用整型比较数字进行操作 
        i=-1;
        do{
	        i++;
    	    hp[i]=getchar();//如果cmd没用待会就将hp换成cmd 
	    }while(hp[i]!=' ');
        hp[i]='\0';
        if(strcmp(hp,"SR")==0||strcmp(hp,"SC")==0){
            scanf("%d",&y);
            work[0]=getchar();//打工数组继续打工 
            scanf("%d",&z);
            if(strcmp(hp,"SR")==0){
            	for(j=0;j<c;j++){
            		a[y-1][j]=store[z-1][j];
            		a[z-1][j]=store[y-1][j];//待会需重构造新的store数组 
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
		  work[0]=getchar();//打工数组继续打工 
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
