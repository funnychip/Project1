#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)   /* n�Ľ׳�*/
{
	int i = 1;
	int n = 0;
	int sum = 1;
	printf("������һ����\n");
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
//    1�Ľ׳˵�10�Ľ׳˵ĺ�

//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(void)//1�Ľ׳˵�10�Ľ׳˵ĺ�
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