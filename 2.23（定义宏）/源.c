#include<stdio.h>
#define MAX 1000//定义MAX=1000  利用define定义标识符常量
#define M(X,Y) (X>Y?X:Y)//
//↑#define定义宏
int main(void)
{
	int max = M(3, 3 + 1);
		printf("max=%d\n",max);
	return 0;
}
