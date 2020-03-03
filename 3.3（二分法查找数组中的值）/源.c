#include<stdio.h>
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	int k = 0;  
	printf("请输入想找的值\n");
	scanf_s("%d", &k);

	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1; 
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了:%d\n",mid);
				break;
		}
	}
	if (left > right)
	{
		printf("找不到\n");
	}
	return 0;
}