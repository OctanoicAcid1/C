#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	char work[1],ch[n][5];
	work[0]=getchar();
	for(i=0;i<n;i++){
		scanf("%s",&ch[i]);
	}
	
	for(i=0;i<n;i++){
		if(strcmp(ch[i],"n/a")!=0)
		  break;
	}
	if(i==n){
	    printf("n/a\n");
	}
	
	else{
	    int j=0,len,t;
	    float num[n],sum=0;
	    for(i=0;i<n;i++){
	    	num[i]=0;
		}
	    for(i=0;i<n;i++){
		    if(strcmp(ch[i],"n/a")!=0){
		    	if(ch[i][0]!='-'){
		    		len=strlen(ch[i]);
		    		int y,c,d,z[len];
		    		d=len;
		    		for(c=0;c<len;c++)
		    		  z[c]=1;
		    		for(c=0;c<len;c++){
		    		    for(y=0;y<d-1;y++){
		    			    z[c]*=10;
					    }
					    d--;
					}
		    		for(t=0;t<len;t++){
			            num[j]+=(ch[i][t]-'0')*z[t];
			        }
			        j++;
			    }
			    else{
			    	len=strlen(ch[i]);
		    		int y,c,d,z[len];
		    		d=len;
		    		for(c=1;c<len;c++)
		    		  z[c]=1;
		    		for(c=1;c<len;c++){
		    		    for(y=1;y<d-1;y++){
		    			    z[c]*=10;
					    }
					    d--;
					}
		    		for(t=1;t<len;t++){
			            num[j]+=(ch[i][t]-'0')*z[t];
			        }
			        num[j]=-num[j];
			        j++;
				}
		    }
	    }
	    for(i=0;i<j;i++){
		    sum+=num[i];
	    }
	    printf("%.2f\n",sum/j);
	}
	
	return 0;
}
