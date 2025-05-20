#include <iostream>
using namespace std;
#include <string>
//成员属性设置为私有
//可以自己控制读写权限
//对于写可以检测数据有效性

class Person
{
public:
	//设置姓名
	void setName(string name)
	{
		m_Name = name;
	}
	//获取姓名
	string getName()
	{
		return m_Name;
	}
	//获取年龄
	int getAge()
	{
		return m_Age;
	}
	//设置年龄
	void setAge(int age)
	{
		if (age<0 || age>150)
		{
			cout << "年龄输入有误，赋值失败" << endl;
			return;
		}
		m_Age = age;
	}
	//设置偶像
	void setIdol(string idol)
	{
		m_Idol = idol;
	}
private:
	string m_Name;	//姓名 可读可写
	int m_Age=18;	//年龄 只读 若也可以写，需控制在0~150之间
	string m_Idol;	//偶像 只写
};
int main5()
{
	Person p;
	p.setName("张三");
	cout << "姓名：" << p.getName() << endl;

	//年龄设置
	p.setAge(169); //若无p.setAge,显示类 "Person" 没有成员 "setAge"
	cout << "年龄：" << p.getAge() << endl;

	//偶像设置
	p.setIdol("小明");
	//cout << "偶像" << p.getIdol() << endl;// 只写状态，外界访问不到

	system("pause");
	return 0;
}
