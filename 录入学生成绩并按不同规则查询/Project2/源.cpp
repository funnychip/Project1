#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num1, num2, i, re;
	int *p;
	int search1(int num1, int num2, int *p);
	int search2(int num1, int num2, int *p);
	printf("请输入学生人数：");
	scanf("%d", &num1);
	p = (int*)malloc(num1 * sizeof(int));
	if (p == NULL)
	{
		printf("wrong");
		return -1;
	}
	for (i = 0; i < num1; i++)
	{
		printf("请输入编号为%d的学生的成绩", i + 1);
		scanf("%d", p + i);
	}
	printf("请选择要执行的操作：\n1、按编号查成绩\n2、按成绩查编号\n");
	scanf("%d", &num2);
	if (num2 == 1)
	{
		printf("请输入要查询的学生编号");
		scanf("%d", &num2);
		re = search1(num1, num2, p);
		if (re == 0)
		{
			printf("没找到该学生\n");
		}
		else
		{
			printf("找到该学生，成绩为%d\n", re);
		}
	}
	else if (num2 == 2)
	{
		printf("请输入分数：");
		scanf("%d", &num2);
		re = search2(num1, num2, p);
		if (re == 0)
		{
			printf("没找到符合条件学生\n");
		}
		else
		{
			printf("找到该学生，其编号为%d\n", re);
		}
	}
	free(p);
	return 0;
}
int search1(int num1, int num2, int *p)
{
	int i;
	for (i = 0; i < num1; i++)
	{
		if (i == num2 - 1)
		{
			return *(p + i);
		}
	}
	return 0;
}
int search2(int num1, int num2, int *p)
{
	int i;
	for (i = 0; i < num1; i++)
	{
		if (*(p+i) == num2 )
		{
			return i+1;
		}
	}
	return 0;
}