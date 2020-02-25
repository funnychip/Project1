#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
		printf("ÇëÊäÈëÒ»¸ö×Ö·û\n");
		char ch;
		scanf("%c", &ch);
		if (ch >= 'A' && ch <= 'Z')
		{
			ch = ch + 32;
			printf("%c\n", ch);
		}
		else
		{
			ch = ch - 32;
			printf("%c\n", ch);
		}
	return 0;
}