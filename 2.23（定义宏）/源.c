#include<stdio.h>
#define MAX 1000//����MAX=1000  ����define�����ʶ������
#define M(X,Y) (X>Y?X:Y)//
//��#define�����
int main(void)
{
	int max = M(3, 3 + 1);
		printf("max=%d\n",max);
	return 0;
}
