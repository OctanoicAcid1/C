#include<string.h>
#include<stdio.h>
int main(void)
{
	int len;
	char a[10];
	
    scanf("%s",a);
	len=strlen(a);
	
	if(len==8){//��A12345���� 
 	  int i;
	  char b[3];
		
	  strncpy(b,a,2);
	
	  if(strcmp(b,"��")==0)
	    printf("E5B79D");
      else if(strcmp(b,"��")==0)
        printf("E58680");
      else if(strcmp(b,"��")==0)
        printf("E696B0");
      else if(strcmp(b,"��")==0)
        printf("E98482");
      else if(strcmp(b,"��")==0)
        printf("E5AE81");
      else if(strcmp(b,"��")==0)
        printf("E6A182");
      else if(strcmp(b,"��")==0)
        printf("E9BB91");
      else if(strcmp(b,"��")==0)
        printf("E6B998");
      else if(strcmp(b,"��")==0)
        printf("E79A96");
      else if(strcmp(b,"��")==0)
        printf("E4BA91");
      else if(strcmp(b,"ԥ")==0)
        printf("E8B1AB");
      else if(strcmp(b,"��")==0)
        printf("E89299");
      else if(strcmp(b,"��")==0)
        printf("E8B5A3");
      else if(strcmp(b,"��")==0)
        printf("E8B4B5");
      else if(strcmp(b,"��")==0)
        printf("E8BEBD");
      else if(strcmp(b,"��")==0)
        printf("E88B8F");
      else if(strcmp(b,"��")==0)
        printf("E79498");
      else if(strcmp(b,"��")==0)
        printf("E6998B");
      else if(strcmp(b,"��")==0)
        printf("E6B599");
      else if(strcmp(b,"��")==0)
        printf("E99995");
      else if(strcmp(b,"��")==0)
        printf("E59089");
      else if(strcmp(b,"��")==0)
        printf("E6B89D");
      else if(strcmp(b,"��")==0)
        printf("E8978F");
      else if(strcmp(b,"��")==0)
        printf("E7B2A4");
      else if(strcmp(b,"³")==0)
        printf("E9B281");
      else if(strcmp(b,"��")==0)
        printf("E790BC");
      else if(strcmp(b,"��")==0)
        printf("E99D92");
	  else if(strcmp(b,"��")==0)
        printf("E997BD");
	  else if(strcmp(b,"��")==0)
        printf("E4BAAC");      
      else if(strcmp(b,"��")==0)
        printf("E6B4A5");
	  else if(strcmp(b,"��")==0)
        printf("E6B2AA");    
      
      for(i=2;i<=7;i++)
	    printf("%c",a[i]);
    }
    
    else if(len==9){
    	int j;
		 
    	char c[1];
    	strncpy(c,a,2);
    	if(strcmp(c,"WJ")==0){//WJ��12345���� 
    	  char d[1];
    	  strncpy(d,a,4);
    	  if(strcmp(d,"WJ��")==0)
    	    printf("WJE5B79D");
          else if(strcmp(d,"WJ��")==0)
    	    printf("WJE58680");
    	  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE696B0");
    	  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE98482");
    	  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE5AE81");
    	  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE6A182");
    	  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE9BB91");
    	  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE6B998"); 
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE79A96");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE4BA91");
		  else if(strcmp(d,"WJԥ")==0)
    	    printf("WJE8B1AB");	
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE89299");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE8B5A3");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE8B4B5");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE8BEBD");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE88B8F");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE79498");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE6998B");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE6B599");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE99995");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE59089");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE6B89D");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE8978F");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE7B2A4");
		  else if(strcmp(d,"WJ³")==0)
    	    printf("WJE9B281");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE790BC");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE99D92");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE997BD");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE4BAAC");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE6B4A5");
		  else if(strcmp(d,"WJ��")==0)
    	    printf("WJE6B2AA");
																									 
    	  for(j=4;j<=8;j++)
	        printf("%c",a[j]);
		}else{//��A1234�� ����
		  int i;
	      char f[]="�����¶������������ԥ�ɸӹ����ոʽ����¼������³����������";
		
	
	      if(a[0]==f[0]&&a[1]==f[1])
	        printf("E5B79D");
          else if(a[0]==f[2]&&a[1]==f[3])
            printf("E58680");
          else if(a[0]==f[4]&&a[1]==f[5])
            printf("E696B0");
          else if(a[0]==f[6]&&a[1]==f[7])
            printf("E98482");
          else if(a[0]==f[8]&&a[1]==f[9])
            printf("E5AE81");
          else if(a[0]==f[10]&&a[1]==f[11])
            printf("E6A182");
          else if(a[0]==f[12]&&a[1]==f[13])
            printf("E9BB91");
          else if(a[0]==f[14]&&a[1]==f[15])
            printf("E6B998");
          else if(a[0]==f[16]&&a[1]==f[17])
            printf("E79A96");
          else if(a[0]==f[18]&&a[1]==f[19])
            printf("E4BA91");
          else if(a[0]==f[20]&&a[1]==f[21])
            printf("E8B1AB");
          else if(a[0]==f[22]&&a[1]==f[23])
            printf("E89299");
          else if(a[0]==f[24]&&a[1]==f[25])
            printf("E8B5A3");
          else if(a[0]==f[26]&&a[1]==f[27])
            printf("E8B4B5");
          else if(a[0]==f[28]&&a[1]==f[29])
            printf("E8BEBD");
          else if(a[0]==f[30]&&a[1]==f[31])
            printf("E88B8F");
          else if(a[0]==f[32]&&a[1]==f[33])
            printf("E79498");
          else if(a[0]==f[34]&&a[1]==f[35])
            printf("E6998B");
          else if(a[0]==f[36]&&a[1]==f[37])
            printf("E6B599");
          else if(a[0]==f[38]&&a[1]==f[39])
            printf("E99995");
          else if(a[0]==f[40]&&a[1]==f[41])
            printf("E59089");
          else if(a[0]==f[42]&&a[1]==f[43])
            printf("E6B89D");
          else if(a[0]==f[44]&&a[1]==f[45])
            printf("E8978F");
          else if(a[0]==f[46]&&a[1]==f[47])
            printf("E7B2A4");
          else if(a[0]==f[48]&&a[1]==f[49])
            printf("E9B281");
          else if(a[0]==f[50]&&a[1]==f[51])
            printf("E790BC");
          else if(a[0]==f[52]&&a[1]==f[53])
            printf("E99D92");
	      else if(a[0]==f[54]&&a[1]==f[55])
            printf("E997BD");
	      else if(a[0]==f[56]&&a[1]==f[57])
            printf("E4BAAC");      
          else if(a[0]==f[58]&&a[1]==f[59])
            printf("E6B4A5");
	      else if(a[0]==f[60]&&a[1]==f[61])
            printf("E6B2AA"); 
			
		  for(i=2;i<=6;i++)
	        printf("%c",a[i]);  
            
		  char e[]="��ѧ���۰�ʹ��";
	      if(a[7]==e[0]&&a[8]==e[1])
	        printf("E68C82"); 
	      if(a[7]==e[2]&&a[8]==e[3])
	        printf("E5ADA6"); 
		  if(a[7]==e[4]&&a[8]==e[5])
	        printf("E8ADA6"); 
		  if(a[7]==e[6]&&a[8]==e[7])
	        printf("E6B8AF"); 
		  if(a[7]==e[8]&&a[8]==e[9])
	        printf("E6BEB3"); 
		  if(a[7]==e[10]&&a[8]==e[11])
	        printf("E4BDBF"); 
		  if(a[7]==e[12]&&a[8]==e[13])
	        printf("E9A286"); 				   
		  
        }
	}
	return 0;
}
