#include <iostream>
using namespace std;

//���캯���ķ��༰����
//����
//		���ղ������ࣺ�޲ι��죨Ĭ�ϣ�  �� �вι���
//		�������ͷ��ࣺ��ͨ����			�� ��������
class Person2 
{
public:
	Person2() 
	{
		cout << "Person2�Ĺ��캯������" << endl;
	}
	Person2(int a) 
	{
		age = a;
		cout << "Person2���вι������" << endl;
	}
	//�������죬����ĳ���󿽱�һ��
	Person2(const Person2& p)
	{
		//������������ϵ��������ԣ�������������
		age = p.age;
		cout << "Person2 �Ŀ����������" << endl;
	}
	~Person2() 
	{
		cout << "Person2��������������" << endl;
	}
	int age;
};

void test02() 
{
	//1�����ŷ�
	//Person2 p1; //Ĭ�Ϲ��캯������
	//Person2 p2(10); // �вκ�������
	//Person2 p3(p2); // �������캯��

	//cout << "p2 ������Ϊ��" << p2.age << endl;
	//cout << "p3 ������Ϊ��" << p3.age << endl;
	//cout << "ע������1��" << endl;
	//cout << "����Ĭ�Ϲ��캯��ʱ����Ҫ��()С����" << endl;
	//cout << "Person2 p1() ����������Ϊ��һ����������" << endl;

	//2����ʾ��
	Person2 p1;
	Person2 p2 = Person2(10);//�вι���
	Person2 p3 = Person2(p2);//��������

	//Person2(10); // �������󣬵�ǰִ�н�����ϵͳ������������������
	//cout << "aaaaa" << endl;
	
	//cout << "ע������2��" << endl;
	cout << "��Ҫ���ÿ������캯�� ��ʼ�� ��������" << endl;
	//cout << "����������Ϊ Person2 (p3) == Person2 p3��һ�����������������漰�ض���" << endl;

	//3����ʽת����
	Person2 p4 = 10; //�൱�� д�� Person2 p4 = Person2(10); //�вι���
	Person2 p5 = p4; //��������
}

int main22()
{
	test02();
	system("pause");
	return 0;
}