#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int num1, num2, i, re;
	int *p;
	int search1(int num1, int num2, int *p);
	int search2(int num1, int num2, int *p);
	printf("������ѧ��������");
	scanf("%d", &num1);
	p = (int*)malloc(num1 * sizeof(int));
	if (p == NULL)
	{
		printf("wrong");
		return -1;
	}
	for (i = 0; i < num1; i++)
	{
		printf("��������Ϊ%d��ѧ���ĳɼ�", i + 1);
		scanf("%d", p + i);
	}
	printf("��ѡ��Ҫִ�еĲ�����\n1������Ų�ɼ�\n2�����ɼ�����\n");
	scanf("%d", &num2);
	if (num2 == 1)
	{
		printf("������Ҫ��ѯ��ѧ�����");
		scanf("%d", &num2);
		re = search1(num1, num2, p);
		if (re == 0)
		{
			printf("û�ҵ���ѧ��\n");
		}
		else
		{
			printf("�ҵ���ѧ�����ɼ�Ϊ%d\n", re);
		}
	}
	else if (num2 == 2)
	{
		printf("�����������");
		scanf("%d", &num2);
		re = search2(num1, num2, p);
		if (re == 0)
		{
			printf("û�ҵ���������ѧ��\n");
		}
		else
		{
			printf("�ҵ���ѧ��������Ϊ%d\n", re);
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