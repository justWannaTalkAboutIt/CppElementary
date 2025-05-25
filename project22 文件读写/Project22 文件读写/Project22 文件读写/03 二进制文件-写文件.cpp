#include <iostream>
using namespace std;
#include <fstream>
#include <string>
//二进制写文件
class Person 
{
public:
	char m_Name[64];//姓名
	int m_Age;//年龄
};

void test301() 
{
	//1、包含头文件
	//2、创建流文件
	ofstream ofs;
	//3、打开文件
	ofs.open("Person.txt",ios::out|ios::binary); //利用open打开文件
	//或直接 
	//ofstream ofs("Person.txt",ios::out| ios::binary); //利用构造函数打开文件
	//4、写文件
	Person p = {"张三",18};
	ofs.write((const char *) & p,sizeof(Person)); //写入对象地址需要转成const char*
	//5、关闭文件
	ofs.close();
}
int main3() 
{
	test301();
	system("pause");
	return 0;
}