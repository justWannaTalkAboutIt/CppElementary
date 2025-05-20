#include <iostream>
using namespace std;

int main4()
{
	//1 字符型变量的创建
	char ch = 'a';
	cout << ch << endl;
	//2 字符型变量的内存占用
	cout << "char 字符型变量所占内存大小" << sizeof(char) << endl;
	//3 字符型变量常见错误
	//char ch2 = "b"; //创建字符型变量要使用单引号
	//char ch2 = 'abc';// 创建字符型变量时，单引号只能有一个字符

	//4 字符行变量的ASCII码
	cout << (int)ch << endl;

	system("pause");
	return 0;
}