#include <iostream>
using namespace std;
#include <fstream> //头文件包含
//文本文件 写文件

//把大象放进冰箱里需要几步？
//第一步把冰箱门打开
//把大象放进去
//把冰箱门关上

int main1() 
{
	//1 创建流对象 
	ofstream ofs;
	//2 打开冰箱门
	ofs.open("test.txt",ios::out);

	//3 把大象放进去
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	//4 把冰箱门关上
	ofs.close();

	system("pause");
	return 0;
}