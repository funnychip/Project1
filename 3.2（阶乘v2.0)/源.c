#include<stdio.h>
int main(void)
{
	int sum = 0;
	int ret= 1;
	int j = 0;
	for (j = 1; j <=10; j++)
	{
		ret *= j;
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}