#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//1.���泣��
//2.const���εĳ�����
//3.define�����ʶ������
//4.ö�ٳ���

//int main()
//{
//	//30;
//	//3.14;//���泣��
//	//'w';//�ַ�
//	//"abc";//�ַ���
//	
//	//int a = 10;//a�Ǳ���
//	//a = 20;//a�����޸�
//	//printf("%d\n", a);
//
//	//const int a = 10;//a��const���εĳ�����
//	//a = 20;//a���ܱ��޸�
//	//printf("%d\n", a);//��C�����У�const���ε�a�����Ǳ�����������ֱ���޸ģ��г�������
//
//	const int n = 10;
//	int arr[10] = { 0 };
//
//	return 0;
//}

//#define MAX 100//define����ı�ʶ������
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


////ö�ٳ���
//enum Color
//{
//	//ö�ٳ���
//	RED,
//	GREEN,
//	BLUE
//};
//
////�Ա�
//enum Sex
//{
//	//ö�ٳ���
//	MALE,
//	FEMALE,
//	SECRE
//};
//
//int main()
//{
//	//��ԭɫ
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
//	//char �ַ�����
//	//'a';
//	//char ch = 'w';
//	//�ַ���
//	//C��������û���ַ��������أ� - û��
//	//"abcdef";
//	char arr1[] = "abcdef";//�洢�ַ������ַ����Ľ�����־�� \0
//	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f', '\0'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	int len = strlen("abc");//���ַ������ȵ�һ���⺯����string length
//	printf("%d\n", len);
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//ת���ַ�

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

//ת���ַ�
//����ĸ��,Ŀǰ�ܶ��������֧������ĸ��
//??) --> [
//??( --> ]

//
//%d - ��ӡ����
//%c - ��ӡ�ַ�
//%s - ��ӡ�ַ���
//%f - ��ӡfloat���͵�����
//%lf - ��ӡdouble���͵�����
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
//	//printf("\a");//�������Է������������ַ�
//
//	//\r�س���\tˮƽ�Ʊ��
//
//	printf("%c\n", '\130');//\ddd - 8���� - һ���ַ�
//	//8���Ƶ�130����10���Ƶ�88����ASCII��������X
//	printf("%c\n", '\x63');//\xdd - 16���� - һ���ַ�
//	//16���Ƶ�60����10���Ƶ�99����ASCII��������c
//	//0��ASCII��ֵ��48��A��ASCII��ֵ��65��a��ASCII��ֵ��97
//
//	return 0;
//}

//int main()
//{
//	//printf("%d\n", strlen("qwer t"));
//	printf("%d\n", strlen("c:\test\628\test.c"));//8������8���Ƶ�����
//	
//	return 0;
//}


////ע��
//
//int main()
//{
//	//����ָ�����p������ֵΪNULL(��)
//	int* p = NULL;
//
//	return 0;
//}

////ѡ�����
//
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}
//
////ѭ�����
////20000����Ч������ۼ�
//
//int main()
//{
//	int line = 0;
//	printf("�������\n");
//
//	while (line < 20000)
//	{
//		printf("д���룻%d\n", line);
//		line++;
//	}
//
//	if (line >= 20000)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//	return 0;
//}

//
////��2�����������ĺ�
//
////����
////int Add(int x, int y)
////{
////	int z = x + y;
////	return z;
////}
//
//int Add(int x, int y)
//{
//	return (x + y);//���ſ��Բ�д
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	//����
//	scanf("%d %d", &num1, &num2);
//
//	//���
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	//Add(num1, num2);//err
//	int t1 = 200;
//	int t2 = 300;
//	int ret = Add(t1, t2);
//
//	//��ӡ
//	printf("%d\n", sum);
//
//	return 0;
//}

////����
//
//int main()
//{
//	//int a = 10;
//	//int b = 11;
//	//int c = 12;
//	////0��9
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


//��ҵ
//�����������Ľϴ�ֵ

int main()
{
	//������������
	int a = 0;
	int b = 0;
	printf("��������������");
	scanf("%d %d", &a, &b);
	
	//�Ƚ��������Ĵ�С��������ϴ�ֵ
	if (a <= b)
	{
		printf("�ϴ�ֵ��%d\n", b);
	}
	else
	{
		printf("�ϴ�ֵ��%d\n", a);
	}

	return 0;
}