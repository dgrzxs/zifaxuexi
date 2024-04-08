#define _CRT_SECURE_NO_WARNINGS 1

//全局变量:具有外部链接属性

static int g_val = 2024;
//static修饰全局变量时，全局变量的外部链接属性就变成了内部链接属性
//其他源文件(.c)就不能使用这个全局变量课


//函数：具有外部链接属性

static int Add(int x, int y)
{
	return x + y;
}
//函数和全局变量一样