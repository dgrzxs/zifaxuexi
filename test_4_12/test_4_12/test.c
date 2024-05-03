#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//作业，循环相关


//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//	
//	return 0;
//}


//int main()
//{
//	//给定两个数，求这两个数的最大公约数
//	//输入
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//计算
//	int i = 0;
//	i = num1 < num2 ? num1 : num2;
//	while (i >= 1)
//	{
//		if ((num1 % i == 0) && (num2 % i == 0))//判断是否为最大公约数
//		{
//			printf("%d\n", i);//输出
//			break;
//		}
//
//		i--;
//	}
//
//	return 0;
//}


//int main()
//{
//	//打印1000年到2000年之间的闰年
//	//
//	int i = 1000;
//	while (i <= 2000)
//	{
//		if ((i % 4 == 0) && (i % 100 != 0))
//			printf("%d\n", i);
//		else if (i % 400 == 0)
//			printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}


#include <math.h>

int main()
{
	//打印100到200之间的素数
	//
	int i = 101;//设置起点，直接判断奇数
	int count = 0;//计数

	while (i <= 200)//生成100到200之间的数，偶数不可能是素数，所以可以直接判断奇数
	{
		//判断是否为素数
		int j = 2;
		int n = sqrt(i);//sqrt函数返回值是double类型

		while (j <= n)//从2开始，到该数本身，判断是否为该数的约数
		{
			if (j < n)//当有除1和其本身的约数时，一定有一个数小于该数的开平方
			{
				if (i % j == 0)//当有除1和其本身的约数时，证明他不是素数，跳出这个循环
					break;
			}
			else
			{
				if(i % j == 0)
				{
					break;
				}
				else
				{
					printf("%d ", i);//一直到i/2时都没有他的约数，该数就是素数，打印该数
					count++;
				}
			}

			j++;
		}

		i+=2;//直接判断奇数
	}

	printf("\ncount = %d\n", count);

	return 0;
}//这个代码写的真不行


//int main()
//{
//	//将三个整数按从大到小的顺序排列
//	//输入
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a <= b)//任取两个数比较大小
//	{
//		if (a <= c)//将较小的数与剩余的一个数比较大小
//		{
//			if (b <= c)//当a最小时，比较b，c的大小
//			{
//				printf("%d %d %d\n", c, b, a);
//			}
//			else
//			{
//				printf("%d %d %d\n", b, c, a);
//			}
//		}
//		else//a<=b,a>=c
//		{
//			printf("%d %d %d\n", b, a, c);
//		}
//	}
//	else
//	{
//		if (b <= c)
//		{
//			if (a <= c)//当b最小时，比较a，c的大小
//			{
//				printf("%d %d %d\n", c, a, b);
//			}
//			else
//			{
//				printf("%d %d %d\n", a, c, b);
//			}
//		}
//		else//b<=a,b>=c
//		{
//			printf("%d %d %d\n", a, b, c);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	//将三个整数按从大到小的顺序排列
//	//输入
//	int a = 0, b = 0, c = 0, n = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//排序
//	if (a <= b)//如果a<b，交换ab
//	{
//		n = a;
//		a = b;
//		b = n;
//	}
//	if (b <= c)//如果b<c，交换bc
//	{
//		n = b;
//		b = c;
//		c = n;
//	}
//	if (a <= b)//如果a<b，交换ab
//	{
//		n = a;
//		a = b;
//		b = n;
//	}
//	//输出
//	printf("%d %d %d\n", a, b, c);
//	
//	return 0;
//}


//int main()
//{
//	//打印1到100之间所有3的倍数的数字
//	//
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	//转换以下ASCII码为对应字符并输出他们
//	//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33
//	char ch[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33,'\0' };
//	//int ch[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33,'\0' };//err
//
//	printf("%s\n", ch);
//
//	return 0;
//}


//int main()
//{
//	//转换以下ASCII码为对应字符并输出他们
//	//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33
//	//输入
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	//计算数组长度
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输出
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


//int main()
//{
//	//输入一个人的出生日期(包括年月日)，将该生日中的年、月、日分别输出
//	//输入20120225
//	int birthday = 0;
//	scanf("%d", &birthday);
//
//	int date = birthday % 100;
//	int month = birthday / 100 % 100;
//	int year = birthday / 10000 % 10000;
//	printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, date);
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	int month = 0;
//	int date = 0;
//	scanf("%4d%2d%2d", &year, &month, &date);
//
//	printf("year=%d\nmonth=%02d\ndate=%02d\n", year, month, date);
//	
//	return 0;
//}


//int main()
//{
//	//依次输入一个学生的学号，以及3科(C语言，数学，英语)成绩，
//	//在屏幕上输出该学生的学号，3科成绩(注：输出成绩时需进行四舍五入且保留2位小数)
//	//输入17140216;80.845,90.55,100.00或123456;93.33,99.99,81.20
//	int ID = 0;
//	float C = 0.0f, Math = 0.0f, English = 0.0f;
//	scanf("%d;%f,%f,%f", &ID, &C, &Math, &English);
//	//输出
//	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", ID, C, Math, English);
//
//	return 0;
//}


//int main()
//{
//	int n = printf("Hello world!");
//	printf("\n%d\n", n);
//	
//	return 0;
//}


//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("cout << \"Hello world!\" << endl;\n");
//	return 0;
//}


//int main()
//{
//	//求四个整数中的最大值
//	//输入
//	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
//	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
//	//比大小
//	int max = 0;
//	max = n1 >= n2 ? n1 : n2;
//	max = max >= n3 ? max : n3;
//	max = max >= n4 ? max : n4;
//	//输出
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	//求四个整数中的最大值
//	//输入
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//比大小
//	//假设第一个数是最大值
//	int max = arr[0];
//	int j = 1;
//	while (j <= i)
//	{
//		if (max < arr[j])
//			max = arr[j];
//		j++;
//	}
//	//输出
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	//求四个整数中的最大值
//	//输入
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	//假设第一个值为最大值
//	scanf("%d", &max);
//	//比大小
//	while (i < 3)
//	{
//		scanf("%d", &n);
//		if (max <= n)
//			max = n;
//		i++;
//	}
//	//输出
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	double r = 0.0;
//	scanf("%lf", &r);
//	double V = 4.0 / 3 * 3.1415926 * r * r * r;
//	printf("%.3lf\n", V);
//	return 0;
//}
