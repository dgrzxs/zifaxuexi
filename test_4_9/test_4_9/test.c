#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//if��� + switch��� + whileѭ�� + getchar()����

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
//		printf("����\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int age = 10;
//	if (age > 18)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("δ����\n");
//		printf("��������\n");
//	}
//
//	return 0;
//}

//���֧

//int main()
//{
//	int age = 10;
//	scanf("%d", &age);
//
//	if (age < 18)
//	{
//		printf("������\n");
//	}
//	else if (age >= 18 && age < 28)
//	{
//		printf("����\n");
//	}
//	else if (age >= 28 && age < 40)
//	{
//		printf("����\n");
//	}
//	else if (age >= 40 && age < 60)
//	{
//		printf("׳��\n");
//	}
//	else if (age >= 60 && age <= 100)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
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
//	else//else�����������ifƥ��
//		printf("haha\n");
//
//	return 0;
//}

//1.����������(�����壬�淶)
//2.�ո񣬿��У�����

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
//	//�ж�һ�����Ƿ�Ϊ����
//	//����
//	int num = 0;
//	scanf("%d", &num);
//	//�ж�
//	if (num % 2)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("ż��\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//���1-100֮�������
//	int num = 1;
//
//	while (num <= 100)//���1-100����
//	{
//		if (num % 2)//�ж��Ƿ�Ϊ����
//		{
//			printf("%d\n", num);//���
//		}
//		num++;
//	}
//
//	return 0;
//}

//switch���

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//
//	/*if (day == 1)
//		printf("����һ\n");
//	else if (day == 2)
//		printf("���ڶ�\n");
//	else if (day == 3)
//		printf("������\n");
//	else if (day == 4)
//		printf("������\n");
//	else if (day == 5)
//		printf("������\n");
//	else if (day == 6)
//		printf("������\n");
//	else if (day == 7)
//		printf("������\n");
//	else
//		printf("�������\n");*/
//
//	switch (day)//��������������
//	{
//	case 1://���������ͳ�����ʾ
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
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
//	case 'a'://ȡASCIIֵ,97
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
//		printf("ѡ�����\n");
//		break;
//	}
//
//	return 0;
//}

//whileѭ��

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
//	//		break;//break�������õ���ֹѭ��
//	//	//if (i == 5)
//	//	//	continue;//contine����������ѭ��continue����Ĵ��룬������i++����ѭ��
//	//	printf("%d ", i);
//	//	i++;
//	//	//if (i == 5)
//	//	//	continue;//�����˵���ѭ����ĩβ��û�������κ����ݣ�������Ч
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

//getchar���Ի�ȡһ���ַ�����ֵ������ʱ����ַ���ASCIIֵ��������

//int main()
//{
//	//int ch = getchar();
//	//printf("%d\n", ch);//ch��getchar��ȡ���ַ���ASCIIֵ
//	//printf("%c\n", ch);
//	//putchar(ch);//ֱ�Ӵ�ӡ�ַ�
//
//	//int ch = 0;
//	//
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//
//	//��һ������
//	//����������һ���ַ���
//	char password[20] = { 0 };
//
//	printf("����������:>");
//	scanf("%s", &password);//scanf����ȡ�ո�
//
//	printf("��ȷ������(Y/N):>");
//
//	int ch = 0;
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}//���������
//
//	int ret = getchar();//getcharɶ��Ҫ
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
	}//ֻ��ӡ�����ַ�

	return 0;
}

