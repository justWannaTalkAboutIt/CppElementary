#include <iostream>
using namespace std;


//Ŀǰռλ�������ò���������γ̻��õ�
//ռλ������Ĭ�ϲ���
void func(int a,int) 
{
	cout << "this is func" << endl;
}

void func1(int a,int = 10) 
{
	cout << "this is func1" << endl;
}

int main2() 
{

	func(10,10);
	func1(10);

	system("pause");
	return 0;
}