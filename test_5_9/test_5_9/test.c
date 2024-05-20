#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//作业:二分查找,猜数字游戏,递归:逆序字符串


//int main()
//{
//	//编写代码在一个整形有序数组中查找具体的某个数
//	//要求：找到了就打印数字所在的下标，找不到则输出：找不到。
//	//
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	int mid = 0;
//
//	while(left <= right)
//	{
//		mid = left - (left - right) / 2;
//
//		if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


#include <time.h>
#include <stdlib.h>

//void menu()
//{
//	printf("###########################\n");
//	printf("########  1. play  ########\n");
//	printf("########  0. exit  ########\n");
//	printf("###########################\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;
//
//	int input = 0;
//	for (;;)
//	{
//		printf("请输入数字:>");
//		scanf("%d", &input);
//
//		if (input < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (input > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//猜数字游戏
//	//
//	srand((unsigned int)time(NULL));
//
//	for (;;)
//	{
//		menu();
//
//		int input = 0;
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("游戏结束，退出程序。\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//			break;
//		}
//
//		if (input == 0)
//		{
//			break;
//		}
//	}
//
//	return 0;
//}


int main()
{
	//编写程序数一下1到100的所有整数中出现多少个数字9
	//
	int i = 0;
	int flag = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9 || (i / 10 % 10 == 9))
		{
			printf("%d ", i);
		}
		if (i % 10 == 9)
		{
			flag++;
		}
		if (i / 10 % 10 == 9)
		{
			flag++;
		}
	}
	printf("\n%d\n", flag);

	return 0;
}


//int main()
//{
//	//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//	//
//	int i = 0;
//	float ret = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		ret = 1.0 * flag / i + ret;
//		flag = -flag;
//	}
//
//	printf("%f\n", ret);
//
//	return 0;
//}


//int main()
//{
//	//求10个整数中最大值
//	//
//	int arr[] = { 2,5,6,23,7,4,5,7,1,8 };
//	int i = 0;
//	int max = arr[0];
//	for (i = 0; i <= 9; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//	}
//
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	//在屏幕上输出9*9乘法口诀表
//	//
//	int i = 0;
//	
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//
//	//printf("%d", j);//err，出了大括号就不存在了
//
//	return 0;
//}


//#include <math.h>
//
//int judge_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	//实现一个函数，判断一个数是不是素数。
//	//利用上面实现的函数打印100到200之间的素数。
//	int i = 0;
//	int flag = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (judge_prime(i))
//		{
//			printf("%d ", i);
//			flag++;
//		}
//	}
//
//	printf("\n%d\n", flag);
//
//	return 0;
//}


//int judge_leap_year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	//实现函数判断year是不是润年。
//	//
//	int year = 0;
//	scanf("%d", &year);
//
//	if (judge_leap_year(year))
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//
//	return 0;
//}


//void swap(int* x, int* y)
//{
//	int n = 0;
//	n = *x;
//	*x = *y;
//	*y = n;
//}
//
//int main()
//{
//	//实现一个函数来交换两个整数的内容。
//	//
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	swap(&a, &b);
//
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


//void multiplication_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%2d*%2d=%3d ", j, i, j * i);
//		}
//
//		printf("\n");
//	}
//}
//
//int main()
//{
//	//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//	//如：输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
//	//
//	int n = 0;
//	scanf("%d", &n);
//
//	multiplication_table(n);
//
//	return 0;
//}


//void print(int n)
//{
//	if (n > 10)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	//递归方式实现打印一个整数的每一位
//	//
//	int num = 0;
//	scanf("%d", &num);
//
//	print(num);
//
//	return 0;
//}


//int Factorial(int n)
//{
//	//if (n > 1)//递归
//	//{
//	//	return Factorial(n - 1) * n;
//	//}
//	//return 1;
//
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)//迭代
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//	//
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", Factorial(n));
//
//	return 0;
//}


//#include <string.h>
//
//int my_strlen1(char ch[])//非递归
//{
//	int i = 0;
//	for (i = 0; ch[i] != '\0'; i++);
//	return i;
//}
//
//int my_strlen2(char ch[])//递归
//{
//	if (ch[0] != '\0')
//	{
//		return 1 + my_strlen2(ch + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	//递归和非递归分别实现strlen
//	//
//	char ch[50] = { 0 };
//	scanf("%s", ch);
//
//	printf("%d %d %d\n", strlen(ch), my_strlen1(ch), my_strlen2(ch));
//
//	return 0;
//}


//#include <string.h>
//
//void reverse_string(char str[])//方法就是把字符串的首尾字符对调，然后将去掉了首尾字符的字符串传给下一层函数
//{
//	int sz = strlen(str);//求字符串长度
//
//	char tmp = str[0];//保留字符串第一位的字符
//
//	str[0] = str[sz - 1];//将字符串的第一位字符改为字符串最后一位字符，后续处理将不再用到字符串首地址
//	str[sz - 1] = '\0';//将字符串的最后一位改为字符'\0'，去掉了字符串的最后一位，改变了字符串的长度
//
//	if (strlen(str + 1) >= 2)//字符串首地址加一，去掉了字符串的第一位
//	{
//		reverse_string(str + 1);//将去掉了第一位和最后一位的字符串传给函数本身，不断减少函数参数字符串的长度
//	}
//
//	str[sz - 1] = tmp;//将tmp保留的第一位字符放置于字符串的最后一位
//}
//
//int main()
//{
//	//编写一个函数 reverse_string(char * string)（递归实现）
//	//实现：将参数字符串中的字符反向排列，不是逆序打印。
//	//要求：不能使用C函数库中的字符串操作函数。
//	//比如:
//	//char arr[] = "abcdef";
//	//逆序之后数组的内容变成：fedcba
//	//
//	//多少有点难，没写出来，看了答案才会写了
//
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//
//	reverse_string(arr);
//
//	printf("%s\n", arr);
//
//	return 0;
//}


//int DigitSum(int n)
//{
//	if (n > 9)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n % 10;
//}
//
//int main()
//{
//	//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//	//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//	//输入：1729，输出：19
//	//
//	int n = 0;
//	scanf("%d", &n);
//
//	printf("%d\n", DigitSum(n));
//
//	return 0;
//}


//int Power(int n, int k)
//{
//	if (k > 1)
//	{
//		return n * Power(n, k - 1);
//	}
//	return n;
//}
//
//int main()
//{
//	//编写一个函数实现n的k次方，使用递归实现
//	//
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	printf("%d\n", Power(n, k));
//
//	return 0;
//}


int Fibonacci_sequence1(int n)//非递归
{
	int n1 = 1;
	int n2 = 1;
	int ret = 0;

	int i = 0;
	for (i = 3; i <= n; i++)
	{
		ret = n1 + n2;
		n1 = n2;
		n2 = ret;
	}
	
	if (n > 2)
	{
		return ret;
	}
	else
	{
		return 1;
	}
}

int Fibonacci_sequence2(int n)//递归
{
	if (n > 2)
	{
		return Fibonacci_sequence2(n - 1) + Fibonacci_sequence2(n - 2);
	}
	else
	{
		return 1;
	}
}

int main()
{
	//递归和非递归分别实现求第n个斐波那契数
	//例如：
	//	输入：5  输出：5
	//	输入：10， 输出：55
	//	输入：2， 输出：1
	//
	int n = 0;
	scanf("%d", &n);

	printf("%d %d\n", Fibonacci_sequence1(n), Fibonacci_sequence2(n));

	return 0;
}
