#include <iostream>
using namespace std;
#include <string>

int main6()
{
	// C风格字符串
	//注意事项1，str后面一定要有中括号
	//注意事项2，等号后要用双引号，包含起来字符
	char str[] = "hello world";
	cout << str << endl;
	// C++风格字符串
	//注意事项，需要包含一个string头文件
	string str2 = "hello world";
	system("pause");
	return 0;
}