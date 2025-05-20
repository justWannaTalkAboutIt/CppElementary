#include <iostream>
using namespace std;

int main3()
{
	// do while 语句
	// 屏幕中输出0 到9这10个数字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num < 10);

	cout << "do while 会先执行一次循环语句，对比while循环" << endl;
	system("pause");
	return 0;
}