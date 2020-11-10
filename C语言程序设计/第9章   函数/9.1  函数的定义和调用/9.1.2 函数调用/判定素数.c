//ÅĞ¶¨ËØÊı

#include<stdbool.h> 
#include<stdio.h>

bool is_prime(int n)
{
	int i,j;
	
	if(n<=1){
		printf("Not prime\n");
	}else{for(i=2;i*i<=n;i++){
		   j=n%i;
		   if(j==0){
		     printf("Not prime\n");
		     break; 
		     }
	     }
	     if(i*i>n)
	     printf("Prime\n");
    }
}

int main(void)
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	
	is_prime(a);
	return 0;
}
