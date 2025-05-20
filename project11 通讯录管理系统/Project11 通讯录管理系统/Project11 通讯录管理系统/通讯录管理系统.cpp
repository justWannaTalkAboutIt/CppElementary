#include <iostream>
using namespace std;
#include <string>

//通讯录管理系统
//添加联系人：信息包括（姓名，性别，年龄，联系电话，家庭住址），最多记录1000人
//显示联系人：显示通讯录中所有联系人信息
//删除联系人：按照姓名进行删除指定联系人
//查找联系人：按照姓名查看指定联系人信息
//修改联系人：按照姓名重新修改指定联系人
//清空联系人：清空通讯录中所有信息
//退出通讯录：退出

struct contact
{
	string name;
	int sex;
	int age;
	string telephone;
	string address;
};

#define MAX 1000
struct contactBook
{
	contact arr[MAX];
	int num;
};

void showMenu()
{
	cout << "**************************" << endl;
	cout << "********* 1 添加 *********" << endl;
	cout << "********* 2 显示 *********" << endl;
	cout << "********* 3 删除 *********" << endl;
	cout << "********* 4 查找 *********" << endl;
	cout << "********* 5 修改 *********" << endl;
	cout << "********* 6 清空 *********" << endl;
	cout << "********* 0 退出 *********" << endl;
	cout << "**************************" << endl;
	cout << "请输入数字选择功能：" << endl;
}

void addContact(contactBook* p)
{
	//判断通讯录是否已满，若已满则不再添加
	if (p->num == MAX)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	string name, telephone, address;
	int age, sex;
	cout << "请输入联系人名称：" << endl;
	cin >> name;
	cout << "请输入联系人性别：" << endl;
	while (1)
	{
		cout << " 1-男" << endl;
		cout << " 2-女" << endl;
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			break;
		}
		else
		{
			cout << "输入有误，请重新输入" << endl;
		}
	}
	cout << "请输入联系人年龄：" << endl;
	cin >> age;
	cout << "请输入联系人电话：" << endl;
	cin >> telephone;
	cout << "请输入联系人地址：" << endl;
	cin >> address;
	p->arr[p->num].name = name;
	p->arr[p->num].sex = sex;
	p->arr[p->num].age = age;
	p->arr[p->num].telephone = telephone;
	p->arr[p->num].address = address;

	p->num += 1;
	cout << "添加完毕，目前通讯录共有" << p->num << "位联系人" << endl;
	system("pause");
	system("cls");// 清屏操作
}

void showContact(contactBook* p)
{
	if (p->num == 0)
	{
		cout << "通讯录为空" << endl;
		return;
	}
	for (int i = 0;i < p->num;i++)
	{
		cout << "\t" << "姓名：" << p->arr[i].name
			<< "\t" << "性别：" << (p->arr[i].sex == 1 ? "男" : "女")
			<< "\t" << "年龄：" << p->arr[i].age
			<< "\t" << "电话：" << p->arr[i].telephone
			<< "\t" << "地址：" << p->arr[i].address << endl;
	}
}
int isExist(contactBook* p, string name)
{
	//封装函数，检测联系人是否存在，若存在，返回联系人所在数组中具体位置，不存在返回-1
	for (int i = 0;i < p->num;i++)
	{
		if (p->arr[i].name == name)
		{
			return i;// 找到了，返回这个人在数组中下标
		}
	}
	return -1;
}
void delContact(contactBook* p)
{
	if (p->num == 0)
	{
		cout << "当前通讯录联系人数量为0条,无法删除联系人" << endl;
		return;
	}
	string name;
	cout << "请输入要删除联系人的名字：" << endl;
	cin >> name;
	//查找并删除
	int ret = isExist(p, name);
	if (ret == -1)
	{
		cout << "未查找到要删除的联系人，当前联系人有" << p->num << "条" << endl;
	}
	else
	{
		//删除i，将i+1前移到i即可
		for (int i = ret; i < p->num-1;i++)
		{
			p->arr[i] = p->arr[i + 1];
		}
		p->num--;
	}
	cout << "删除成功" << endl;
	system("pause");
	system("cls");
}
void searchContact(contactBook* p)
{
	string name;
	cout << "请输入要查找联系人的姓名：" << endl;
	cin >> name;

	//判断指定的联系人是否存在通讯录中
	int ret = isExist(p, name);
	if (ret != -1)
	{
		cout << "已查询到联系人，位于第 " << ret << " 条联系人" << endl;

		cout << "\t" << "姓名：" << p->arr[ret].name
			<< "\t" << "性别：" << (p->arr[ret].sex == 1 ? "男" : "女")
			<< "\t" << "年龄：" << p->arr[ret].age
			<< "\t" << "电话：" << p->arr[ret].telephone
			<< "\t" << "地址：" << p->arr[ret].address << endl;
		return;
	}
	else
	{
		cout << "未查询到此联系人" << endl;
	}
	system("pause");
	system("cls");
}
void modifyContact(contactBook* p)
{
	string name;
	cout << "请输入要修改的联系人姓名：" << endl;
	cin >> name;

	int ret = isExist(p,name);
	if (ret != -1)
	{
		cout << "已查询到联系人，位于第 " << ret << " 条联系人" << endl;
		string m_name, telephone, address;
		int age, sex;
		cout << "请修改：" << endl;
		cout << "请输入联系人名称：" << endl;
		cin >> m_name;

		while (1)
		{
			cout << " 1-男" << endl;
			cout << " 2-女" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				break;
			}
			else
			{
				cout << "输入有误，请重新输入" << endl;
			}
		}
		cout << "请输入联系人年龄：" << endl;
		cin >> age;
		cout << "请输入联系人电话：" << endl;
		cin >> telephone;
		cout << "请输入联系人地址：" << endl;
		cin >> address;

		p->arr[ret].name = m_name;
		p->arr[ret].sex = sex;
		p->arr[ret].age = age;
		p->arr[ret].telephone = telephone;
		p->arr[ret].address = address;

		cout << "\t" << "姓名：" << p->arr[ret].name
			<< "\t" << "性别：" << (p->arr[ret].sex == 1 ? "男" : "女")
			<< "\t" << "年龄：" << p->arr[ret].age
			<< "\t" << "电话：" << p->arr[ret].telephone
			<< "\t" << "地址：" << p->arr[ret].address << endl;
		cout << "修改完毕" << endl;
		return;
	}
	else 
	{
		cout << "未查询到此联系人,无法修改" << endl;
	}
}
void emptyContact(contactBook* p)
{
	cout << "清空通讯录" << endl;
	p->num = 0;
	system("pause");
}

int main()
{
	contactBook cBook;
	cBook.num = 0;//num代表通讯录中联系人的数量
	int len = sizeof(cBook.arr) / sizeof(cBook.arr[0]); //len代表通讯录中存储容量

	while (1)
	{
		//展示菜单
		showMenu();
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "1 添加" << endl;
			addContact(&cBook);
			break;

		case 2:
			cout << "2 显示" << endl;
			cout << endl;
			showContact(&cBook);
			cout << endl;
			break;
		case 3:
			cout << "3 删除" << endl;
			delContact(&cBook);
			break;
		case 4:
			cout << "4 查找" << endl;
			searchContact(&cBook);
			break;
		case 5:
			cout << "5 修改" << endl;
			modifyContact(&cBook);
			break;
		case 6:
			cout << "6 清空" << endl;
			emptyContact(&cBook);
			break;
		case 0:
			cout << "0 退出" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}