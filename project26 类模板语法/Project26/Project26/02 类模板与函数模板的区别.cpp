#include <iostream>
using namespace std;

//��ģ���뺯��ģ�������
template <class NameType, class AgeType=int>
class Person2 
{
public :
	Person2(NameType name,AgeType age)
	{
		this->name = name;
		this->age = age;
	}
	void showPerson2() 
	{
		cout << "name: " << this->name << " age: " << this->age << endl;
	}
	NameType name;
	AgeType age;
};

//1 ��ģ�岢û���Զ������Ƶ�
void test201() 
{
	//Person2 p("�����",1000); //��ģ����û���Զ������Ƶ�
	Person2<string, int> p("�����",1000);
	p.showPerson2();
}
//2 ��ģ����ģ������б��п�����Ĭ�ϲ���
void test202() 
{
	Person2<string>p("��˽�",999);//ʡ���˵ڶ������Ͳ������ڶ���ʱ��ָ����Ĭ������
	p.showPerson2();
}

int main2() 
{
	test202();
	system("pause");
	return 0;
}