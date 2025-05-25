#include <iostream>
using namespace std;
#include <fstream>
#include <string>
//文本文件 读文件

//把大象从冰箱里拿出来需要几步
//第一步打开冰箱门
//第二步 把大象拿出来
//第三步 把冰箱门关上

void test201()
{
	//1、包含头文件<fstream>
	//2、创建流对象
	ifstream ifs;
	//3、打开文件，并判断文件是否打开成功
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "打开失败" << endl;
		return;
	}
	//4、读数据，用4种方法读取数据
	//4.1 
	char buf[2048] = { 0 }; //定义一个长度为2048的字符数组，char型，数组名为buf//初始化所有数组元素为0，这种写法称为聚合初始化
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	//清空流状态，以便重新读取
	ifs.clear();
	ifs.seekg(0);
	cout << "--------------分割线4.1--------------" << endl;
	//4.2 
	char buf2[1024] = { 0 };//定义一个长度为1024的数组，char型，数组名为buf2，全部初始化为0
	while (ifs.getline(buf2, sizeof(buf2)))
	{
		cout << buf2 << endl;
	}
	//清空流状态，以便重新读取
	ifs.clear();
	ifs.seekg(0);
	cout << "--------------分割线4.2--------------" << endl;

	//4.3
	string buf3;
	while (getline(ifs, buf3))
	{
		cout << buf3 << endl;
	}
	//清空流状态，以便重新读取
	ifs.clear();
	ifs.seekg(0);
	cout << "--------------分割线4.3--------------" << endl;

	//4.4
	char c;
	while ((c = ifs.get()) != EOF)//ifs.get()返回的值先赋给c(隐式的转换为char),而后ifs.get()再和EOF比较
	{
		cout << c;
	}

	//5、关闭文件
	ifs.close();

}
int main2()
{
	test201();

	system("pause");
	return 0;
}