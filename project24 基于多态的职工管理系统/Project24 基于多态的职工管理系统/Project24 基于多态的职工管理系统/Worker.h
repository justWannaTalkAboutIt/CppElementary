#pragma once
#include <iostream>
using namespace std;
#include <string>

//ְ��������
class Worker 
{
public:

	//��ʾ����������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λ����
	virtual string getDeptName() = 0;

	//ְ�����
	int m_Id;
	//ְ������
	string m_Name;
	//���ű��
	int m_DeptId;
};
//Worker�಻��Ҫд.cpp�ļ���
//��Ϊ����������ĺ���û����Ҫʵ�ֵ�
//��Ҫʵ�����������࣬����������Ҫ��д.cpp�ļ�
//�����.cpp�ļ���Ҫ����.hͷ�ļ�����Ϊ��Ҫ����
