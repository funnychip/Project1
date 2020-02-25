#include<stdio.h>
int main(void)
{
	int arr[12] = { 1,2,3,4,5,6,7,8,9 ,10};
	int i = 0;
	/*for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		arr[i] = 0;
	}*/
	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}