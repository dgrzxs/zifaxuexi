#define _CRT_SECURE_NO_WARNINGS 1

//函数(2):交换数值,判断素数,判断闰年,二分查找,bool,函数的小细节

#include <stdio.h>


//写一个函数可以交换两个整形变量的内容

//void Swap(int* x, int* y)
//{
//	int n = 0;
//	n = *x;
//	*x = *y;
//	*y = n;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//传值调用
//	int c = Add(a, b);//函数的参数可以是变量
//	int d = Add(10, b);//常量
//	int e = Add(a + 3, b);//表达式
//	int f = Add(Add(a, b), b);//函数等
//
//	printf("%d\n", c);
//	//交换
//	//传址调用
//	Swap(&a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


#include <math.h>//用于sqrt函数：开平方

//int Judge_Prime(int x)//判断一个数是不是素数
//{
//	int i = 0;
//	//int flag = 1;//判断标志，不用判断标志，可以节省内存
//
//	for (i = 2; i <= sqrt(x); i++)//如果一个数不是素数，那么他必然有一个小于等于他平方根的约数
//	{							  //所以循环只需要把最大值设置为该数的平方根
//		if ((x % i) == 0)		  //减少运算次数
//		{
//			//flag = 0;//如果有约数，则不是素数，将判断标志改为0
//			//break;//并且跳出循环
//			return 0;
//		}
//	}
//
//	//return flag;//判断标志为1则为素数，0则不是素数
//				  //是素数返回1，不是素数返回0
//	return 1;
//}				
//
//int main()
//{
//	//写一个函数可以判断一个数是不是素数
//	//输入
//	int n = 0;
//	scanf("%d", &n);
//
//	if (Judge_Prime(n))
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//
//	return 0;
//}


//int Judge_Leap_Year(int x)//判断是否为闰年，不在函数内打印，保证函数功能的单一性，方便后续使用
//{
//	if ((x % 4 == 0) && (x % 100 != 0))//4的倍数且不是100的倍数
//		return 1;
//
//	if (x % 400 == 0)//400的倍数
//		return 1;
//
//	//if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))//2合1
//	//	return 1;
//
//	return 0;//是闰年返回1，不是闰年返回0
//}
//
//int main()
//{
//	//写一个函数判断一年是不是闰年
//	//输入
//	int year = 0;
//	scanf("%d", &year);
//	//判断
//	if (Judge_Leap_Year(year))
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//
//	return 0;
//}


//int binary_search(int x, int arr[], int sz)//数组传参实际上传的是数组的首地址，节省内存
//{										   //arr看似是数组，其实是指针
//	int min = 0;
//	int max = sz - 1;
//	int mid = 0;
//
//	for (;;)
//	{
//		mid = min + (max - min) / 2;//防止mid溢出
//
//		if (arr[mid] < x)
//		{
//			min = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//		if (max < min)
//		{
//			return -1;
//		}
//	}
//}
//
//int main()
//{
//	//写一个函数，实现一个整形有序数组的二分查找
//	//
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int k = 0;
//	scanf("%d", &k);
//
//	if (binary_search(k, arr, sz) != -1)
//	{
//		printf("找到了，下标是:%d\n", binary_search(k, arr, sz));
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}


//bool,布尔类型,bool flag = ture;/false;相当于1和0;主要是节约空间,bool类型只要1个字节


//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	//写一个函数，每调用一次这个函数，就会将num的值增加1
//	//
//	int num = 0;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		Add(&num);
//	}
//
//	printf("%d\n", num);
//
//	return 0;
//}


//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	////链式访问，把一个函数的返回值当做另一个函数的参数
//	//printf("%d\n", strlen("abcdef"));
//
//	printf("%d", printf("%d", printf("%d", 43)));//典型的链式访问
//
//	return 0;
//}




//函数不写返回类型的时候，默认返回类型是int
Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	//函数写了返回类型，但没有返回值，某些编译器会自动返回最后一条指令执行的结果
	printf("hehe\n");//printf返回值为5
}

void test(void)//括号内的void可写可不写，写了就是明确说明该函数不需要参数，空括号也代表该函数不需要参数
{
	printf("haha\n");
}

int main(int argc, char* argv[], char *envp[])//main函数是可以有三个参数的
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	int d = Sub(a, b);

	printf("%d %d\n", c, d);

	test(100);//函数不需要参数，但依然可以传，但是函数不会接受，非常不推荐这种写法
	test();

	return 0;
}