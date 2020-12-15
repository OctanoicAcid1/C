#include<string.h>
#include<stdio.h>
int main(void)
{
	int i,j,h,n,len;
	
	scanf("%d",&n);
	
	if(n>9||n<1)
	  return 0;
	else{
    char a[n][100];
    
    i=-1;
    done:
    for(;i<n-1;){
	    i++;
		scanf("%s",&a[i]);
		len=strlen(a[i]);
		if(len==3){
    	    if(a[i][0]=='S'&&a[i][1]=='C'&&a[i][2]=='U')
    	      printf("YES\n");
    	    else
    	      printf("NO\n");
        }
		else{
    		len=strlen(a[i]);
    		for(j=0;j<len;){
    		    if(a[i][j]!='A')
    		      break;
    		    j++;
    		    if(a[i][j]=='S'){
    		  	    if(a[i][j+1]=='C'){
    		  		    if(a[i][j+2]=='U'){
    		  		    	if(j+3==len){
    		  		    		printf("NO\n");
    		  		    		goto done;
							}
    		  			    else{
							    for(h=3;j+h<len;h++){
    		  				        if(a[i][j+h]!='A')
    		  				        break;
    		  			        }
						        if(j+h==len){
    		  			  	        printf("YES\n");
							        goto done;
					            }
					            else{
					  	            printf("NO\n");
					  	            goto done;
					            }
					        }
				        }
				        else{
				    	    printf("NO\n");
				    	    goto done;
					    } 
				    }
				    else{
			            printf("NO\n");
			            goto done;
			        }
    	        }
		    }    
		    printf("NO\n");
		    goto done;
	    }
    }

    return 0;
    } 
}
