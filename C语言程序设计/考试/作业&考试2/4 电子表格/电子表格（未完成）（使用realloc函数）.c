#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int i,j,x,n,r,c;
	scanf("%d%d",&r,&c);
	
	int **a,**store;
	
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
