#include <iostream>
using namespace std;
#include <string>

//�������ʹ�������
class Animal 
{
public:
	Animal() 
	{
		cout << "Animal���캯������" << endl;
	}
	//���麯�������麯��+2Ԫ�Ĵ��麯�����Ƚϳ��󣬲���ֱ��ʵ��������
	virtual void speak() = 0;
	//Animal����������
	/*virtual ~Animal() 
	{
		cout << "Animal������������ - by������" << endl;
	}*/
	//��������:�ǵ�����ʵ�֣���Ϊ����������һ��Ҫ�������飬�������������������Ǵ���������һ��Ҫ��ʵ�֡�
	virtual ~Animal() = 0;//�����������չ��������ʵ��
};
Animal:: ~Animal() 
{
	cout << "Animal������������- by��������" << endl;
}

class Cat :public Animal 
{
public:
	Cat(string name)
	{
		cout << "Cat���캯������" << endl;
		m_Name = new string(name); //���ô�������name�������ڶ���new���ٿռ�
		//���˿��پ������ͷţ����ǿ��ǵ���������
	}
	void speak() 
	{
		cout << *m_Name << "*^-^*Сè��˵��" << endl;
	}
	~Cat() 
	{ //����new���پ������ͷţ����ǿ��ǵ���������
		if (m_Name!=NULL) //����Ҫ�ж�ָ���Ƿ�Ϊ��
		{
			cout << "Cat��������������" << endl;
			delete m_Name;//��Ϊ������Ҫɾ��ָ�룬�ͷſռ�
			m_Name = NULL;//Ȼ��ָ���ÿ�
		}
	}
	string* m_Name; //����һ���ַ���ָ�� ��ά�� ���������Ա����
};
//���Ժ���
void test501() 
{
	Animal* animal = new Cat("Tom");
	animal->speak();
	//����ָ��������ʱ����������������������������������ж������Ի�����ڴ�й¶
	delete animal;//Ϊ��������⣬����������������ʹ��������ʱ����������������
}
int main5() 
{
	test501();

	system("pause");
	return 0;
}