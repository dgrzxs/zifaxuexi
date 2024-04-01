#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.字面常量
//2.const修饰的常变量
//3.define定义标识符常量
//4.枚举常量

//int main()
//{
//	//30;
//	//3.14;//字面常量
//	//'w';//字符
//	//"abc";//字符串
//	
//	//int a = 10;//a是变量
//	//a = 20;//a可以修改
//	//printf("%d\n", a);
//
//	//const int a = 10;//a是const修饰的常变量
//	//a = 20;//a不能被修改
//	//printf("%d\n", a);//在C语言中，const修饰的a本质是变量，但不能直接修改，有常量属性
//
//	const int n = 10;
//	int arr[10] = { 0 };
//
//	return 0;
//}

//#define MAX 100//define定义的标识符常量
//#define STR "abcdef"
//
//int main()
//{
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//	printf("%s\n", STR);
//
//	MAX = 200;//err
//
//	return 0;
//}


////枚举常量
//enum Color
//{
//	//枚举常量
//	RED,
//	GREEN,
//	BLUE
//};
//
////性别
//enum Sex
//{
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRE
//};
//
//int main()
//{
//	//三原色
//	//Red Green Blue
//	int num = 10;
//	enum Color c = RED;
//
//	RED = 10;//err
//	BLUE = 20;//err
//
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//100 - int
//	//#qWer$
//	//char 字符类型
//	//'a';
//	//char ch = 'w';
//	//字符串
//	//C语言中有没有字符串类型呢？ - 没有
//	//"abcdef";
//	char arr1[] = "abcdef";//存储字符串，字符串的结束标志是 \0
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	int len = strlen("abc");//求字符串长度的一个库函数，string length
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//转义字符

//int main()
//{
//	printf("abc\n");
//
//	return 0;
//}

//int main()
//{
//	printf("abc\0def");
//
//	return 0;
//}

//转义字符
//三字母词,目前很多编译器不支持三字母词
//??) --> [
//??( --> ]

//
//%d - 打印整型
//%c - 打印字符
//%s - 打印字符串
//%f - 打印float类型的数据
//%lf - 打印double类型的数据
//

//int main()
//{
//	//printf("%s\n", "(are you ok\?\?)");
//	////(are you ok]
//
//	//printf("%c\n", 'w');
//	//printf("%c\n", '\'');
//
//	//printf("abcdef\n");
//	//printf("\"");
//	////printf("%s\n", "abcdef");
//
//	//printf("abcd\\0ef\\n\n");
//
//	//printf("c:\\test\\test.c\n");
//
//	//printf("\a");//触发电脑蜂鸣器，警告字符
//
//	//\r回车，\t水平制表符
//
//	printf("%c\n", '\130');//\ddd - 8进制 - 一个字符
//	//8进制的130等于10进制的88，在ASCII码表里代表X
//	printf("%c\n", '\x63');//\xdd - 16进制 - 一个字符
//	//16进制的60等于10进制的99，在ASCII码表里代表c
//	//0的ASCII码值是48，A的ASCII码值是65，a的ASCII码值是97
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", strlen("qwer t"));
//	printf("%d\n", strlen("c:\test\628\test.c"));//8超过了8进制的上限
//	
//	return 0;
//}


////注释
//
//int main()
//{
//	//创建指针变量p，并赋值为NULL(空)
//	int* p = NULL;
//
//	return 0;
//}

////选择语句
//
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗？");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//
//	return 0;
//}
//
////循环语句
////20000行有效代码的累计
//
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("写代码；%d\n", line);
//		line++;
//	}
//
//	if (line >= 20000)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//
//	return 0;
//}

//
////求2个任意整数的和
//
////函数
////int Add(int x, int y)
////{
////	int z = x + y;
////	return z;
////}
//
//int Add(int x, int y)
//{
//	return (x + y);//括号可以不写
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//输入
//	scanf("%d %d", &num1, &num2);
//
//	//求和
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	//Add(num1, num2);//err
//	int t1 = 200;
//	int t2 = 300;
//	int ret = Add(t1, t2);
//
//	//打印
//	printf("%d\n", sum);
//
//	return 0;
//}

////数组
//
//int main()
//{
//	//int a = 10;
//	//int b = 11;
//	//int c = 12;
//	////0到9
//	//int e = 0;
//	//int f = 1;
//	//...
//
//	int arr[10] = { 10, 21, 32, 43, 54, 65, 76, 87, 98, 9 };
//	char ch[5];
//	double d[30];
//
//	//printf("%d\n", arr[8]);
//
//	int i = 0;
//
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//作业
//求两个整数的较大值

int main()
{
	//输入两个整数
	int a = 0;
	int b = 0;
	printf("输入两个整数：");
	scanf("%d %d", &a, &b);
	
	//比较两个数的大小，并输出较大值
	if (a <= b)
	{
		printf("较大值是%d\n", b);
	}
	else
	{
		printf("较大值是%d\n", a);
	}

	return 0;
}