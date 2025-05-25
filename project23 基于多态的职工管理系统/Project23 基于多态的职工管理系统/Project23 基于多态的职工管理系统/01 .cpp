#include <iostream>
using namespace std;
#include <string>

//基于多态的职工管理系统：职工管理系统可以用来管理公司内所有的职工信息

//公司中职工分为三类，普通员工，经理，老板。
//显示信息时，需要显示职工编号，职工姓名，职工部门，岗位职责
//普通员工职责：完成经理交给的任务；经理职责：完成老板交给的任务，并下发任务给员工；老板职责：管理公司所有事务

//管理系统需要实现的功能如下
//0 退出管理系统：退出当前管理系统
//1 增加职工信息：实现批量添加职工功能，将信息录入到文件中，职工信息为：职工编号，姓名，部门编号
//2 显示职工信息：显示公司内部所有职工的信息
//3 删除职工信息：按照编号删除指定的员工
//4 修改职工信息：按照编号修改员工个人信息
//5 查找职工信息：按照职工编号或者职工姓名查找相关人员信息
//6 按照编号排序：按照职工编号进行排序，用户可以选择升序或降序查看
//7 清空所有文档：清空文件中记录所有职工信息，（清空前需再次确认，防止误删）

//基类，但不抽象(因为有一个虚函数。但没有纯虚函数)
class Person 
{
public:
	virtual void work() {};
	int m_Id;
	string m_Name;
	int m_Department;
	string m_Resonsibility;
};
//子类：员工
class Staff:public Person 
{
public:
	void work() 
	{
		m_Resonsibility = "完成经理交给的任务";
	}
};
//子类：员工
class Manager:public Person 
{
public:
	void work() 
	{
		m_Resonsibility = "完成老板交给的任务，并下发任务给员工；";
	}
};
//子类：员工
class Boss:public Person
{
public:
	void work()
	{
		m_Resonsibility = "管理公司所有事务";
	}
};

void addStaff(Person* book,int& num) 
{
	cout << "-------1 开始新增职工" << endl;
	int id;
	cout << "请输入职工的编号" << endl;
	cin >> id;
	cout << "请输入职工的姓名" << endl;
	string name;
	cin >> name;
	cout << "请输入职工的部门" << endl;
	cout << "1 - 普通员工" << endl;
	cout << "2 - 经理" << endl;
	cout << "3 - 老板" << endl;
	int department;
	cin >> department;
	switch (department)
	{
	case 1:
	{
		Staff stff;
		stff.m_Id = id;
		stff.m_Name = name;
		stff.m_Department = department;
		stff.work();
		book[num] = stff;
		break;
	}
	case 2:
	{
		Manager stff;
		stff.m_Id = id;
		stff.m_Name = name;
		stff.m_Department = department;
		stff.work();
		book[num] = stff;
		break;
	}
	case 3:
	{
		Boss stff;
		stff.m_Id = id;
		stff.m_Name = name;
		stff.m_Department = department;
		stff.work();
		book[num] = stff;
		break;
	}
	}
	num += 1;
	cout << "添加完毕" << endl;
}

void addTest(Person* book, int& num)
{
	Staff s;
	s.m_Id = 1;
	s.m_Name = "zhangsan";
	s.m_Department = 1;
	s.work();
	book[num] = s;
	num += 1;
	Manager m;
	m.m_Id = 2;
	m.m_Name = "lisi";
	m.m_Department = 2;
	m.work();
	book[num] = m;
	num += 1;
	Staff s2;
	s2.m_Id = 3;
	s2.m_Name = "wangwu";
	s2.m_Department = 1;
	s2.work();
	book[num] = s2;
	num += 1;
}

void showStaff(const Person* book,const int num)
{
	cout << "-------2 展示职工信息" << endl;
	for (int i = 0;i < num;i++)
	{
		cout << "\t" << "编号:" << book[i].m_Id << "\t"<< "姓名：" << book[i].m_Name << "\t" << "部门：" << book[i].m_Department << "\t" << "职责：" << book[i].m_Resonsibility << endl;
	}
}

