#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//if语句 + switch语句 + while循环 + getchar()函数

//int main()
//{
//	/*int a = 10;
//
//	if (a == 10)
//	{
//		printf("hehe");
//	}*/
//
//	int age = 20;
//
//	if (age > 18)
//	{
//		printf("成年\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age > 18)
//	{
//		printf("成年\n");
//	}
//	else
//	{
//		printf("未成年\n");
//		printf("不能饮酒\n");
//	}
//
//	return 0;
//}

//多分支

//int main()
//{
//	int age = 10;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("青少年\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("壮年\n");
//	}
//	else if (age >= 60 && age <= 100)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//	else//else和离他最近的if匹配
//		printf("haha\n");
//
//	return 0;
//}

//1.变量的命名(有意义，规范)
//2.空格，空行，换行

//int main()
//{
//	int a = 1;
//	if (a = 0)
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//判断一个数是否为奇数
//	//输入
//	int num = 0;
//	scanf("%d", &num);
//	//判断
//	if (num % 2)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("偶数\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//输出1-100之间的奇数
//	int num = 1;
//
//	while (num <= 100)//获得1-100的数
//	{
//		if (num % 2)//判断是否为奇数
//		{
//			printf("%d\n", num);//输出
//		}
//		num++;
//	}
//
//	return 0;
//}

//switch语句

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	/*if (day == 1)
//		printf("星期一\n");
//	else if (day == 2)
//		printf("星期二\n");
//	else if (day == 3)
//		printf("星期三\n");
//	else if (day == 4)
//		printf("星期四\n");
//	else if (day == 5)
//		printf("星期五\n");
//	else if (day == 6)
//		printf("星期六\n");
//	else if (day == 7)
//		printf("星期日\n");
//	else
//		printf("输入错误\n");*/
//
//	switch (day)//参数必须是整型
//	{
//	case 1://必须是整型常量表示
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	switch (day)
//	{
//	case 'a'://取ASCII值,97
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//
//	return 0;
//}

//while循环

//int main()
//{
//	while (1)
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
//	//while (i <= 10)
//	//{
//	//	if (i == 8)
//	//		break;//break用于永久的终止循环
//	//	//if (i == 5)
//	//	//	continue;//contine会跳过本次循环continue后面的代码，跳过了i++，死循环
//	//	printf("%d ", i);
//	//	i++;
//	//	//if (i == 5)
//	//	//	continue;//放在了单次循环的末尾，没有跳过任何内容，等于无效
//	//}
//
//	i = 0;
//
//	while (i <= 10)
//	{
//		if (i == 8)
//			break;
//		i++;
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//getchar可以获取一个字符，赋值给变量时会把字符的ASCII值赋给变量

//int main()
//{
//	//int ch = getchar();
//	//printf("%d\n", ch);//ch是getchar获取的字符的ASCII值
//	//printf("%c\n", ch);
//	//putchar(ch);//直接打印字符
//
//	//int ch = 0;
//	//
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//
//	//举一个例子
//	//假设密码是一个字符串
//	char password[20] = { 0 };
//
//	printf("请输入密码:>");
//	scanf("%s", &password);//scanf不读取空格
//
//	printf("请确认密码(Y/N):>");
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}//清除缓冲区
//
//	int ret = getchar();//getchar啥都要
//	//int ret = 0;
//	//scanf("%s", &ret);
//
//	if (ret == 'Y')
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}

int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
		putchar(ch);
	}//只打印数字字符

	return 0;
}

