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
//����ʾ��������
/*
void Swap(int m, int n)   ������x yֵ
{
	int tmp = 0;
	tmp = m;      �ı���m n ��ֵ   ��������ϵ��x y
	m = n;      �ɲ���ȡָ��ķ�ʽ��ϵ��x y
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