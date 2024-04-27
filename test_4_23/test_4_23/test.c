#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>//用于输入输出
#include <string.h>//用于strlen，用于strcmp:91行
#include <windows.h>//用于Sleep:28行
#include <stdlib.h>//用于system:29行

//int main()
//{
//	//编写代码，演示多个字符从两端移动，向中间汇聚
//	//
//	char ch[] = { "Welcome to bite!!!" };//初始化
//	char sh[] = { "##################" };
//
//	int sz = strlen(ch);//求字符串长度
//	int mid = 0;//对称变化，循环的中间终点
//	if (sz % 2 != 0)
//		mid = (sz + 1) / 2;//字符串长度为奇数时，由于除法会自动舍弃小数位，需要增加字符串长度
//	else
//		mid = sz / 2;
//
//	int i = 0;
//	for (i = 0; i < mid; i++)
//	{
//		sh[i] = ch[i];
//		sh[sz - 1 - i] = ch[sz - 1 - i];//对称变换
//		printf("%s\n", sh);
//		Sleep(500);//延迟输出
//		system("cls");//system--库函数:执行系统命令，cls--系统命令:清空屏幕
//	}
//
//	printf("%s\n", sh);
//
//	return 0;
//}


//int main()
//{
//	//编写代码实现，模拟用户登录情景，并且只能登录三次
//	//只允许输入三次密码，如果密码正确则提示登录成功
//	//如果三次均输入错误，则退出程序
//	//
//	char password[20] = { 0 };
//	char key[] = { "123456789" };
//
//	int sz = strlen(key);
//	
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);//数组不需要取地址
//		for (j = 0; j < sz; j++)
//		{
//			if (password[j] != key[j])
//			{
//				printf("密码错误\n");
//				break;
//			}
//		}
//		if (j == sz)
//		{
//			printf("密码正确，登录成功\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//
//	return 0;
//}


int main()
{
	//编写代码实现，模拟用户登录情景，并且只能登录三次
	//只允许输入三次密码，如果密码正确则提示登录成功
	//如果三次均输入错误，则退出程序
	//
	char password[20] = { 0 };
	char key[] = { "123456789" };//密码

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, key) == 0)//比较2个字符串是否相等，不能使用==
		{							   //而应该使用一个库函数:strcmp
			printf("密码正确，登录成功\n");      //如果返回值是0，表示2个字符串相等
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i == 3)
	{
		printf("三次密码均输入错误，退出程序\n");
	}

	return 0;
}