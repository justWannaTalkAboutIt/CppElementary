#include <iostream>
using namespace std;
//����������ʽ
//1���޲��޷�
void test01()
{
	cout << " test 01" << endl;
}
//2���в��޷�
void test02(int a)
{
	cout << " test 02" << endl;
	cout << "a = " << a << endl;
}
//3���޲��з�
int test03() 
{
	cout << " test 03" << endl;
	return 1000;
}
//4���в��з�
int test04(int a)
{
	cout << " test 04" << endl;
	return a;
}
int main4()
{
	cout << "����������ʽ4�֣�" << endl;
	cout << "1���޲��޷�" << endl;
	test01();
	cout << endl;
	
	cout << "2���в��޷�" << endl;
	test02(100);
	cout << endl;

	cout << "3���޲��з�" << endl;
	int num1 = test03();
	cout << "num1 = " << num1 << endl;
	cout << endl;
	
	cout << "4���в��з�" << endl;
	int num2 = test04(100000);
	cout << "num2 = " << num2 << endl;

	system("pause");
	return 0;
}