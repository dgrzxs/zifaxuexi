#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ҵ��ѭ�����


//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", 97);
//	
//	return 0;
//}


//int main()
//{
//	//���������������������������Լ��
//	//����
//	int num1 = 0, num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	//����
//	int i = 0;
//	i = num1 < num2 ? num1 : num2;
//	while (i >= 1)
//	{
//		if ((num1 % i == 0) && (num2 % i == 0))//�ж��Ƿ�Ϊ���Լ��
//		{
//			printf("%d\n", i);//���
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
//	//��ӡ1000�굽2000��֮�������
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
	//��ӡ100��200֮�������
	//
	int i = 101;//������㣬ֱ���ж�����
	int count = 0;//����

	while (i <= 200)//����100��200֮�������ż�������������������Կ���ֱ���ж�����
	{
		//�ж��Ƿ�Ϊ����
		int j = 2;
		int n = sqrt(i);//sqrt��������ֵ��double����

		while (j <= n)//��2��ʼ�������������ж��Ƿ�Ϊ������Լ��
		{
			if (j < n)//���г�1���䱾���Լ��ʱ��һ����һ����С�ڸ����Ŀ�ƽ��
			{
				if (i % j == 0)//���г�1���䱾���Լ��ʱ��֤���������������������ѭ��
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
					printf("%d ", i);//һֱ��i/2ʱ��û������Լ��������������������ӡ����
					count++;
				}
			}

			j++;
		}

		i+=2;//ֱ���ж�����
	}

	printf("\ncount = %d\n", count);

	return 0;
}//�������д���治��


//int main()
//{
//	//�������������Ӵ�С��˳������
//	//����
//	int a = 0, b = 0, c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//
//	if (a <= b)//��ȡ�������Ƚϴ�С
//	{
//		if (a <= c)//����С������ʣ���һ�����Ƚϴ�С
//		{
//			if (b <= c)//��a��Сʱ���Ƚ�b��c�Ĵ�С
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
//			if (a <= c)//��b��Сʱ���Ƚ�a��c�Ĵ�С
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
//	//�������������Ӵ�С��˳������
//	//����
//	int a = 0, b = 0, c = 0, n = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	//����
//	if (a <= b)//���a<b������ab
//	{
//		n = a;
//		a = b;
//		b = n;
//	}
//	if (b <= c)//���b<c������bc
//	{
//		n = b;
//		b = c;
//		c = n;
//	}
//	if (a <= b)//���a<b������ab
//	{
//		n = a;
//		a = b;
//		b = n;
//	}
//	//���
//	printf("%d %d %d\n", a, b, c);
//	
//	return 0;
//}


//int main()
//{
//	//��ӡ1��100֮������3�ı���������
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
//	//ת������ASCII��Ϊ��Ӧ�ַ����������
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
//	//ת������ASCII��Ϊ��Ӧ�ַ����������
//	//73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33
//	//����
//	int arr[] = { 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33 };
//	int i = 0;
//	//�������鳤��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���
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
//	//����һ���˵ĳ�������(����������)�����������е��ꡢ�¡��շֱ����
//	//����20120225
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
//	//��������һ��ѧ����ѧ�ţ��Լ�3��(C���ԣ���ѧ��Ӣ��)�ɼ���
//	//����Ļ�������ѧ����ѧ�ţ�3�Ƴɼ�(ע������ɼ�ʱ��������������ұ���2λС��)
//	//����17140216;80.845,90.55,100.00��123456;93.33,99.99,81.20
//	int ID = 0;
//	float C = 0.0f, Math = 0.0f, English = 0.0f;
//	scanf("%d;%f,%f,%f", &ID, &C, &Math, &English);
//	//���
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
//	//���ĸ������е����ֵ
//	//����
//	int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
//	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
//	//�ȴ�С
//	int max = 0;
//	max = n1 >= n2 ? n1 : n2;
//	max = max >= n3 ? max : n3;
//	max = max >= n4 ? max : n4;
//	//���
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	//���ĸ������е����ֵ
//	//����
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//�ȴ�С
//	//�����һ���������ֵ
//	int max = arr[0];
//	int j = 1;
//	while (j <= i)
//	{
//		if (max < arr[j])
//			max = arr[j];
//		j++;
//	}
//	//���
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	//���ĸ������е����ֵ
//	//����
//	int i = 0;
//	int n = 0;
//	int max = 0;
//	//�����һ��ֵΪ���ֵ
//	scanf("%d", &max);
//	//�ȴ�С
//	while (i < 3)
//	{
//		scanf("%d", &n);
//		if (max <= n)
//			max = n;
//		i++;
//	}
//	//���
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
