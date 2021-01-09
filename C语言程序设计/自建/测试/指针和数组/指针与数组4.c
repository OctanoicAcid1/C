//*a[2]+1相当于*(a[2])+1，即a[2][0]+1，即‘B’+1，即‘C’ 
//*a+1，即a[0]+1，而a[0]为a[0][0]的地址，+1则从a[0][1]开始输出，由于%s，所以遇到空字符结束 

#include<stdio.h>
int main(void)
{
	char a[][5]={"ABCD","1234","BOMB"};
	printf("%s,%c",*a+1,*a[2]+1); 
	return 0; 
 } 
