#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("%s","\"\n"); 
	system("pause");
	return 0;//双引号引起的一串字符被认为字符串   
}

//字符串的结束标志是一个\0的转义字符。在计算字符串长度的时候\0是结束标志
//不算做字符串内容
//   \转义字符
