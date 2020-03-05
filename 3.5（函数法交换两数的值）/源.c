#include<stdio.h>

void Swap(int* p1, int* p2)
{
	int tmp = 0;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

}
int main(void)
{
	int x = 10;
	int y = 20;
	printf("x=%d y=%d\n", x, y);


	Swap(&x, &y);
	
	printf("x=%d y=%d\n", x, y);

	return 0;
}
//错误示范↓↓↓
/*
void Swap(int m, int n)   传入了x y值
{
	int tmp = 0;
	tmp = m;      改变了m n 的值   并不能联系到x y
	m = n;      可采用取指针的方式联系到x y
	n = tmp;

}
int main(void)
{
	int x = 10;
	int y = 20;
	printf("x=%d y=%d\n", x, y);


	Swap(x, y);

	printf("x=%d y=%d\n", x, y);

	return 0;
}












*/