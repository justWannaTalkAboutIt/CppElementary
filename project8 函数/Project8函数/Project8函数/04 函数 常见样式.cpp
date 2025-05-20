#include <iostream>
using namespace std;
//函数常见样式
//1、无参无返
void test01()
{
	cout << " test 01" << endl;
}
//2、有参无返
void test02(int a)
{
	cout << " test 02" << endl;
	cout << "a = " << a << endl;
}
//3、无参有返
int test03() 
{
	cout << " test 03" << endl;
	return 1000;
}
//4、有参有返
int test04(int a)
{
	cout << " test 04" << endl;
	return a;
}
int main4()
{
	cout << "函数常见样式4种：" << endl;
	cout << "1、无参无返" << endl;
	test01();
	cout << endl;
	
	cout << "2、有参无返" << endl;
	test02(100);
	cout << endl;

	cout << "3、无参有返" << endl;
	int num1 = test03();
	cout << "num1 = " << num1 << endl;
	cout << endl;
	
	cout << "4、有参有返" << endl;
	int num2 = test04(100000);
	cout << "num2 = " << num2 << endl;

	system("pause");
	return 0;
}