int isIn(const Person * book,const int num, const int Id)
{
	//查询某id是否存在于记录中，若存在返回位置编号，否则返回-1
	for (int i = 0;i < num;i++)
	{
		if (book[i].m_Id == Id)
		{
			return i;
		}
	}
	return -1;
}
int isIn(const Person* book, const int num, const string name)
{
	//查询某name是否存在于记录中，若存在返回位置编号，否则返回-1
	for (int i = 0;i < num;i++)
	{
		if (book[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deleteStaff(Person* book,int& num)
{
	cout << "-------3删除 请输入需要删除的员工编号" << endl;
	int deleteId;
	cin >> deleteId;
	int flag = isIn(book,num,deleteId);
	if (flag == -1)
	{
		cout << "该id在记录中不存在，删除失败" << endl;
		return;
	}
	cout << "id = "<< flag << "已查找到id，删除中" << endl;
	for (int i = flag;i < num-1; i++) //i<num-1是因为整个数组长度在删除1条记录后，长度比原来减少了1位
	{
		book[i] = book[i + 1];
	}
	num -= 1;
	cout << "删除完毕" << endl;
}

void modifyStaff(Person* book, const int& num)
{
	cout << "-------4修改 职工编号修改" << endl;
	cout << "请输入需要修改的职工编号：" << endl;
	int flag;
	int id;
	cin >> id;
	flag = isIn(book, num, id);
	if (flag == -1)
	{
		cout << "该记录不存在" << endl;
		return;
	}
	cout << "该记录存在，编号为" << flag << endl;
	cout << "请输入修改的id" << endl;
	cin >> book[flag].m_Id;
	cout << "请输入修改的姓名" << endl;
	cin >> book[flag].m_Name;
	cout << "请输入修改的部门" << endl;
	cin >> book[flag].m_Department;
	book[flag].work();
	cout << "修改完成" << endl;
}


void inquiryStaff(Person* book, const int& num)
{
	cout << "-------5查询 请选择按职工姓名查询 或 按职工编号查询" << endl;
	cout << "\t " << "-1 按职工姓名查询" << endl;
	cout << "\t " << "-2 按职工编号查询" << endl;
	int choose;
	int flag;
	cin >> choose;
	switch (choose)
	{
	case 1:
	{
		string name;
		cin >> name;
		flag = isIn(book, num, name);
		if (flag == -1)
		{
			cout << "该记录不存在" << endl;
			return;
		}
		cout << "该记录存在，编号为" << flag << endl;
		cout << "\t" << "编号:" << book[flag].m_Id << "\t" << "姓名：" << book[flag].m_Name << "\t" << "部门：" << book[flag].m_Department << "\t" << "职责：" << book[flag].m_Resonsibility << endl;
		break;
	}
	case 2:
	{
		int id;
		cin >> id;
		flag = isIn(book, num, id);
		if (flag == -1)
		{
			cout << "该记录不存在" << endl;
			return;
		}
		cout << "该记录存在，编号为" << flag << endl;
		cout << "\t" << "编号:" << book[flag].m_Id << "\t" << "姓名：" << book[flag].m_Name << "\t" << "部门：" << book[flag].m_Department << "\t" << "职责：" << book[flag].m_Resonsibility << endl;
		break;
	}
	default:
		cout << "输入数字无效" << endl;
		break;
	}
}
void sortStuff( Person* book,const int& num)
{
	//升序随便排一下
	cout << "-------6 排序" << endl;

	for (int i = 0;i < num - 1;i++)
	{
		for (int j = 0;j < num - 1 - i;j++)
		{
			if (book[j].m_Id > book[j+1].m_Id)
			{
				Person p = book[j];
				book[j] = book[j + 1];
				book[j + 1] = p;
			}
		}
	}
	showStaff(book,num);
}

void emptyStaff(Person* book,int& num)
{
	cout << "-------7 清空" << endl;
	num = 0;
	cout << "清空成功" << endl;
	return;
}
int main() 
{
	//初始化一个数组，用来存储员工信息
	Person book[1024];
	//初始化一个变量，用来存储数量
	int num = 0;
	//用户输入的选项
	int choose;
	//循环体
	while (1)
	{
		//先构建开始菜单
		cout << "***************************************************" << endl;
		cout << "******************    开始菜单   ******************" << endl;
		cout << "***************** 0 退出开始菜单 ******************" << endl;
		cout << "***************** 1 增加职工信息 ******************" << endl;
		cout << "***************** 2 显示职工信息 ******************" << endl;
		cout << "***************** 3 删除职工信息 ******************" << endl;
		cout << "***************** 4 修改职工信息 ******************" << endl;
		cout << "***************** 5 查找职工信息 ******************" << endl;
		cout << "***************** 6 按照编号排序 ******************" << endl;
		cout << "***************** 7 清空所有文档 ******************" << endl;
		cout << "***************************************************" << endl;

		cout << "请输入对应数字以选择功能：" << endl;
		cin >> choose;
		if (choose == 0)
		{
			cout << "欢迎下次使用，再见。" << endl;
			break;
		}
		switch (choose)
		{
		case 1:
			addStaff(book,num);
			break;
		case 2:
			showStaff(book,num);
			break;
		case 3:
			deleteStaff(book,num);
			break;
		case 4:
			modifyStaff(book,num);
			break;
		case 5:
			inquiryStaff(book,num);
			break;
		case 6:
			sortStuff(book,num);
			break;
		case 7:
			cout << "7清空" << endl;
			break;
		case 8:
			addTest(book,num);
			break;
		default:
			cout << "请输入指定范围内的数字，此输入的数字无效" << endl;
			break;
		}

	}
	system("pause");
	return 0;
}
//基本上的功能就完成了
//在此过程中出现两个问题：
//1 文件读写如何实现？且每个操作之后都需要更新一下文件，是全部重写还是仅更新某条目？如果仅更新某条目是如何实现的？
//2 代码中存在大量分支， 每个分支的代码高度重复，如何优化？
//3 多态，但也没有很多态，在进行操作4后，修改部门，但职责并没有自动修改，如何优化？