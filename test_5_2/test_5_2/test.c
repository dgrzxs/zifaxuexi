#define _CRT_SECURE_NO_WARNINGS 1

//����(2):������ֵ,�ж�����,�ж�����,���ֲ���,bool,������Сϸ��

#include <stdio.h>


//дһ���������Խ����������α���������

//void Swap(int* x, int* y)
//{
//	int n = 0;
//	n = *x;
//	*x = *y;
//	*y = n;
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	//��ֵ����
//	int c = Add(a, b);//�����Ĳ��������Ǳ���
//	int d = Add(10, b);//����
//	int e = Add(a + 3, b);//���ʽ
//	int f = Add(Add(a, b), b);//������
//
//	printf("%d\n", c);
//	//����
//	//��ַ����
//	Swap(&a, &b);
//	printf("%d %d\n", a, b);
//
//	return 0;
//}


#include <math.h>//����sqrt��������ƽ��

//int Judge_Prime(int x)//�ж�һ�����ǲ�������
//{
//	int i = 0;
//	//int flag = 1;//�жϱ�־�������жϱ�־�����Խ�ʡ�ڴ�
//
//	for (i = 2; i <= sqrt(x); i++)//���һ����������������ô����Ȼ��һ��С�ڵ�����ƽ������Լ��
//	{							  //����ѭ��ֻ��Ҫ�����ֵ����Ϊ������ƽ����
//		if ((x % i) == 0)		  //�����������
//		{
//			//flag = 0;//�����Լ�����������������жϱ�־��Ϊ0
//			//break;//��������ѭ��
//			return 0;
//		}
//	}
//
//	//return flag;//�жϱ�־Ϊ1��Ϊ������0��������
//				  //����������1��������������0
//	return 1;
//}				
//
//int main()
//{
//	//дһ�����������ж�һ�����ǲ�������
//	//����
//	int n = 0;
//	scanf("%d", &n);
//
//	if (Judge_Prime(n))
//		printf("������\n");
//	else
//		printf("��������\n");
//
//	return 0;
//}


//int Judge_Leap_Year(int x)//�ж��Ƿ�Ϊ���꣬���ں����ڴ�ӡ����֤�������ܵĵ�һ�ԣ��������ʹ��
//{
//	if ((x % 4 == 0) && (x % 100 != 0))//4�ı����Ҳ���100�ı���
//		return 1;
//
//	if (x % 400 == 0)//400�ı���
//		return 1;
//
//	//if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))//2��1
//	//	return 1;
//
//	return 0;//�����귵��1���������귵��0
//}
//
//int main()
//{
//	//дһ�������ж�һ���ǲ�������
//	//����
//	int year = 0;
//	scanf("%d", &year);
//	//�ж�
//	if (Judge_Leap_Year(year))
//		printf("������\n");
//	else
//		printf("��������\n");
//
//	return 0;
//}


//int binary_search(int x, int arr[], int sz)//���鴫��ʵ���ϴ�����������׵�ַ����ʡ�ڴ�
//{										   //arr���������飬��ʵ��ָ��
//	int min = 0;
//	int max = sz - 1;
//	int mid = 0;
//
//	for (;;)
//	{
//		mid = min + (max - min) / 2;//��ֹmid���
//
//		if (arr[mid] < x)
//		{
//			min = mid + 1;
//		}
//		else if (arr[mid] > x)
//		{
//			max = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//
//		if (max < min)
//		{
//			return -1;
//		}
//	}
//}
//
//int main()
//{
//	//дһ��������ʵ��һ��������������Ķ��ֲ���
//	//
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int k = 0;
//	scanf("%d", &k);
//
//	if (binary_search(k, arr, sz) != -1)
//	{
//		printf("�ҵ��ˣ��±���:%d\n", binary_search(k, arr, sz));
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}


//bool,��������,bool flag = ture;/false;�൱��1��0;��Ҫ�ǽ�Լ�ռ�,bool����ֻҪ1���ֽ�


//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	//дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//	//
//	int num = 0;
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		Add(&num);
//	}
//
//	printf("%d\n", num);
//
//	return 0;
//}


//int main()
//{
//	//int len = strlen("abcdef");
//	//printf("%d\n", len);
//	////��ʽ���ʣ���һ�������ķ���ֵ������һ�������Ĳ���
//	//printf("%d\n", strlen("abcdef"));
//
//	printf("%d", printf("%d", printf("%d", 43)));//���͵���ʽ����
//
//	return 0;
//}




//������д�������͵�ʱ��Ĭ�Ϸ���������int
Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	//����д�˷������ͣ���û�з���ֵ��ĳЩ���������Զ��������һ��ָ��ִ�еĽ��
	printf("hehe\n");//printf����ֵΪ5
}

void test(void)//�����ڵ�void��д�ɲ�д��д�˾�����ȷ˵���ú�������Ҫ������������Ҳ����ú�������Ҫ����
{
	printf("haha\n");
}

int main(int argc, char* argv[], char *envp[])//main�����ǿ���������������
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	int d = Sub(a, b);

	printf("%d %d\n", c, d);

	test(100);//��������Ҫ����������Ȼ���Դ������Ǻ���������ܣ��ǳ����Ƽ�����д��
	test();

	return 0;
}