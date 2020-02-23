#include<stdio.h>
int add(int x, int y)
{
	int z = x + y;
	return z;
}//函数体要放在主函数外面
int main(void)
{
	
	int a = 10;
	int b = 20;
	int c = add(a, b);
	/*int c = a + b;*/
	printf("%d\n", c);
	return 0;
}//函数特点：简化代码，代码复用