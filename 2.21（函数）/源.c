#include<stdio.h>
int add(int x, int y)
{
	int z = x + y;
	return z;
}//������Ҫ��������������
int main(void)
{
	
	int a = 10;
	int b = 20;
	int c = add(a, b);
	/*int c = a + b;*/
	printf("%d\n", c);
	return 0;
}//�����ص㣺�򻯴��룬���븴��