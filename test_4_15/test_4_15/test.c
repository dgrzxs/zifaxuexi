#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//forѭ�� + do...whileѭ�� + 

//int main()
//{
//	int i = 1;//��ʼ��
//
//	while (i <= 10)//�ж�
//	{
//		printf("%d\n", i);
//		i++;//����
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)//��ʼ�����жϣ���������һ
//	{
//		printf("%d ", i);
//		printf("hehe\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	for (;;)//forѭ�����жϲ���ʡ����ζ�����жϻ�����
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
//	do
//	{
//		i++;
//
//		if (i == 5)
//		{
//			continue;
//		}
//
//		printf("%d ", i);
//	}
//	while (i <= 10);
//
//	return 0;
//}


//int main()
//{
//	//����n�Ľ׳�
//	//����
//	int i = 0;
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	//����
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	//���
//	printf("%d\n", ret);
//
//	return 0;
//}


//int main()
//{
//	//��1! + 2! + 3! + ... + n!��ֵ
//	//��ʼ��
//	int n = 0;
//	//ȷ������ѭ��Ƕ��
//	int i = 0;
//	int j = 0;
//	//����
//	scanf("%d", &n);
//	//�����������Ҫ�õ��м����
//	int ret = 1;
//	int sum = 0;
//
//	for (i = 1; i <= n; i++)//����1��n����
//	{
//		for (j = 1; j <= i; j++)//����ÿ�����Ľ׳�
//		{
//			ret = ret * j;//�׳�
//		}
//		sum = ret + sum;//��ÿ�����Ľ׳����
//		ret = 1;//��ʼ��ÿ�����Ľ׳˵����
//	}
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}


//int main()
//{
//	//��1! + 2! + 3! + ... + n!��ֵ���򻯰汾
//	//��ʼ������
//	int n = 0;
//	//����ѭ��
//	int i = 0;
//	//����
//	scanf("%d", &n);
//	//��������е��м�����ĳ�ʼ��
//	int sum = 0;//�洢�׳˵ĺ�
//	int ret = 1;//�洢ÿ�����Ľ׳�
//	//����
//	for (i = 1; i <= n; i++)//����1��n����
//	{
//		ret = ret * i;//����1��n������ÿ�����Ľ׳�
//		sum = ret + sum;//����Щ�׳����
//	}
//	//���
//	printf("%d\n", sum);
//
//	return 0;
//}


//��һ�����������в��Ҿ����ĳ������n
//������

//int main()
//{
//	//��һ�����������в��Ҿ����ĳ������n
//	//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("�ҵ��ˣ��±���%d\n", i);
//			break;
//		}
//	}
//
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


//������

//int main()
//{
//	//��һ�����������в��Ҿ����ĳ������n
//	//
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int n = 0;
//	scanf("%d", &n);
//
//	int max = sizeof(arr) / sizeof(arr[0]) - 1;
//	int min = 0;
//	int mid = (max + min) / 2;
//	int num = mid;
//
//	for (;;)
//	{
//		if (n < arr[mid])
//		{
//			max = mid - 1;
//		}
//		else if (n > arr[mid])
//		{
//			min = mid + 1;
//		}
//		mid = (max + min) / 2;
//
//		if(n == arr[mid])
//		{
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//
//		if (max == min)
//		{
//			printf("�Ҳ���\n");
//			break;
//		}
//	}
//
//	return 0;
//}


//������

int main()
{
	//��һ�����������в��Ҿ����ĳ������n
	//
	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int n = 0;
	scanf("%d", &n);

	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int mid = 0;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (n < arr[mid])
			right = mid - 1;
		else if (n > arr[mid])
			left = mid + 1;
		else
		{
			printf("�ҵ��ˣ��±���%d\n", mid);
			break;
		}
	}

	if (left < right)
		printf("�Ҳ���\n");

	return 0;
}