#pragma once 
#include <iostream>
using namespace std;
#include "Worker.h" //��ֹ����������ʶ������࣬���԰���һ����ͷ�ļ�

class Employee : public Worker 
{
public :
	//���캯�� ����
	Employee(int id,string name,int dId);
	//��ʾ������Ϣ ��������
	void showInfo();
	//��ȡ��λ���� ��������
	string getDeptName();
};
