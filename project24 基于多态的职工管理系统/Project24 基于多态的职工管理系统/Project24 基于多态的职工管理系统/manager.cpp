#include "manager.h"

//构造函数
Manager::Manager(int id, string name, int dId) 
{
	this->m_Id = id;
	this->m_Name = name;
	this->m_DeptId = dId;
}//注意这里作用域写的是类名

//显示个人所有信息
void Manager::showInfo() 
{
	cout << "职工编号：" << this->m_Id
		<< "\t职工姓名：" << this->m_Name
		<< "\t岗位：" << this->getDeptName()
		<< "\t岗位职责：完成老板交给的任务，并且下发任务给普通员工" << endl;
}

//获取岗位名称
string Manager::getDeptName() 
{
	return string("经理");
}
