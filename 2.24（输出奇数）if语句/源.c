#include<stdio.h>
//int main(void)
//{
//	int num = 0;
//	printf("请输入一个数\n");
//	scanf_s("%d",&num);
//	if (num%2 != 0)
//	{
//		printf("该数是奇数。\n");
//	}
//	else
//	{
//		printf("该数不是奇数。\n");
//	}
//	return 0;
//}
int main(void)
{
	int num = 1;
	for(num=1; num<100; num++)
	{
		if (num % 2 == 0)
		{
			printf("%d\n",num);
		}
	}
	return 0;
}