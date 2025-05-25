#include <iostream>
using namespace std;
#include <fstream>
#include <string>

//二进制读文件
class Person
{
public:
	char m_Name[64]; // 姓名
	int m_Age; // 年龄
};

void test401()
{
	//1、包含头文件
	//2、创建流对象
	ifstream ifs;
	//3、打开文件 并判断文件是否打开成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
	}
	//4、读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person)); //第一个参数是对象的地址，强转为char*，第二个参数是大小
	cout << "姓名：" << p.m_Name << " 年龄：" << p.m_Age << endl;

	//5、关闭文件
	ifs.close();
}

int main()
{
	test401();

	system("pause");
	return 0;
}