#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//typedef unsigned int uint;//����������
//
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 1;//��Ч��unsigned int num2 = 1;
//
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//���ξֲ�����
// 
//void test()
//{
//	static int a = 1;//static���κ󣬱���û�������ٺʹ����Ĺ�����
//	a++;
//	printf("%d ", a);
//}
////static���ξֲ�����ʱ���ֲ��������������򣬲�����
////�����ϣ�static���ξֲ�����ʱ���ı��˱����Ĵ洢λ�ã�ջ�� --> ��̬��
////Ӱ���˱������������ڣ��������ڱ䳤���ͳ������������һ����û�иı�������
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	//printf("%d\n", a);//err,��û�б��ȫ�ֱ���
//
//	return 0;
//}

//����ȫ�ֱ���
//
//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static���κ���
//
//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}

//int main()
//{
//	//�Ĵ�������
//	register int num = 3;//����num = 3����ڼĴ�����
//
//	return 0;
//}

//#define NUM 100//#define����ı�ʶ������
//
//int main()
//{
//	printf("%d\n", NUM);
//	int a = NUM;
//	printf("%d\n", a);
//	int arr[NUM] = { 0 };
//
//	return 0;
//}


//#define ADD(x, y) ((x) + (y))//#define����꣬�����в�����
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);//��������滻��ֱ�ӽ�a��b�滻��x��y���ڵ�λ��
//					  //��ЧΪint c = ((a) + (b));
//
//	return 0;
//}


//ָ�� = ��ַ

//int main()
//{
//	int a = 10;//���ڴ�����4���ֽڣ��洢10
//	
//	printf("%p\n", &a);
//	int* p = &a;//p����ָ�������pָ��Ķ�����int����
//
//	*p = 20;//������
//	printf("%d\n", a);
//
//	/*char ch = 'w';
//	char* pc = &ch;
//	printf("%p\n", pc);*/
//
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	
//	return 0;
//}



////ѧ��
//struct Stu//�ṹ��
//{
//	//��Ա
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age , (*ps).sex, (*ps).tele);
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20, "nan", "15596668862" };
//
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//�ṹ�����.��Ա��
//	printf("%s %s %d %s\n", s.sex, s.name, s.age, s.tele);//˳��ɵ�
//
//	print(&s);
//
//	return 0;
//}

//��ҵ

int main()
{
	//��ʼ��
	int a = 0;
	int b = 0;
	//����
	scanf("%d %d", &a, &b);
	//����
	//int c = a / b;
	//int b = a % b;
	//���
	//printf("%d %d\n", c, b);
	printf("%d %d\n", a / b, a % b);

	return 0;
}

