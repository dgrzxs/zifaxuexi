#define _CRT_SECURE_NO_WARNINGS 1

//����(3):��������,ģ�黯,��̬��,�ݹ�

#include <stdio.h>


//��ͷ�ļ���������������Դ�ļ�(����Ҫ��ͷ�ļ�ͬ����������ͬ��)�ж��庯�������һ���ӷ�ģ�飬ģ�黯����
#include "add.h"//����add���ͷ�ļ����Լ�����ĺ�����˫���ţ��⺯���ü�����

#pragma comment(lib, "add.lib")//���뾲̬��add.lib
							   //��ֹ����

////������������һ�����ͷ�ļ���
//int Add(int, int);//ֻ��Ҫ�����ķ���ֵ���ͣ��������ͺͲ�������

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
////�����Ķ��壬����Ѻ�����������main�������棬�ᱨ����(������Ȼ������):Addδ���壬��ʱ����Ҫ����һ�º���
//int Add(int x, int y)
//{
//	return x + y;
//}


//�����������ı�̼��ɳ�Ϊ�ݹ�(recursion)

//void print(unsigned int n)
//{
//	/*if (n > 0)//���һ��ݹ麯����������0
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}*/
//
//	if (n > 9)//��������һ��ݹ飬���һ��ݹ麯�����������������ֵ����λ��ֵ
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	//����һ������ֵ(�޷���)������˳���ӡ����ÿһλ��
//	//����
//	unsigned int num = 0;
//	scanf("%u", &num);
//
//	//�ݹ�������
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
//	//int count = 0;//���õݹ�ֱ�����ַ������ȵķ�������Ҫ������ʱ����
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;
//	//}
//	//return count;
//
//	if (str[0] != '\0')//�õݹ������⣬����Ҫ������ʱ����
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	//��д����������������ʱ���������ַ����ĳ���(ģ��ʵ��strlen)
//	//
//	int len = my_strlen("abcd 024asd\n\t");
//
//	printf("%d\n", len);
//
//	printf("%d\n", sizeof(char*));
//
//	return 0;
//}


//ѭ����һ�ֵ���


//int fac(int n)
//{
//	//int ret = 1;
//
//	//while (n > 0)//����
//	//{
//	//	ret = n * ret;
//	//	n--;
//	//}
//	//
//	//return ret;
//
//	if (n > 0)//�ݹ�
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
//	//��n�Ľ׳�
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
	//if (n <= 2)//�ݹ飬����������
	//{
	//	return 1;
	//}
	//else
	//{
	//	return Fibonacci(n - 2) + Fibonacci(n - 1);
	//}

	if (n <= 2)//����
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
	//���n��쳲���������쳲��������У�1 1 2 3 5 8 13 21 34 55 89 ...
	//
	int n = 0;
	scanf("%d", &n);

	long long ret = Fibonacci(n);

	printf("%lld\n", ret);

	return 0;
}


//�����ݹ�ļ�����������(�����о�)��
//1.��ŵ������   ���ش󲩸�
//2.������̨������   C���Ե�ˢ��ѵ��Ӫ