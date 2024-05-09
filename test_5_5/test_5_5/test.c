#define _CRT_SECURE_NO_WARNINGS 1

//函数(3):声明定义,模块化,静态库,递归

#include <stdio.h>


//在头文件中声明函数，在源文件(不需要和头文件同名，但建议同名)中定义函数，组成一个加法模块，模块化代码
#include "add.h"//包含add这个头文件，自己定义的函数用双引号，库函数用尖括号

#pragma comment(lib, "add.lib")//导入静态库add.lib
							   //防止盗用

////函数的声明，一般放在头文件中
//int Add(int, int);//只需要函数的返回值类型，参数类型和参数个数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}
////函数的定义，如果把函数定义在了main函数后面，会报警告(函数依然能运行):Add未定义，这时就需要声明一下函数
//int Add(int x, int y)
//{
//	return x + y;
//}


//程序调用自身的编程技巧称为递归(recursion)

//void print(unsigned int n)
//{
//	/*if (n > 0)//最后一层递归函数参数等于0
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}*/
//
//	if (n > 9)//这样能少一层递归，最后一层递归函数参数等于输入数字的最高位数值
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	//接受一个整型值(无符号)，按照顺序打印它的每一位。
//	//输入
//	unsigned int num = 0;
//	scanf("%u", &num);
//
//	//递归解决问题
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//1 2 3 4
//	print(num);
//
//	return 0;
//}


//int my_strlen(char str[])
//{
//	//int count = 0;//不用递归直接求字符串长度的方法，需要创建临时变量
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//
//	if (str[0] != '\0')//用递归解决问题，不需要创建临时变量
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	//编写函数，不允许创建临时变量，求字符串的长度(模拟实现strlen)
//	//
//	int len = my_strlen("abcd 024asd\n\t");
//
//	printf("%d\n", len);
//
//	printf("%d\n", sizeof(char*));
//
//	return 0;
//}


//循环是一种迭代


//int fac(int n)
//{
//	//int ret = 1;
//
//	//while (n > 0)//迭代
//	//{
//	//	ret = n * ret;
//	//	n--;
//	//}
//	//
//	//return ret;
//
//	if (n > 0)//递归
//	{
//		return n * fac(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	//求n的阶乘
//	//
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = fac(n);
//	
//	printf("%d\n", ret);
//
//	return 0;
//}


long long Fibonacci(int n)
{
	//if (n <= 2)//递归，运算量极大
	//{
	//	return 1;
	//}
	//else
	//{
	//	return Fibonacci(n - 2) + Fibonacci(n - 1);
	//}

	if (n <= 2)//迭代
	{
		return 1;
	}
	else
	{
		int i = 0;
		long long n1 = 1;
		long long n2 = 1;
		long long ret = 0;

		for (i = 3; i <= n; i++)
		{
			ret = n1 + n2;
			n1 = n2;
			n2 = ret;
		}

		return ret;
	}
}
int main()
{
	//求第n个斐波那契数，斐波那契数列：1 1 2 3 5 8 13 21 34 55 89 ...
	//
	int n = 0;
	scanf("%d", &n);

	long long ret = Fibonacci(n);

	printf("%lld\n", ret);

	return 0;
}


//函数递归的几个经典问题(自主研究)：
//1.汉诺塔问题   比特大博哥
//2.青蛙跳台阶问题   C语言的刷题训练营