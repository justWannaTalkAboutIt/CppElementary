#include <iostream>
using namespace std;
#include <fstream> //ͷ�ļ�����
//�ı��ļ� д�ļ�

//�Ѵ���Ž���������Ҫ������
//��һ���ѱ����Ŵ�
//�Ѵ���Ž�ȥ
//�ѱ����Ź���

int main1() 
{
	//1 ���������� 
	ofstream ofs;
	//2 �򿪱�����
	ofs.open("test.txt",ios::out);

	//3 �Ѵ���Ž�ȥ
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺18" << endl;

	//4 �ѱ����Ź���
	ofs.close();

	system("pause");
	return 0;
}