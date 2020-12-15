#include<string.h> 
#include<stdio.h>
int main(void)
{
	int a=-1,b=-1,c,i,j,n,len1,len2,len3,len4;
	char max[5],min[5];
	
	scanf("%d",&n);
	
	char name[n][10],id[n][19];
	char score[n][5];
	
	for(i=0;i<n;i++){
		scanf("%s%s%s",&name[i],&id[i],&score[i]);
	} 

    strcpy(max,"0");
	strcpy(min,"100");
	for(i=0;i<n;i++){
		if(strcmp(score[i],"n/a")==0)
	      continue;
	    if(a==-1)
	      a=i;
	    len1=strlen(max);
	    len2=strlen(score[i]);
	    if(len2<len1)
	      continue;	
	    if(len2>len1||strcmp(score[i],max)>=0){
		    if(strcmp(score[i],max)==0){
			    if(strcmp(name[i],name[a])<0){			
	              strcpy(max,score[i]);
	              a=i;
			    }
		    }
	        else{
	            strcpy(max,score[i]);
	            a=i;
	        }
	    }
	}
	for(i=0;i<n;i++){
		if(strcmp(score[i],"n/a")==0)
	      continue;
	    if(b==-1)
	      b=i;
	    len1=strlen(min);
	    len2=strlen(score[i]);
	    if(len2>len1)
	      continue;
	    if(len2<len1||strcmp(score[i],min)<=0){
		    if(strcmp(score[i],min)==0){
			    if(strcmp(name[i],name[b])>0){			
	              strcpy(min,score[i]);
	              b=i;
			    }
		    }
		    else{
		        strcpy(min,score[i]);
		        b=i;
		    }
	    }
	}
	printf("%s %s\n",name[a],id[a]);
	printf("%s %s\n",name[b],id[b]);
		
	return 0;
 } 
