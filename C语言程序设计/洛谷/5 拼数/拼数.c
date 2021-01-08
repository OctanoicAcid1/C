#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,n;
	scanf("%d",&n);
	char num[n][100];
	for(i=0;i<n;i++){
		scanf("%s",&num[i]);
	}

    int a;
    for(a=0;a<n;a++){
	    int t=0;
	    char max[100];
        strcpy(max,num[0]);
	    for(i=1;i<n;i++){
		    if(num[i][0]>max[0]){
			    strcpy(max,num[i]);
			    t=i;
		    }
		    if(num[i][0]==max[0]){
			    int j,len,len1,len2;
			    len1=strlen(max);
			    len2=strlen(num[i]);
			    if(len1<len2)
			      len=len1;
			    else
			      len=len2;
			    for(j=1;j<len;j++){
				    if(num[i][j]<max[j])
				      break;
				    if(num[i][j]>max[j]){
					    strcpy(max,num[i]);
					    t=i;
					    break;
				    }
			    }
			    if(j==len){
			      if(len1==len2)
			        continue;
			      if(len1>len2){
			  	    for(j=0;j<len;j++){
			  		    if(num[i][j]>max[len1-1]){
			  			    strcpy(max,num[i]);
			  			    t=i;
			  			    break;
					    }
					    if(num[i][j]<max[len1-1])
					      break;
				    }
			      }
			      if(len1<len2){
			  	    for(j=0;j<len;j++){
			  		    if(num[i][len2-1]>max[j]){
			  			    strcpy(max,num[i]);
			  			    t=i;
			  			    break;
					    }
					    if(num[i][len2-1]<max[j]){
						    break;
					    }
				    }
			      }
			    }
		    }
	    }
	    printf("%s",max);
	    strcpy(num[t],"\0");
    }
	printf("\n");
	 
	return 0;
}
