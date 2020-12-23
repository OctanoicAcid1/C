#include<stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(a<=b&&b<=c&&c<=d){
		    printf("%d %d %d %d\n",a,b,c,d);
		    continue;
		}
		if(a<=b&&b<=d&&d<=c){
		    printf("%d %d %d %d\n",a,b,d,c);
		    continue;
		}
		if(a<=c&&c<=b&&b<=d){
		    printf("%d %d %d %d\n",a,c,b,d);
		    continue;
	    }
		if(a<=c&&c<=d&&d<=b){
		    printf("%d %d %d %d\n",a,c,d,b);
		    continue;
	    }
		if(a<=d&&d<=b&&b<=c){
		    printf("%d %d %d %d\n",a,d,b,c);
		    continue;
	    }
		if(a<=d&&d<=c&&c<=b){
		    printf("%d %d %d %d\n",a,d,c,b);
		    continue;
	    }
		if(b<=a&&a<=c&&c<=d){
		    printf("%d %d %d %d\n",b,a,c,d);
		    continue;
	    }
		if(b<=a&&a<=d&&d<=c){
		    printf("%d %d %d %d\n",b,a,d,c);
		    continue;
	    }
		if(b<=c&&c<=a&&a<=d){
		    printf("%d %d %d %d\n",b,c,a,d);
		    continue;
	    }
		if(b<=c&&c<=d&&d<=a){
		    printf("%d %d %d %d\n",b,c,d,a);
		    continue;
	    }
		if(b<=d&&d<=a&&a<=c){
		    printf("%d %d %d %d\n",b,d,a,c);
		    continue;
	    }
		if(b<=d&&d<=c&&c<=a){
		    printf("%d %d %d %d\n",b,d,c,a);
		    continue;
	    }
		if(c<=a&&a<=b&&b<=d){
		    printf("%d %d %d %d\n",c,a,b,d);
		    continue;
	    }
		if(c<=a&&a<=d&&d<=b){
		    printf("%d %d %d %d\n",c,a,d,b);
		    continue;
	    }
		if(c<=b&&b<=a&&a<=d){
		    printf("%d %d %d %d\n",c,b,a,d);
		    continue;
	    }
		if(c<=b&&b<=d&&d<=a){
		    printf("%d %d %d %d\n",c,b,d,a);
		    continue;
	    }
		if(c<=d&&d<=a&&a<=b){
		    printf("%d %d %d %d\n",c,d,a,b);
		    continue;
	    }
		if(c<=d&&d<=b&&b<=a){
		    printf("%d %d %d %d\n",c,d,b,a);
		    continue;
	    }
		if(d<=a&&a<=b&&b<=c){
		    printf("%d %d %d %d\n",d,a,b,c);
		    continue;
	    }
		if(d<=a&&a<=c&&c<=b){
		    printf("%d %d %d %d\n",d,a,c,b);
		    continue;
	    }
		if(d<=b&&b<=a&&a<=c){
		    printf("%d %d %d %d\n",d,b,a,c);
		    continue;
	    }
		if(d<=b&&b<=c&&c<=a){
		    printf("%d %d %d %d\n",d,b,c,a);
		    continue;
	    }
		if(d<=c&&c<=a&&a<=b){
		    printf("%d %d %d %d\n",d,c,a,b);
		    continue;
	    }
		if(d<=c&&c<=b&&b<=a){
		    printf("%d %d %d %d\n",d,c,b,a);
		    continue;
	    }
	}
	return 0;
}
