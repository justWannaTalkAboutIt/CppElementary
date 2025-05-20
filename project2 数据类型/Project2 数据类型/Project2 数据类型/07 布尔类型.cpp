#include <iostream>
using namespace std;
#include <string>

int main7()
{
	//1 创建bool数据类型
	bool flag = true;
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	//2 查看bool数据类型所占内存空间
	cout << sizeof(bool) << endl;

	system("pause");
	return 0;
}