#include<string.h>
#include<stdio.h>
void quicksort(char a[][5],int low,int high);
int split(char a[][5],int low,int high);
int main(void)
{
	int i,j,n;
	char inf[20];
	
	scanf("%d",&n);
	
	char name[n][10],id[n][19],store1[n][10],store2[n][19];
	char score[n][5],rank[n][5],b[n][5];
	
	scanf("%s",inf);//待查找串 
	
	for(i=0;i<n;i++)
	  scanf("%s%s%s",&name[i],&id[i],&score[i]);//录入每条信息 
	
	for(i=0;i<n;i++)
	  strcpy(store1[i],"-1");//初始化store1数组
	  
	for(i=0;i<n;i++)
	  strcpy(store2[i],"-1");//初始化store2数组    
	
	for(i=0;i<n;i++)
	  strcpy(b[i],score[i]);//储存score数组原始位置 
	
    quicksort(score,0,n-1);
	
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){	
		    if(strcmp(b[i],score[j])==0){
		    	if(strcmp(store1[i],"-1")==0){
			        strcpy(store1[j],name[j]);
			        strcpy(name[j],name[i]);	
				}
				else{
					strcpy(store1[j],name[j]);
					strcpy(name[j],store1[i]);
				}
		    }
		}
	}
	
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){	
		    if(strcmp(b[i],score[j])==0){
		    	if(strcmp(store2[i],"-1")==0){
			        strcpy(store2[j],id[j]);
			        strcpy(id[j],id[i]);	
				}
				else{
					strcpy(store2[j],id[j]);
					strcpy(id[j],store2[i]);
				}
		    }
		}
	}
	
	
	for(i=0;i<n;i++){
		if(strcmp(score[i],"n/a")==0)
          strcpy(rank[i],"n/a");
	    else
	      strcpy(rank[i],)
	}
	
	
	
	
	
	
	
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
