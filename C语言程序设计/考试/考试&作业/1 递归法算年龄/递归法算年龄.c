#include<stdio.h>

int long_menzhen(int x,int y,int z);

int main(void)
{
	int n,a,k;
	scanf("%d%d%d",&n,&a,&k);
	
	if(n<2||n>100||a<=0||a>100||k<=0||k>100)
	  printf("Wrong Number\n");
	else
	  printf("%d\n",long_menzhen(n,a,k));
	  
	return 0;
}

int long_menzhen(int x,int y,int z)
{
	int i=2;
	if(i==x)
	  return y+z;
	else
	  return long_menzhen(x-1,y+z,z);
}
