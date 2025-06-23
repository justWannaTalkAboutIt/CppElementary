#include <iostream>
using namespace std;

//普通函数与函数模板的调用规则
//1 如果函数模板和普通函数都可以调用，优先调用普通函数
//2 可以通过空模板参数列表 强制调用 函数模板
//3 函数模板可以重载
//4 如果函数模板可以产生更好的匹配，优先调用函数模板

void myPrint(int a, int b); 
//{
//	cout << "调用普通函数" << endl;
//}

template <typename T>
void myPrint(T a, T b) 
{
	cout << "调用函数模板" << endl;
}
template <typename T>
void myPrint(T a, T b, T c)
{
	cout << "调用重载的函数模板" << endl;
}

void test501() 
{
	int a = 10;
	int b = 10;

	//myPrint(a,b); //编译器怎么挑执行哪个？

	//通过空模板参数列表，强制调用函数模板
	//myPrint<>(a,b);

	//myPrint(a, b, 100);
	
	//如果函数模板可以产生更好的匹配，优先调用函数模板
	char c1 = 'a';
	char c2 = 'b';

	myPrint(c1,c2);
	//这个调用谁呢？是通过隐式类型转换走普通函数呢？还是直接类型推导走函数模板呢？
	//答案是走函数模板，（要不然走普通函数还得进行类型转换）
}
//建议：既然提供了函数模板，最好就不要提供普通函数，否则容易出现二义性

int main5() 
{
	test501();
	system("pause");
	return 0;
}