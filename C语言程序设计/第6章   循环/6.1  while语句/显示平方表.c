//显示平方表
//Prints a table of squares using a while statement

#include <stdio.h>
int main(void)
{
	int n,i;
	
	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);
	
	i=1;
	while (i<=n){
	printf("%d\t%d\n",i,i*i);
	i++;
}
    return 0;
 }
