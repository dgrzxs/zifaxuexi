#define _CRT_SECURE_NO_WARNINGS 1

//��������Ϸ + goto��� + ����(1)


#include <stdio.h>

//���Բ���һ�������(1~100)
//������
//����µ����ִ󣬷����´���
//����µ�����С��������С��
//ֱ���¶���
//

#include <time.h>//����time����
#include <stdlib.h>//����rand������srand����

//void menu()
//{
//	printf("***********************************\n");
//	printf("***********   1.play    ***********\n");
//	printf("***********   0.exit    ***********\n");
//	printf("***********************************\n");
//}
//
//void game()
//{
//	int ret = rand() % 100 + 1;//0~MAX(32767)֮�������������Ϊ1��100֮��������
//
//	for (;;)
//	{
//		printf("������(1~100):>");
//		int n = 0;
//		scanf("%d", &n);//����
//
//		if (n < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (n > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	srand((unsigned int)time(NULL));//NULL��ָ�룬int *p = NULL��int n = 0��time�����Ĳ�����ָ��
//									//���ﲻ��Ҫʹ��time�����Ĳ���������ʹ�ÿ�ָ��
//									//ÿ�����г���ʱ��srand����Ϊrand�������ɵ������ѡ��һ�����
//									//rand������ȷ�������̶ܹ�����һϵ��0~32767֮��������
//									//ʱ���ڲ�ͣ�仯������ÿ�δ򿪳���ʱ����һ����ͬ����������
//									//ʱ��-->ʱ�����time��������ֵ��һ�����͵�ʱ���
//									//srand������Ҫһ��unsigned int���͵Ĳ���
//									//���԰�time�����ķ���ֵǿ������ת����unsigned int��
//
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

#include <windows.h>//����system����
#include <string.h>//����strcpy������memset������strcmp����

//int main()
//{
//	system("shutdown -s -t 60");//shutdown -s�ػ���-t���ùػ�ʱ��
//	char ch[] = { "������" };
//
//again:
//	printf("���Խ���һ���Ӻ�ػ��������������ȡ���ػ�\n");
//	char sh[20] = { 0 };
//	scanf("%s", sh);
//
//	if (strcmp(sh, ch) == 0)
//	{
//		system("shutdown -a");//shutdown -aȡ���ػ�
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}


//int main()
//{
//	//char arr[20] = { "sadhiwds" };
//	//char arr1[20] = { 0 };
//	//strcpy(arr1, arr);
//	//printf("%s\n", arr1);
//
//	char arr[20] = "hello world";
//	memset(arr+6, 'y', 3);
//	printf("%s\n", arr);
//
//	return 0;
//}


//int compare(int a, int b)
//{
//	if (a >= b)
//		return a;
//	else
//		return b;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = compare(a, b);
//	printf("%d\n", max);
//
//	return 0;
//}

void ex(int* x, int* y)
{
	int n = 0;
	n = *x;
	*x = *y;
	*y = n;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	ex(&a, &b);
	printf("%d %d\n", a, b);
	return 0;
}