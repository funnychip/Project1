#include<stdio.h>
struct Stu//结构体
{
	char name[20];
	short age;
	char sex[5];
};
int main(void)
{
	struct Stu S = {"张三",20,"男"};
	printf("%s %d %s\n", S.name, S.age, S.sex);
	return 0;
}