#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ҵ

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
//	char arr[8] = { 'b', 'i', 't' };//����ȫ��ʼ�����������Ĭ��Ϊ��
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
//	printf("�ϴ�ֵ��%d\n", c);
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
//	//����
//	int a = 0;
//	scanf("%d", &a);
//	//����
//	int b = Sign(a);
//	//���
//	printf("%d\n", b);
//
//	return 0;
//}

//������


//int main()
//{
//	int a = 7 / 2;
//	int b = 7 % 2;//ȡģ
//	//ȡģ���������˱���������
//	float c = 7.0 / 2;
//
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%f %.1f\n", c, c);//%.1f - ��ӡС�����1λ(%.2f����С�������λ)
//
//	return 0;
//}

//int main()
//{
//	int a = 0;//��ʼ��
//	a = 20;//��ֵ
//
//	return 0;
//}


//C������
//0��ʾ��
//�����ʾ��


//int main()
//{
//	int flag = 2;
//	if (!flag)//��Ŀ������
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

//sizeof�ǲ��������ǵ�Ŀ������

//int main()
//{
//	int a = 10;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//���������������Ĵ�С����λ���ֽ�
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//�����Ԫ�ظ���
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
//	int b = a++;//����++����ʹ�ã���++
//	printf("%d\n", a);//a = 11
//	printf("%d\n", b);//b = 10
//
//	a = 10;
//	int c = ++a;//ǰ��++����++����ʹ��
//	printf("%d\n", a);
//	printf("%d\n", c);
//	//--ͬ��
//
//	return 0;
//}

//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	if (a = 3)//��ֵ
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//&& �߼��� - ����
//	//|| �߼��� - ����
//
//	int a = 0;
//	int b = 20;
//	if (a && b)//aΪ����bΪ��
//	{
//		printf("hehe\n");
//	}
//
//	if (a || b)//aΪ���bΪ��
//	{
//		printf("haha\n");
//	}
//
//	return 0;
//}

//����������(��Ŀ������)
// 
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int r1 = a > b ? a : b;//exp1?exp2:exp3
//	printf("%d\n", r1);    //exp1Ϊ�棬��ȡexp2��exp1Ϊ�٣���ȡexp3
//
//	int r2 = a < b ? a : b;//�������������Сֵ
//	printf("%d\n", r2);
//
//	return 0;
//}

//���ű��ʽ���Ƕ��Ÿ�����һ�����ʽ
//���ű��ʽ���ص��ǣ������������μ��㣬�������ʽ�Ľ�������һ�����ʽ�Ľ��

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	//       c=8        a=28       d=5
//	int d = (c = a - 2, a = b + c, c - 3);//���ű��ʽ
//	printf("a:%d,b:%d,c:%d,d:%d\n", a, b, c, d);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 3;
//	arr[n] = 20;//[]�����±����ò���������������arr��n(3),����Ԫ�ص�ʱ������ñ���
//
//	printf("%d\n", arr[3]);
//
//	return 0;
//}

////�������ò�����
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = Add(2, 3);//()���Ǻ������ò�������Add��2��3����()�Ĳ�����
//
//	return 0;
//}

//�����Ĺؼ��� - C���Ա������õģ��ؼ��ֲ����Լ����������ģ�Ҳ�����Լ�����
//auto, break, case, char, const, continue, default, do, double,
//else, enum(ö��), extern(�����ⲿ����), float, for, goto, if, int, long, register(�Ĵ���), 
//return, short, signed(�з��ŵ�), sizeof, static(��̬��), struct(�ṹ��), switch, typedef(����������),
//union(������(������)), unsigned(�޷��ŵ�), void(��(�����ķ������ͣ���������)), volatile, while

//int main()
//{
//	auto int a = 10;//�Զ����� - �Զ��������Զ����٣�auto����ʡ��
//
//	return 0;
//}

//������������
//1.������
//int age; float salary;
//2.���ֱ�������ĸ�����֡��»�����ɣ������������ַ���ͬʱ���������ֿ�ͷ
//int 2b;//err
//int _2b;//ok
//3.�����������ǹؼ���

int main()
{
	int ѧϰ = 2;
	printf("%d\n", ѧϰ);//�����������Ǻ��֣����ǳ������飬����һ�����ı��ϰ��

	return 0;
}