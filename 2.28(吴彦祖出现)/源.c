#include<stdio.h>
//int main(void)
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//	for (i = 0;  i < 10;  i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main(void)
//{
//	for (;;)//循环要不要继续取决于中间的判断部分
//	{
//		printf("%d\n", 111);
//	}
//	return 0;
//}

int main(void)
{
	char arr1[] = { "I'm wuyanzu" };
	char arr2[] = { "###########" };
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) -2;
	int right = strlen(arr1) - 1;//strlen 斜杠零之前字符的个数 
	while (left <= right)
	{
	arr2[left] = arr1[left];
	arr2[right] = arr1[right];
	printf("%s\n", arr2);
	left++;
	right--;
     }

	return 0;
}