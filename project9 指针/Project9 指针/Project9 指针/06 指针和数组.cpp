#include <iostream>
using namespace std;

int main6()
{
	//ָ�������
	//����ָ������������Ԫ��
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << "��һ��Ԫ��Ϊ��" << arr[0]<<endl;

	int* p = arr;
	cout << *p << endl;

	p++;
	cout << *p << endl;

	//����ָ���������
	cout << "����ָ���������" << endl;
	for (int* p = arr;p<=&arr[9];p++)
	{
		cout << *p << endl;
	}

	system("pause");
	return 0;
}