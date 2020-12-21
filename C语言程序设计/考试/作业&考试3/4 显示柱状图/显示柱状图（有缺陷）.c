#include<stdio.h>
#include<string.h>
#define N 800
int main(void)
{
	int i,j,m,x,y,len1,len2;
	scanf("%d",&m);
	
	if(m<1||m>20)
	  return 0;
	
	char a[m][N],b[m][N],c[m][N],work[1];
	
	for(i=0;i<m;i++){
		strcpy(b[i],"20");
		strcpy(c[i],"20");//初始化为不可能输入的值 
	}
	
	work[0]=getchar();
	for(i=0;i<m;i++){
		j=-1;
		do{
			j++;
			a[i][j]=getchar();
		}while((a[i][j]!=' ')&&(a[i][j]!='\n'));
		a[i][j]='\0';
	}
	x=0;
	y=0;
	for(i=0;i<m;i++){
		if(a[i][0]!='-'){
		    strcpy(b[i],a[i]);
		    x++;//x为b的长度，b为正数数组 
	    }
	    else{
	        strcpy(c[i],a[i]);
	        y++;//y为c的长度，c为负数数组
	    }
	}//已将正负分开 
	//用for+if分别对正负数组判断是否含字母，若含字母则用strlen+strncpy去掉字母（需要新数组），随后将正数比较大小（化为整型，注意进位，用strlen判断字符位数），
	//负数比较大小，矩阵的高为（正数最大+负数绝对值最大+1），宽为（2m-1），第一排用正数最大的字符串的i，用for在前面输出2i个空格，再输字符（用if判断最后一位
	//是否为字母），后续空格用for和宽搞定。后续排用正数最大-排数 
	
	char p[m][N];
	for(i=0;i<m;i++){//为20的最后去掉 
		len1=strlen(b[i]);
		for(j=0;j<len1;j++){
			if(b[i][j]=='0'||b[i][j]=='1'||b[i][j]=='2'||b[i][j]=='3'||b[i][j]=='4'||b[i][j]=='5'||b[i][j]=='6'||b[i][j]=='7'||b[i][j]=='8'||b[i][j]=='9'){
				p[i][j]=b[i][j];//用于提取正数数组的无符号数字（p的第一维下标与正数数组一致） 
			}
		}
	} 
	
	char q[m][N];
	for(i=0;i<m;i++){//为20的最后去掉 
		len1=strlen(c[i]);
		for(j=1;j<len1;j++){
			if(c[i][j]=='0'||c[i][j]=='1'||c[i][j]=='2'||c[i][j]=='3'||c[i][j]=='4'||c[i][j]=='5'||c[i][j]=='6'||c[i][j]=='7'||c[i][j]=='8'||c[i][j]=='9'){
				q[i][j-1]=c[i][j];//用于提取负数数组的无符号数字（q的第一维下标与负数数组一致）（注意负数的下标与原始不同，需后续调整） 
			}
		}
 }
	
	char u[m];
	for(i=0;i<m;i++){
		len1=strlen(b[i]);
		if(b[i][len1-1]!='0'&&b[i][len1-1]!='1'&&b[i][len1-1]!='2'&&b[i][len1-1]!='3'&&b[i][len1-1]!='4'&&b[i][len1-1]!='5'&&b[i][len1-1]!='6'&&b[i][len1-1]!='7'&&b[i][len1-1]!='8'&&b[i][len1-1]!='9')
		  u[i]=b[i][len1-1];
		else
		  u[i]='+';//将正数数组的字符录入到u里，下标同p 
	}
	
	char v[m];
	for(i=0;i<m;i++){
		len1=strlen(c[i]);
		if(c[i][len1-1]!='0'&&c[i][len1-1]!='1'&&c[i][len1-1]!='2'&&c[i][len1-1]!='3'&&c[i][len1-1]!='4'&&c[i][len1-1]!='5'&&c[i][len1-1]!='6'&&c[i][len1-1]!='7'&&c[i][len1-1]!='8'&&c[i][len1-1]!='9')
		  v[i]=c[i][len1-1];
		else
		  v[i]='+';//将负数数组的字符录入到v里，下标同q 
	} 
	
	char max1[N];
	for(i=0;i<m;i++){
		if(strcmp(p[i],"20")!=0){
			strcpy(max1,p[i]);
			break;
		}
	}
	for(i=i+1;i<m;i++){
		if(strcmp(p[i],"20")==0)
		  continue;
		len1=strlen(max1);
		len2=strlen(p[i]);
		if(len1<len2||(len1==len2&&strcmp(max1,p[i])<0))
	      strcpy(max1,p[i]);//记录正数最大数值 
	} 
	
	char max2[N];
	for(i=0;i<m;i++){
		if(strcmp(q[i],"20")!=0){
			strcpy(max2,q[i]);
			break;
		}
	}
	for(i=i+1;i<m;i++){
		if(strcmp(q[i],"20")==0)
		  continue;
		len1=strlen(max2);
		len2=strlen(q[i]);
		if(len1<len2||(len1==len2&&strcmp(max2,q[i])<0))
		  strcpy(max2,q[i]);//记录负数最大数值 
	}
	
	int m1,m2;//将正负数最大数值整型化 
	len1=strlen(max1);
	len2=strlen(max2);
	if(len1==2)
	  m1=(max1[0]-'0')*10+(max1[1]-'0');
	else
	  m1=max1[0]-'0';
	if(len2==2)
	  m2=(max2[0]-'0')*10+(max2[1]-'0');
	else
	  m2=max2[0]-'0';
	
	
	int num1[m],num2[m];//将正负数整型化 
	for(i=0;i<m;i++){//将正数整型化 
		len1=strlen(p[i]);
		if(len1==2)
	      num1[i]=(p[i][0]-'0')*10+(p[i][1]-'0');
	    else
	      num1[i]=p[i][0]-'0';
	}
	
	for(i=0;i<m;i++){//将负数整型化 
		len2=strlen(q[i]);
		if(len2==2)
	      num2[i]=(q[i][0]-'0')*10+(q[i][1]-'0');
	    else
	      num2[i]=q[i][0]-'0';
    }
	
	for(i=0;i<m1;i++){//正数输出所需排数 
	    for(j=0;j<2*m-1;j++){//输出所需列数 
	        if(num1[j]==20){
	        	printf("  ");
	        	continue;
			}
	    	if(m1-i<=num1[j])
	    	  printf("%c ",u[j]);
	    	else
	    	  printf("  ");
		}
	    printf("\n");
	} 
	
	for(j=0;j<2*m-1;j++){
		printf("-");
	}
	printf("\n");
	
	for(i=0;i<m2;i++){//负数输出所需排数 
		for(j=0;j<2*m-1;j++){//输出所需列数
		    if(num2[j]==20){
		    	printf("  ");
		    	continue;
			}
			if(i<num2[j])
			  printf("%c ",v[j]);
			else
			  printf("  ");
		}
		printf("\n");
	}
	
	
	
	return 0;
 } 
