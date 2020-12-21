//用getchar录入字符串，遇到回车时终止 
i=-1;
do{
    i++;
	a[i]=getchar();
}while(a[i]!='\n');

a[i]='\0';

//用getchar录入字符串，遇到空格时终止
i=-1;
do{
    i++;
	a[i]=getchar();
}while(a[i]!=' ');

a[i]='\0';
