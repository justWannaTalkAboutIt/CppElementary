#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Worker.h"

//������
class Manager:public Worker 
{
public:
	//���캯��
	Manager(int id,string name, int dId);

	//��ʾ����������Ϣ
	void showInfo() ;

	//��ȡ��λ����
	string getDeptName();
};

