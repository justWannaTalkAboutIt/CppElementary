#include <iostream>
using namespace std;

//��ͨ�����뺯��ģ������
//1 ��ͨ�����ڵ���ʱ���Է�����ʽ����ת��
//2 ����ģ�� �Զ������Ƶ� �����Է�����ʽ����ת��
//3 ����ģ�� ��ʽָ������ ���Է�����ʽ����ת��

int myAdd(int a,int b)
{
	return a + b;
} 
template <class T>
T myAdd402(T a, T b)
{
	return a + b;
}

void test401() 
{
	int a = 10;
	int b = 20;

	cout << "a+b = " << myAdd(a, b) << endl;
	
	char c = 'c';
	cout << "a+c = " << myAdd(a, c) << endl; //�˴���������ʽ����ת��
	//��charת���ɶ�Ӧ��ASCII�����ͣ�c-->99
	//����������ʽ�Ľ�cת����99����a=10���м��㣬�õ�109

	//�Զ������Ƶ�
	cout << myAdd402(a, b) << endl;
	//cout << myAdd402(a, c) << endl;//û��������б�ƥ��� ����ģ�� "myAdd402" ʵ��
	//����ģ�� �Զ������Ƶ�ʱ ���ᷢ����ʽ����ת��

	//��ʾָ������
	cout << myAdd402<int>(a,c) << endl;
	//��ʾָ������ʱ���Է�����ʽ����ת��
	
}


int main4() 
{
	test401();
	system("pause");
	return 0;
}