#include<stdio.h>
struct Stu//�ṹ��
{
	char name[20];
	short age;
	char sex[5];
};
int main(void)
{
	struct Stu S = {"����",20,"��"};
	printf("%s %d %s\n", S.name, S.age, S.sex);
	return 0;
}