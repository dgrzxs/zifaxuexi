#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//Դ�ļ��ĵ�һ�з� #define _CRT_SECURE_NO_WARNINGS
//������scanf


//int main()
//{
//	printf("hehe\n");
//
//	return 0;
//}

//std - ��׼
//i - input
//o - output
//stdio��׼���������

//main�����ǳ�������
//main�������ҽ���һ��

//char�ַ�
//short������
//int����
//long������
//long long����������
//float�����ȸ�����
//double˫���ȸ�����

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

//C���Թ涨 sizeof(long)>=sizeof(int)
//

//int main()
//{
//	int age = 20;
//	double price = 66.6;
//
//	return 0;
//}

//�������������������ģ����������ı�����Ϊ�����ڴ�����ռ�
//

//int b = 20;//ȫ�ֱ���
//
//int main()
//{
//	/*short age = 24;
//	int high = 170;
//	float weight = 70.5;*/
//	int a = 10;//�ֲ�����
//
//	return 0;
//}


//int a = 100;
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//	//��ȫ�ֱ����;ֲ�����������ͬʱ���ֲ�����
//
//	return 0;
//}


////дһ�����룬�������������ĺ�
////printf��һ���������
////scanf��һ�����뺯��
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//��ʼ����δ��ʼ���ı�����һ�����ֵ
//
//	//��������������
//	scanf("%d %d", &num1, &num2);
//	//���
//	int sum = num1 + num2;
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}


//������������
//1.�ֲ�����
//�ֲ��������������Ǳ������ڵľֲ���Χ���ֲ���Χ��{}ȷ��
//2.ȫ�ֱ���������������������


//���������ⲿ�ķ���
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

//��������������
//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ���
//
//ȫ�ֱ����������������������

int main()
{
	{
		int a = 10;
		printf("%d\n", a);
	}

	printf("%d\n", a);

	return 0;
}