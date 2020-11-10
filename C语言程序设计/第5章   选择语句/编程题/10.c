//把数字表示成绩转化为字母表示的等级

#include<stdio.h>
int main(void)
{
	int grade,i;
	
	printf("Enter numerical grade: ");
	scanf("%d",&grade);
	
	i=grade/10;
	
	printf("Letter grade: ");
	if(grade>100||grade<0)
	  printf("WRONG");
	else
	  switch(i){
		case 0:case 1:case 2:case 3:case 4:case 5:
		printf("F");break;
		case 6:
		printf("D");break;
		case 7:
		printf("C");break;
		case 8:
		printf("B");break;
		case 9:case 10:
		printf("A");break;
		default:
		printf("WRONG"); 
	}
	printf("\n");
	return 0;
 } 
