#include <iostream>
using namespace std;

//����ģ��ע������
//1 �Զ������Ƶ��������Ƶ���һ�µ���������T
//2 ģ�����Ҫȷ����T ���������ͣ��ſ���ʹ��

template <typename T> //typename�����滻��class
void mySwap2(T& a, T& b) 
{
	T temp = a;
	a = b;
	b = temp;
}

//2 ģ�������ȷ��T���������ͣ��ſ���ʹ��
	//���������õ����T��ô��û��
	//��ô�ɲ����Ե���ʱ��ָ��T�أ����ܣ�����������T�������͵ı�������������ָ����ȫ���������޷�ȷ�����庯��
	//�������޷��Զ��Ƶ���ֻ��ʹ����ʾָ�����͵ķ�ʽ������ģ�庯��
template <typename T>
void func() 
{
	cout << "----func----" << endl;
}

void test201() 
{
	int a = 10;
	int b = 20;
	mySwap2(a,b);
	cout << "-------------������-------------" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	char c = 'c';
	//mySwap2(a, c);//û��������б�ƥ��� ����ģ�� "mySwap2" ʵ��
	// �������Ƶ�����T������int����char

	//������ʾָ�����ͣ������޷�ʹ��
	//func();//û��������б�ƥ��� ����ģ�� "func" ʵ��
	func<int>();
}

int main2() 
{
	test201();
	system("pause");
	return 0;
}