#include<stdio.h>
int main(void)
{
	int a = 10;
	int *p = &a;//p是一个指针变量，用来存放地址
	*p = 20;//   p存的是a的地址，则*p代表a   
	//    *间接访问操作符（解引用操作符
	//↑该操作可以给a赋值
	printf("%d\n", sizeof(*p));


	/*char ch = 'u';
	char* pc = &ch;*/
	
}
//指针变量的大小是固定的，跟存储的变量类型无关
//32位平台为4个字节，64位平台为8个字节