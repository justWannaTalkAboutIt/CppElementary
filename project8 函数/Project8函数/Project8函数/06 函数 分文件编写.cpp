#include <iostream>
using namespace std;
#include "swap.h"

int main()
{
	cout << "�����ķ��ļ���д" << endl;
	cout << "1������.h��׺����ͷ�ļ�" << endl;
	cout << "2������.cpp��׺����Դ�ļ�" << endl;
	cout << "3����.h��д��������" << endl;
	cout << "4����.cpp��д�����Ķ��壬��#include ˫����.hͷ�ļ���˫���� " << endl;
	cout << endl;

	cout << "ʹ��ʱ��main������ #include ˫���Ŵ�.hͷ�ļ�˫����" << endl;
	cout << "ע����.hͷ�ļ���Ӧ��#include����������ʹ�õ�ͷ�ļ�" << endl;
	int a = 10;
	int b = 20;
	swap(a, b);

	system("pause");
	return 0;
}


