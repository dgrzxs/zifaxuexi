#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//for循环 + do...while循环 + 

//int main()
//{
//	int i = 1;//初始化
//
//	while (i <= 10)//判断
//	{
//		printf("%d\n", i);
//		i++;//调整
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)//初始化，判断，调整三合一
//	{
//		printf("%d ", i);
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	for (;;)//for循环的判断部分省略意味着这判断会恒成立
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 1;
//
//	do
//	{
//		i++;
//
//		if (i == 5)
//		{
//			continue;
//		}
//
//		printf("%d ", i);
//	}
//	while (i <= 10);
//
//	return 0;
//}


//int main()
//{
//	//计算n的阶乘
//	//输入
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	//计算
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	//输出
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	//求1! + 2! + 3! + ... + n!的值
//	//初始化
//	int n = 0;
//	//确定两个循环嵌套
//	int i = 0;
//	int j = 0;
//	//输入
//	scanf("%d", &n);
//	//计算过程中需要用的中间变量
//	int ret = 1;
//	int sum = 0;
//
//	for (i = 1; i <= n; i++)//生成1到n个数
//	{
//		for (j = 1; j <= i; j++)//计算每个数的阶乘
//		{
//			ret = ret * j;//阶乘
//		}
//		sum = ret + sum;//将每个数的阶乘相加
//		ret = 1;//初始化每个数的阶乘的起点
//	}
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	//求1! + 2! + 3! + ... + n!的值，简化版本
//	//初始化输入
//	int n = 0;
//	//单层循环
//	int i = 0;
//	//输入
//	scanf("%d", &n);
//	//运算过程中的中间变量的初始化
//	int sum = 0;//存储阶乘的和
//	int ret = 1;//存储每个数的阶乘
//	//计算
//	for (i = 1; i <= n; i++)//生成1到n个数
//	{
//		ret = ret * i;//生成1到n个数中每个数的阶乘
//		sum = ret + sum;//将这些阶乘相加
//	}
//	//输出
//	printf("%d\n", sum);
//
//	return 0;
//}


//在一个有序数组中查找具体的某个数字n
//方法①

//int main()
//{
//	//在一个有序数组中查找具体的某个数字n
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			break;
//		}
//	}
//
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//方法②

//int main()
//{
//	//在一个有序数组中查找具体的某个数字n
//	//
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int n = 0;
//	scanf("%d", &n);
//
//	int max = sizeof(arr) / sizeof(arr[0]) - 1;
//	int min = 0;
//	int mid = (max + min) / 2;
//	int num = mid;
//
//	for (;;)
//	{
//		if (n < arr[mid])
//		{
//			max = mid - 1;
//		}
//		else if (n > arr[mid])
//		{
//			min = mid + 1;
//		}
//		mid = (max + min) / 2;
//
//		if(n == arr[mid])
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//
//		if (max == min)
//		{
//			printf("找不到\n");
//			break;
//		}
//	}
//
//	return 0;
//}


//方法③

int main()
{
	//在一个有序数组中查找具体的某个数字n
	//
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int n = 0;
	scanf("%d", &n);

	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (n < arr[mid])
			right = mid - 1;
		else if (n > arr[mid])
			left = mid + 1;
		else
		{
			printf("找到了，下标是%d\n", mid);
			break;
		}
	}

	if (left < right)
		printf("找不到\n");

	return 0;
}