#define _CRT_SECURE_NO_WARNINGS 1

//猜数字游戏 + goto语句 + 函数(1)


#include <stdio.h>

//电脑产生一个随机数(1~100)
//猜数字
//如果猜的数字大，反馈猜大了
//如果猜的数字小，反馈猜小了
//直到猜对了
//

#include <time.h>//用于time函数
#include <stdlib.h>//用于rand函数，srand函数

//void menu()
//{
//	printf("***********************************\n");
//	printf("***********   1.play    ***********\n");
//	printf("***********   0.exit    ***********\n");
//	printf("***********************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;//0~MAX(32767)之间的随机数，结果为1到100之间的随机数
//
//	for (;;)
//	{
//		printf("猜数字(1~100):>");
//		int n = 0;
//		scanf("%d", &n);//输入
//
//		if (n < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (n > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了!\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//NULL空指针，int *p = NULL，int n = 0，time函数的参数是指针
//									//这里不需要使用time函数的参数，所以使用空指针
//									//每次运行程序时，srand函数为rand函数生成的随机数选择一个起点
//									//rand函数在确定起点后能固定生成一系列0~32767之间的随机数
//									//时间在不停变化，能在每次打开程序时生成一个不同的随机数起点
//									//时间-->时间戳，time函数返回值是一个整型的时间戳
//									//srand函数需要一个unsigned int类型的参数
//									//所以把time函数的返回值强制类型转换成unsigned int。
//
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，请重新选择！\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include <windows.h>//用于system函数
#include <string.h>//用于strcpy函数，memset函数，strcmp函数

//int main()
//{
//	system("shutdown -s -t 60");//shutdown -s关机，-t设置关机时间
//	char ch[] = { "我是猪" };
//
//again:
//	printf("电脑将在一分钟后关机，输入我是猪可取消关机\n");
//	char sh[20] = { 0 };
//	scanf("%s", sh);
//
//	if (strcmp(sh, ch) == 0)
//	{
//		system("shutdown -a");//shutdown -a取消关机
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}


//int main()
//{
//	//char arr[20] = { "sadhiwds" };
//	//char arr1[20] = { 0 };
//	//strcpy(arr1, arr);
//	//printf("%s\n", arr1);
//
//	char arr[20] = "hello world";
//	memset(arr+6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int compare(int a, int b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = compare(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}

void ex(int* x, int* y)
{
	int n = 0;
	n = *x;
	*x = *y;
	*y = n;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	ex(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}