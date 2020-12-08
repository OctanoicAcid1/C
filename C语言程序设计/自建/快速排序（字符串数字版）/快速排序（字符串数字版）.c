#include<string.h>
#include<stdio.h>
void quicksort(char a[][5],int low,int high);
int split(char a[][5],int low,int high);
int main(void)
{
	int i,n;
	
	scanf("%d",&n);
    
	char a[n][5];

    for(i=0;i<n;i++)
      scanf("%s",&a[i]);
    
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
      printf("%s ",a[i]);
    printf("\n");
    
    return 0;
}

void quicksort(char a[][5],int low,int high)
{
	int middle;
	
	if(low>=high) return;
	middle=split(a,low,high);
	quicksort(a,low,middle-1);
	quicksort(a,middle+1,high);
}

int split(char a[][5],int low,int high)
{
	int len1,len2;
	
	char part_element[5];
	strcpy(part_element,a[low]);
	len1=strlen(part_element);
	
	for(;;){
		len2=strlen(a[high]);
		while(low<high&&(len1<len2||(len1==len2&&strcmp(part_element,a[high])<=0))){
		    high--;
		    len2=strlen(a[high]);
		}
		if(low>=high) break;
		strcpy(a[low],a[high]);
		low++;
		
		len2=strlen(a[low]);
		while(low<high&&(len2<len1||(len2==len1&&strcmp(a[low],part_element)<=0))){
			low++;
			len2=strlen(a[low]);
		}
		if(low>=high) break;
		strcpy(a[high],a[low]);
		high--;
	}
	
	strcpy(a[high],part_element);
	return high;
}
