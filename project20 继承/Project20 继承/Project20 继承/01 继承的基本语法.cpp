#include <iostream>
using namespace std;

//��ͨʵ�ֽ���
////Javaҳ��
//class Java 
//{
//public:
//	void header() 
//	{
//		cout << "��ҳ�������Σ���¼��ע�ᡣ����������ͷ����" << endl;
//	}
//	void footer() 
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ�������������ײ���" << endl;
//	}
//	void left() 
//	{
//		cout << "Java,Pythom,C++�����������������б�" << endl;
//	}
//	void content() 
//	{
//		cout << "Javaѧ�Ƶ���Ƶ" << endl;
//	}
//};
////Python����
//class Python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע�ᡣ����������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ�������������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Pythom,C++�����������������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Pythonѧ�Ƶ���Ƶ" << endl;
//	}
//};
//
////cpp����
//class Cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Σ���¼��ע�ᡣ����������ͷ����" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ģ�����������վ�ڵ�ͼ�������������ײ���" << endl;
//	}
//	void left()
//	{
//		cout << "Java,Pythom,C++�����������������б�" << endl;
//	}
//	void content()
//	{
//		cout << "Cppѧ�Ƶ���Ƶ" << endl;
//	}
//};

//�̳�ʵ�ֽ���
class BasePage
{
public:
	void header()
	{
		cout << "��ҳ�������Σ���¼��ע�ᡣ����������ͷ����" << endl;
	}
	void footer()
	{
		cout << "�������ģ�����������վ�ڵ�ͼ�������������ײ���" << endl;
	}
	void left()
	{
		cout << "Java,Pythom,C++�����������������б�" << endl;
	}
};
//Java����
class Java : public BasePage 
{
public:
	void content() 
	{
		cout << "Javaѧ����Ƶ" << endl;
	}
};
//Python����
class Python : public BasePage 
{
public:
	void content() 
	{
		cout << "pythonѧ����Ƶ" << endl;
	}
};
//cpp����
class Cpp: public BasePage 
{
public:
	void content() 
	{
		cout << "Cppѧ����Ƶ" << endl;
	}
};


void test101() 
{
	cout << "Java ������Ƶ�������£�" << endl;
	Java ja;
	ja.header();
	ja.footer();
	ja.left();
	ja.content();
	cout << "---------fengexian------------" << endl;

	cout << "python ������Ƶ�������£�" << endl;
	Python py;
	py.header();
	py.footer();
	py.left();
	py.content();
	cout << "---------fengexian------------" << endl;
	
	cout << "cpp ������Ƶ�������£�" << endl;
	Cpp cpp;
	cpp.header();
	cpp.footer();
	cpp.left();
	cpp.content();
	cout << "---------fengexian------------" << endl;
}
//�̳еĺô��������ظ�����
//�﷨�� class ����: �̳з�ʽ ����

int main1() 
{
	test101();

	system("pause");
	return 0;
}