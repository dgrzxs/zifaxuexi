#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>//�����������
#include <string.h>//����strlen������strcmp:91��
#include <windows.h>//����Sleep:28��
#include <stdlib.h>//����system:29��

//int main()
//{
//	//��д���룬��ʾ����ַ��������ƶ������м���
//	//
//	char ch[] = { "Welcome to bite!!!" };//��ʼ��
//	char sh[] = { "##################" };
//
//	int sz = strlen(ch);//���ַ�������
//	int mid = 0;//�ԳƱ仯��ѭ�����м��յ�
//	if (sz % 2 != 0)
//		mid = (sz + 1) / 2;//�ַ�������Ϊ����ʱ�����ڳ������Զ�����С��λ����Ҫ�����ַ�������
//	else
//		mid = sz / 2;
//
//	int i = 0;
//	for (i = 0; i < mid; i++)
//	{
//		sh[i] = ch[i];
//		sh[sz - 1 - i] = ch[sz - 1 - i];//�ԳƱ任
//		printf("%s\n", sh);
//		Sleep(500);//�ӳ����
//		system("cls");//system--�⺯��:ִ��ϵͳ���cls--ϵͳ����:�����Ļ
//	}
//
//	printf("%s\n", sh);
//
//	return 0;
//}


//int main()
//{
//	//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
//	//ֻ���������������룬���������ȷ����ʾ��¼�ɹ�
//	//������ξ�����������˳�����
//	//
//	char password[20] = { 0 };
//	char key[] = { "123456789" };
//
//	int sz = strlen(key);
//	
//	int i = 0, j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);//���鲻��Ҫȡ��ַ
//		for (j = 0; j < sz; j++)
//		{
//			if (password[j] != key[j])
//			{
//				printf("�������\n");
//				break;
//			}
//		}
//		if (j == sz)
//		{
//			printf("������ȷ����¼�ɹ�\n");
//			break;
//		}
//	}
//	if (i == 3)
//	{
//		printf("�����������������˳�����\n");
//	}
//
//	return 0;
//}


int main()
{
	//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����
	//ֻ���������������룬���������ȷ����ʾ��¼�ɹ�
	//������ξ�����������˳�����
	//
	char password[20] = { 0 };
	char key[] = { "123456789" };//����

	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, key) == 0)//�Ƚ�2���ַ����Ƿ���ȣ�����ʹ��==
		{							   //��Ӧ��ʹ��һ���⺯��:strcmp
			printf("������ȷ����¼�ɹ�\n");      //�������ֵ��0����ʾ2���ַ������
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i == 3)
	{
		printf("�����������������˳�����\n");
	}

	return 0;
}