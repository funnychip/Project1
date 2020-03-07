#include<stdio.h>
#include<string.h>
int binary(int arr[], int key, int sz)//数组传参  传的是指针
{
	int left = 0;
	int right = sz - 1;

	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > left)
		{
			right = mid - 1;
		}
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}
int main(void)
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 7;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int ret = 0;
	ret = binary(arr, i, sz);
	if (-1 == ret)
	{
		printf("找不到\n");
	}
	else
	{
		printf("找到了:%d\n",ret);

	}

	return 0;
}