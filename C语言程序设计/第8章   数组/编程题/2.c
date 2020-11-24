//修改repdigit.c，显示每个数字在数中出现的次数
 
#include<stdio.h>
int lenth(long n);
int main(void)
{
	int i,a[10]={0},b,len;
	long n;
	
	printf("Enter a number: ");
	scanf("%ld",&n);
	
	len=lenth(n);
	for(i=0;i<len;i++){
		b=n%10;
		a[b]++;
		n/=10;
	}
	
	printf("Digit:       ");
	for(i=0;i<10;i++)
	    printf("%d  ",i);
	
	printf("\nOccurrences: ");    
	for(i=0;i<10;i++)
		printf("%d  ",a[i]);
    printf("\n");
    
    return 0;
}
int lenth(long n)
{
	int j;
	
	for(j=0;n>0;j++)
		n/=10;
	return j;	
}
