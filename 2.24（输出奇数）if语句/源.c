#include<stdio.h>
//int main(void)
//{
//	int num = 0;
//	printf("������һ����\n");
//	scanf_s("%d",&num);
//	if (num%2 != 0)
//	{
//		printf("������������\n");
//	}
//	else
//	{
//		printf("��������������\n");
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