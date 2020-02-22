#include<stdio.h>
int main(void)
{
	int i = 0;
	while (i <= 200000)
	{
		printf("2\n");
		i++;
	}
	if (i > 200000)
	{
		printf("1\n");
	}
	return 0;
}
//#include<stdio.h>
//int main(void)
//{
//	int i = 0;
//	while(i<=1000)
//	{
//		printf("²ÌÐìÀ¤\n");
//			i++;
//	}
//	while (i>1000&&i<=2000)
//	{
//		printf("ÎâÑå×æ\n");
//		i++;
//	}
//	if (i > 2000)
//	{
//		printf("·²¸ç\n");
//	}
//	return 0;
//}