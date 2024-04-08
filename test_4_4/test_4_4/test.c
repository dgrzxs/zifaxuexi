#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//typedef unsigned int uint;//类型重命名
//
//int main()
//{
//	unsigned int num1 = 0;
//	uint num2 = 1;//等效于unsigned int num2 = 1;
//
//	return 0;
//}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//修饰局部变量
// 
//void test()
//{
//	static int a = 1;//static修饰后，变量没有了销毁和创建的过程了
//	a++;
//	printf("%d ", a);
//}
////static修饰局部变量时，局部变量出了作用域，不销毁
////本质上，static修饰局部变量时，改变了变量的存储位置，栈区 --> 静态区
////影响了变量的生命周期，生命周期变长，和程序的生命周期一样，没有改变作用域
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	//printf("%d\n", a);//err,并没有变成全局变量
//
//	return 0;
//}

//修饰全局变量
//
//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//static修饰函数
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
//	//寄存器变量
//	register int num = 3;//建议num = 3存放在寄存器中
//
//	return 0;
//}

//#define NUM 100//#define定义的标识符常量
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


//#define ADD(x, y) ((x) + (y))//#define定义宏，宏是有参数的
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);//宏是完成替换，直接将a和b替换到x和y所在的位置
//					  //等效为int c = ((a) + (b));
//
//	return 0;
//}


//指针 = 地址

//int main()
//{
//	int a = 10;//向内存申请4个字节，存储10
//	
//	printf("%p\n", &a);
//	int* p = &a;//p就是指针变量，p指向的对象是int类型
//
//	*p = 20;//解引用
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



////学生
//struct Stu//结构体
//{
//	//成员
//	char name[20];
//	int age;
//	char sex[10];
//	char tele[12];
//};
//
//void print(struct Stu* ps)
//{
//	printf("%s %d %s %s\n", (*ps).name, (*ps).age , (*ps).sex, (*ps).tele);
//	//结构体指针变量->成员名
//	printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
//}
//
//int main()
//{
//	struct Stu s = { "zhangsan", 20, "nan", "15596668862" };
//
//	printf("%s %d %s %s\n", s.name, s.age, s.sex, s.tele);//结构体对象.成员名
//	printf("%s %s %d %s\n", s.sex, s.name, s.age, s.tele);//顺序可调
//
//	print(&s);
//
//	return 0;
//}

//作业

int main()
{
	//初始化
	int a = 0;
	int b = 0;
	//输入
	scanf("%d %d", &a, &b);
	//计算
	//int c = a / b;
	//int b = a % b;
	//输出
	//printf("%d %d\n", c, b);
	printf("%d %d\n", a / b, a % b);

	return 0;
}

