#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//��ҵ:���ֲ���,��������Ϸ,�ݹ�:�����ַ���


//int main()
//{
//	//��д������һ���������������в��Ҿ����ĳ����
//	//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
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
//		printf("����������:>");
//		scanf("%d", &input);
//
//		if (input < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (input > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	//��������Ϸ
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
//			printf("��Ϸ��ʼ\n");
//			game();
//			break;
//		case 0:
//			printf("��Ϸ�������˳�����\n");
//			break;
//		default:
//			printf("����������������룡\n");
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


//int main()
//{
//	//��д������һ��1��100�����������г��ֶ��ٸ�����9
//	//
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || (i / 10 % 10 == 9))
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}


//int main()
//{
//	//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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
//	//��10�����������ֵ
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
//	//����Ļ�����9*9�˷��ھ���
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
//	//printf("%d", j);//err�����˴����žͲ�������
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
//	//ʵ��һ���������ж�һ�����ǲ���������
//	//��������ʵ�ֵĺ�����ӡ100��200֮���������
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
//	//ʵ�ֺ����ж�year�ǲ������ꡣ
//	//
//	int year = 0;
//	scanf("%d", &year);
//
//	if (judge_leap_year(year))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
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
//	//ʵ��һ�������������������������ݡ�
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
//	//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//	//�磺����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
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
//	//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
//	//if (n > 1)//�ݹ�
//	//{
//	//	return Factorial(n - 1) * n;
//	//}
//	//return 1;
//
//	int ret = 1;
//	int i = 0;
//	for (i = 1; i <= n; i++)//����
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
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
//int my_strlen1(char ch[])//�ǵݹ�
//{
//	int i = 0;
//	for (i = 0; ch[i] != '\0'; i++);
//	return i;
//}
//
//int my_strlen2(char ch[])//�ݹ�
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
//	//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
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
//void reverse_string(char str[])//�������ǰ��ַ�������β�ַ��Ե���Ȼ��ȥ������β�ַ����ַ���������һ�㺯��
//{
//	int sz = strlen(str);//���ַ�������
//
//	char tmp = str[0];//�����ַ�����һλ���ַ�
//
//	str[0] = str[sz - 1];//���ַ����ĵ�һλ�ַ���Ϊ�ַ������һλ�ַ����������������õ��ַ����׵�ַ
//	str[sz - 1] = '\0';//���ַ��������һλ��Ϊ�ַ�'\0'��ȥ�����ַ��������һλ���ı����ַ����ĳ���
//
//	if (strlen(str + 1) >= 2)//�ַ����׵�ַ��һ��ȥ�����ַ����ĵ�һλ
//	{
//		reverse_string(str + 1);//��ȥ���˵�һλ�����һλ���ַ������������������ϼ��ٺ��������ַ����ĳ���
//	}
//
//	str[sz - 1] = tmp;//��tmp�����ĵ�һλ�ַ��������ַ��������һλ
//}
//
//int main()
//{
//	//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//	//ʵ�֣��������ַ����е��ַ��������У����������ӡ��
//	//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//	//����:
//	//char arr[] = "abcdef";
//	//����֮����������ݱ�ɣ�fedcba
//	//
//	//�����е��ѣ�ûд���������˴𰸲Ż�д��
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
//	//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//	//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//	//���룺1729�������19
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
//	//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
//	//
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//
//	printf("%d\n", Power(n, k));
//
//	return 0;
//}


int Fibonacci_sequence1(int n)//�ǵݹ�
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

int Fibonacci_sequence2(int n)//�ݹ�
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
	//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
	//���磺
	//	���룺5  �����5
	//	���룺10�� �����55
	//	���룺2�� �����1
	//
	int n = 0;
	scanf("%d", &n);

	printf("%d %d\n", Fibonacci_sequence1(n), Fibonacci_sequence2(n));

	return 0;
}