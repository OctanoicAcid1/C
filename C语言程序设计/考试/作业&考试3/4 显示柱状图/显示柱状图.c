#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,x,m;
	scanf("%d",&m);
	int num[m];
	char ch[m];
	for(i=0;i<m;i++){
		scanf("%d",&num[i]);
		scanf("%c",&ch[i]);
		if(ch[i]==' '||ch[i]=='\n')
		  ch[i]='+';
	}//将数字与字符分离 
	int max,min;
	max=num[0];
	min=num[0];
	for(i=1;i<m;i++){
		if(num[i]>max)
		  max=num[i];
		if(num[i]<min)
		  min=num[i];
	}
	
	char pr[m][40];
	for(i=0;i<m;i++){
		if(num[i]==0){
		    for(j=0;j<-min;j++){////////出错尝试将j=0放在前一步，同下 
		        pr[i][j]=' ';
		    }
		    pr[i][j]='-';
		    if(min<=0){
	            for(j+=1;j<max-min+1;j++){
		            pr[i][j]=' ';
	            }
	        }
	        if(min>0){
	        	for(j+=1;j<max+1;j++){
	        		pr[i][j]=' ';
				}
			}
	    }
	    if(num[i]<0){
		    for(j=0;j<(-min)-(-num[i]);j++){
			    pr[i][j]=' ';
		    }
		    for(;j<-min;j++){
		    	pr[i][j]=ch[i];
			}
			pr[i][j]='-';
			for(j+=1;j<max-min+1;j++){//max小于等于0，则打不出来
			    pr[i][j]=' '; 
			}
	    }
	    if(num[i]>0){
	    	for(j=0;j<-min;j++){
	    		pr[i][j]=' ';
			}
			pr[i][j]='-';
			if(min<=0){
			    for(j+=1;j<num[i]-min+1;j++){
				    pr[i][j]=ch[i];
			    }
			    for(;j<max-min+1;j++){
				    pr[i][j]=' ';
			    }
			}
			if(min>0){
				for(j+=1;j<num[i]+1;j++){
					pr[i][j]=ch[i];
				}
			    for(;j<max+1;j++){
				    pr[i][j]=' ';
			    }
			}
		}
	}
	if(min*max<=0){
		for(j=max-min;j>=0;j--){
			if(j==-min){
				for(i=0;i<m-1;i++){
					printf("--");
				}
				printf("-\n");
			}
			else{
			    for(i=0;i<m;i++){
				    printf("%c ",pr[i][j]);
			    }
			    printf("\n");
		    }
		}
	}
	if(max<0){
		for(j=-min;j>=0;j--){
			if(j==-min){
				for(i=0;i<m-1;i++){
					printf("--");
				}
				printf("-\n");
			}
			else{
			    for(i=0;i<m;i++){
				    printf("%c ",pr[i][j]);
			    }
			    printf("\n");
		    }
		}
	}
	if(min>0){
		for(j=max;j>=0;j--){
			if(j==0){
				for(i=0;i<m-1;i++){
					printf("--");
				}
				printf("-\n");
			}
			else{
			    for(i=0;i<m;i++){
				    printf("%c ",pr[i][j]);
			    }
			    printf("\n");
			}
		}
	}
	
	return 0;
	
 } 
