#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<conio.h>

int main()
{
	char name[20];
	int idx;
	char password[7];		//密码6位，数组7位就可以规避密码后有乱码的问题
	while (1)
	{
		printf("请输入账号:");
		scanf("%s", name);   //读取用户名

		//-------------------------------------

		if (strcmp(name, "小明") == 0)     //判断读取的用户名是否正确
		{
			printf("\n请输入密码:");

			//-------------------------------------

			for (idx = 0; idx < 7; idx++)   // 限制密码长度
			{
				password[idx] = _getch();  
				if (password[idx] == '\r')   
				{							
					password[idx] = '\0';	
				}                          
				printf("*");  //输出星号
			}

			//-------------------------------------

			printf("\npassword:%s\n", password);

			//-------------------------------------
			if (strcmp(password, "990923") == 0)  //判断密码是否正确
			{
				printf("\n密码正确\n");
				break;
			}
			else
			{
				printf("\n密码错误\n");
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
//	char password[20] = { 0 };   //存放密码
//	for (i = 0; i < 3; i++)    //限制登陆次数
//	{
//		printf("请输入密码\n");
//		scanf("%s",password );
//		if (strcmp(password,"123456")==0)//字符串的比较不能用==  用strcmp()
//		{                         //第一个字符串和第二个字符串相等，返回0
//			printf("登陆成功\n");   //前>后  返回大于0的数字
//			break;				   //前<后  返回小于0的数字
//		}
//		else
//		{
//			printf("密码错误，请重新输入\n");   
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次错误，退出\n");
//	}
//	return 0;
//}