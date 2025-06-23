#include <iostream>
using namespace std;
#include <string>

int main2()
{
	//取模运算就是求余数
	int a1 = 10;
	int b1 = 3;
	cout << "a1 % b1 = " << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << "a2 % b2 = " << a2 % b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//cout << "a3 % b3 = " << a3 % b3 << endl;
	//两个数相除不可以为0，所以也做不了取模运算

	//两个小数不可以做取模运算
	double d1 = 3.14;
	double d2 = 1.1;
	//cout << d1 % d2 << endl;
	//两个小数无法进行取模运算

	system("pause");
	return 0;
}