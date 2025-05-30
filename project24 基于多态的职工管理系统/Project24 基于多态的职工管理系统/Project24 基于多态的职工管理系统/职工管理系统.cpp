#include <iostream>
using namespace std;
#include "workerManager.h"// 若想使用自己写的类，需要包含自定义得到头文件
#include "Worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main() 
{
	//测试代码
	/*Worker* worker = NULL;
	worker = new Employee(1,"张三",1);
	worker->showInfo();
	
	delete worker;
	worker = new Manager(2,"李四",2);
	worker->showInfo();
	delete worker;

	worker = new Boss(3, "王五",3);
	worker->showInfo();*/


	//实例化一个管理者对象
	WorkerManager wm;
		
	int choice = 0; // 用来存储用户的选项
	while (true)
	{
		//调用 展示菜单成员函数
		wm.ShowMenu();
		cout << "请输入您的选择：" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0: // 退出系统
			wm.ExitSystem();
		case 1: //增加职工
			wm.Add_Emp();
			break;
		case 2: //显示职工
			wm.Show_Emp();
			break;
		case 3: //删除职工
			wm.Del_Emp();
			break;
		case 4: //修改职工
			wm.Mod_Emp();
			break;
		case 5: //查找职工
			wm.Find_Emp();
			break;
		case 6: //排序
			wm.Sort_Emp();
			break;
		case 7: //清空
			wm.Clean_File();
			break;
		case 8:
			break;
		default:
			cout << "请输入指定范围内的数字，此输入的数字无效" << endl;
			system("pause");
			system("cls"); //清屏操作
			break;
		}
	}
	system("pause");
	return 0;
}