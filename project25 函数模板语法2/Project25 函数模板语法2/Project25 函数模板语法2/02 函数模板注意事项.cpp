#include <iostream>
using namespace std;

//函数模板注意事项
//1 自动类型推导，必须推导出一致的数据类型T
//2 模板必须要确定出T 的数据类型，才可以使用

template <typename T> //typename可以替换成class
void mySwap2(T& a, T& b) 
{
	T temp = a;
	a = b;
	b = temp;
}

//2 模板必须能确定T的数据类型，才可以使用
	//函数体中用到这个T了么？没有
	//那么可不可以调用时不指定T呢？不能，简单来讲，将T看成类型的变量，不将变量指定齐全，编译器无法确定具体函数
	//编译器无法自动推导，只能使用显示指定类型的方式来调用模板函数
template <typename T>
void func() 
{
	cout << "----func----" << endl;
}

void test201() 
{
	int a = 10;
	int b = 20;
	mySwap2(a,b);
	cout << "-------------交换后-------------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	char c = 'c';
	//mySwap2(a, c);//没有与参数列表匹配的 函数模板 "mySwap2" 实例
	// 编译器推导不出T到底是int还是char

	//必须显示指定类型，否则无法使用
	//func();//没有与参数列表匹配的 函数模板 "func" 实例
	func<int>();
}

int main2() 
{
	test201();
	system("pause");
	return 0;
}