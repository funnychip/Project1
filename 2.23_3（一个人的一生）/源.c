#include<stdio.h>
int main(void)
{
	int age = 0;
	for (age = 0; age<=100; age++)
	{
		if (age <= 18)
			printf("δ����\n");
		else if (18 <= age && age <= 30)
			printf("����\n");
		else if (30 < age && age <= 50)
			printf("����\n");
		else
			printf("����\n");
	}

		/*if (age >= 18)
			printf("����\n");
		else
			printf("δ����\n");*/
	return 0;
}