#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	for (j=2; j<=sqrt(n); j++)
	{
		if (0 == n % j)
		{
			return 0;
		}
	}
	return 1;
}

int main(void)
{
	int i = 0;
	for (i = 0; i <= 100; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}