#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//作业

//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     Man\n");
//
//	return 0;
//}

//int main()
//{
//	printf("I lost my cellphone!\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 40;
//	int c = 212;
//	int b = (-8 + 22) * a - 10 + (c / 2);
//
//	printf("%d\n", b);
//
//	return 0;
//}

#include <string.h>

//int main()
//{
//	char arr[8] = { 'b', 'i', 't' };//不完全初始化，其余空项默认为零
//
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}


//int Max(int x, int y)
//{
//	if (x >= y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	int c = Max(a, b);
//	printf("较大值是%d\n", c);
//
//	return 0;
//}


//int Sign(int x)
//{
//	if (x > 0)
//	{
//		return -1;
//	}
//	else if (x == 0)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	//输入
//	int a = 0;
//	scanf("%d", &a);
//	//计算
//	int b = Sign(a);
//	//输出
//	printf("%d\n", b);
//
//	return 0;
//}

//操作符


//int main()
//{
//	int a = 7 / 2;
//	int b = 7 % 2;//取模
//	//取模操作符两端必须是整数
//	float c = 7.0 / 2;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%f %.1f\n", c, c);//%.1f - 打印小数点后1位(%.2f就是小数点后两位)
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//初始化
//	a = 20;//赋值
//
//	return 0;
//}


//C语言中
//0表示假
//非零表示真


//int main()
//{
//	int flag = 2;
//	if (!flag)//单目操作符
//	{
//		printf("hehe\n");
//	}
//	else if (flag)
//	{
//		printf("bite\n");
//	}
//
//	return 0;
//}

//sizeof是操作符，是单目操作符

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//计算的是整个数组的大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//数组的元素个数
//
//	char arr1[8] = { "abcdefgh" };
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(arr1));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，后++
//	printf("%d\n", a);//a = 11
//	printf("%d\n", b);//b = 10
//
//	a = 10;
//	int c = ++a;//前置++，先++，后使用
//	printf("%d\n", a);
//	printf("%d\n", c);
//	//--同理
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//强制类型转换
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	if (a = 3)//赋值
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//&& 逻辑与 - 并且
//	//|| 逻辑或 - 或者
//
//	int a = 0;
//	int b = 20;
//	if (a && b)//a为真且b为真
//	{
//		printf("hehe\n");
//	}
//
//	if (a || b)//a为真或b为真
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//条件操作符(三目操作符)
// 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int r1 = a > b ? a : b;//exp1?exp2:exp3
//	printf("%d\n", r1);    //exp1为真，则取exp2；exp1为假，则取exp3
//
//	int r2 = a < b ? a : b;//求两个数里的最小值
//	printf("%d\n", r2);
//
//	return 0;
//}

//逗号表达式就是逗号隔开的一串表达式
//逗号表达式的特点是：从左向右依次计算，整个表达式的结果是最后一个表达式的结果

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//       c=8        a=28       d=5
//	int d = (c = a - 2, a = b + c, c - 3);//逗号表达式
//	printf("a:%d,b:%d,c:%d,d:%d\n", a, b, c, d);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]就是下标引用操作符，操作数是arr和n(3),访问元素的时候可以用变量
//
//	printf("%d\n", arr[3]);
//
//	return 0;
//}

////函数调用操作符
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = Add(2, 3);//()就是函数调用操作符，Add，2，3都是()的操作数
//
//	return 0;
//}

//常见的关键字 - C语言本身内置的，关键字不是自己创建出来的，也不能自己创建
//auto, break, case, char, const, continue, default, do, double,
//else, enum(枚举), extern(声明外部符号), float, for, goto, if, int, long, register(寄存器), 
//return, short, signed(有符号的), sizeof, static(静态的), struct(结构体), switch, typedef(类型重命名),
//union(联合体(共用体)), unsigned(无符号的), void(无(函数的返回类型，函数参数)), volatile, while

//int main()
//{
//	auto int a = 10;//自动变量 - 自动创建，自动销毁，auto可以省略
//
//	return 0;
//}

//变量的命名：
//1.有意义
//int age; float salary;
//2.名字必须是字母、数字、下划线组成，不能有特殊字符，同时不能以数字开头
//int 2b;//err
//int _2b;//ok
//3.变量名不能是关键字

int main()
{
	int 学习 = 2;
	printf("%d\n", 学习);//变量名可以是汉字，但非常不建议，这是一种糟糕的编程习惯

	return 0;
}