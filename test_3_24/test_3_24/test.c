#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//源文件的第一行放 #define _CRT_SECURE_NO_WARNINGS
//就能用scanf


//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}

//std - 标准
//i - input
//o - output
//stdio标准的输入输出

//main函数是程序的入口
//main函数有且仅有一个

//char字符
//short短整型
//int整型
//long长整型
//long long更长的整型
//float单精度浮点数
//double双精度浮点数

//int main()
//{
//	printf("%zu\n", sizeof(char));
//	printf("%zu\n", sizeof(short));
//	printf("%zu\n", sizeof(int));
//	printf("%zu\n", sizeof(long));
//	printf("%zu\n", sizeof(long long));
//	printf("%zu\n", sizeof(float));
//	printf("%zu\n", sizeof(double));
//
//	return 0;
//}

//C语言规定 sizeof(long)>=sizeof(int)
//

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

//类型是用来创建变量的，创建变量的本质是为了向内存申请空间
//

//int b = 20;//全局变量
//
//int main()
//{
//	/*short age = 24;
//	int high = 170;
//	float weight = 70.5;*/
//	int a = 10;//局部变量
//
//	return 0;
//}


//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	//当全局变量和局部变量名字相同时，局部优先
//
//	return 0;
//}


////写一个代码，计算两个整数的和
////printf是一个输出函数
////scanf是一个输入函数
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化，未初始化的变量是一个随机值
//
//	//输入两个恶整数
//	scanf("%d %d", &num1, &num2);
//	//求和
//	int sum = num1 + num2;
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}


//变量的作用域
//1.局部变量
//局部变量的作用域是变量所在的局部范围，局部范围由{}确定
//2.全局变量的作用域是整个工程


//声明来自外部的符号
extern int a;

void test()
{
	printf("test-->%d\n", a);
}

int main()
{
	test();
	{
		printf("a=%d\n", a);
	}
	printf("a=%d\n", a);

	return 0;
}

//变量的生命周期
//局部变量的生命周期是；进入作用域生命周期开始，出作用域生命周期结束
//
//全局变量；整个程序的生命周期

int main()
{
	{
		int a = 10;
		printf("%d\n", a);
	}

	printf("%d\n", a);

	return 0;
}