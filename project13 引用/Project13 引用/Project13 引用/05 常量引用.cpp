#include <iostream>
using namespace std;

//��ӡ���ݵĺ���
void showValue(const int &val) 
{
	//val = 2000;
	cout << "val = " << val << endl;
}

int main()
{
	//��������
	//ʹ�ó��������������βΣ���ֹ�����
	//int a = 10;
	//const int& ref = 10;//��const֮�󣬱������������޸� int temp=10;const int & ref = temp;
	//���ñ�������һ��Ϸ����ڴ�ռ�
	//ref = 20; //����const֮���Ϊֻ�����������޸�

	cout << "�����β�����ֹ�����" << endl;
	int a = 100;
	showValue(a);
	cout << "main a = " << a << endl;
	system("pause");
	return 0;
}