#include <stdio.h>

int main(void)
{
	int i1, i2, j1, j2, j3, j4, j5, j6;
	float i3, i4, i5, i6, i7, i8; 
	
	scanf("%d", &i1);
	scanf(" %d", &i2);
	printf("%d %d", i1, i2);//(a)等价 
	
	scanf("%d-%d-%d", &j1, &j2, &j3);
	scanf("%d -%d -%d", &j4, &j5, &j6);
	printf("%d%d%d %d%d%d", j1, j2, j3, j4, j5, j6);//(b)等价 
	
	scanf("%f", &i3);
	scanf("%f ", &i4);
	printf("%f %f", i3, i4);//(c)不等价 
	
	scanf("%f,%f", &i5, &i6);
	scanf("%f, %f", &i7, &i8);
	printf("%f %f %f %f", i5, i6, i7, i8);//(d)错误，猜测scanf间不可加逗号 
	
	return 0;
 } 
