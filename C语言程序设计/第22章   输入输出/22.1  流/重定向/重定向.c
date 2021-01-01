//程序：读入字符并输出字符
//重定向符号：< test.txt表示输入重定向，将stdin（文件指针）从标准输入流（键盘）切换为text.txt文件，输出流仍然为屏幕，会将该文件的内容打在屏幕上
//            > test.txt表示输出重定向, 将stdout（文件指针）从标准输出流（屏幕）切换为text.txt文件，输入流仍然为键盘，会将打出的东西存入文件 
//使用重定向：Win+R并打开cmd，在黑窗进入重定向.exe的目录下，输入：重定向.exe < test.txt（输入重定向）
//                                                                重定向.exe > test.txt（输出重定向） 
//注意：文件和程序必须放在同一目录下，可以试试其他类型文件
//补充：
//1、重定向运算符是将一个可执行程序与一个数据文件连接起来，该运算符不能用于一个数据文件与另外一个数据文件的连接，也不能用于一个程序和另一个程序的连接。
//2、使用这些运算符时，输入不能来自一个以上的文件，输出也不能定向至一个以上的文件。
//3、’>>’运算符用累加的方法将数据输出到指定的文件上，不会覆盖已有的数据。 
#include<stdio.h>
int main(void)
{
	char ch;
	while((ch=getchar())!=EOF)
	{
		putchar(ch);
	}
	putchar('\n');
	return 0;
}
