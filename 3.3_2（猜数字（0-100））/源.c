#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***********************\n");
	printf("******1. play  ********\n");
	printf("******0. exit  ********\n");
	printf("***********************\n");
}
void game()
{
	int num = 0;
	int guess = 0;
	num = rand()%100+1;

	while (1)
	{
		printf("�����֣�>");
		scanf_s("%d", &guess);
		if (guess < num)
		{
			printf("��С��\n");
		}
		else if (guess > num)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ȷ��\n");
			break;
		}
	}

}

int main(void)
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			break;
		}
	} while (input);
	return 0;
}