#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char name[20];
	int idx;
	char password[7];		//����6λ������7λ�Ϳ��Թ������������������
	while (1)
	{
		printf("�������˺�:");
		scanf("%s", name);   //��ȡ�û���

		//-------------------------------------

		if (strcmp(name, "С��") == 0)     //�ж϶�ȡ���û����Ƿ���ȷ
		{
			printf("\n����������:");

			//-------------------------------------

			for (idx = 0; idx < 7; idx++)   // �������볤��
			{
				password[idx] = _getch();  
				if (password[idx] == '\r')   
				{							
					password[idx] = '\0';	
				}                          
				printf("*");  //����Ǻ�
			}

			//-------------------------------------

			printf("\npassword:%s\n", password);

			//-------------------------------------
			if (strcmp(password, "990923") == 0)  //�ж������Ƿ���ȷ
			{
				printf("\n������ȷ\n");
				break;
			}
			else
			{
				printf("\n�������\n");
			}
		}
	}
	return 0;
}

////#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main(void)
//{
//	int i = 0;
//	char password[20] = { 0 };   //�������
//	for (i = 0; i < 3; i++)    //���Ƶ�½����
//	{
//		printf("����������\n");
//		scanf("%s",password );
//		if (strcmp(password,"123456")==0)//�ַ����ıȽϲ�����==  ��strcmp()
//		{                         //��һ���ַ����͵ڶ����ַ�����ȣ�����0
//			printf("��½�ɹ�\n");   //ǰ>��  ���ش���0������
//			break;				   //ǰ<��  ����С��0������
//		}
//		else
//		{
//			printf("�����������������\n");   
//		}
//	}
//	if (i == 3)
//	{
//		printf("���δ����˳�\n");
//	}
//	return 0;
//}