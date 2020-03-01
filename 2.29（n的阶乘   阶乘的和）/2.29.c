#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)   /* n的阶乘*/
{
	int i = 1;
	int n = 0;
	int sum = 1;
	printf("请输入一个数\n");
	scanf("%d", &n);
	do
	{
		sum = sum * i;
		i++;
		
	} 
	while (i<=n);
	printf("%d\n", sum);
	return 0;
}

//---------------
//    1的阶乘到10的阶乘的和

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)//1的阶乘到10的阶乘的和
//{
//	int i = 1;
//	int n = 1;
//	int sum = 1;
//	int hehe = 0;
//
//	for (n = 1; n <= 10; n++)
//	{
//		do
//		{
//			sum = sum * i;
//			i++;
//		} while (i <= n);
//		hehe = hehe + sum;
//	}
//	printf("%d\n", hehe);
//	return 0;
//}