#include<stdio.h>
int main(void)
{
	int age = 0;
	for (age = 0; age<=100; age++)
	{
		if (age <= 18)
			printf("未成年\n");
		else if (18 <= age && age <= 30)
			printf("青年\n");
		else if (30 < age && age <= 50)
			printf("中年\n");
		else
			printf("老年\n");
	}

		/*if (age >= 18)
			printf("成年\n");
		else
			printf("未成年\n");*/
	return 0;
}