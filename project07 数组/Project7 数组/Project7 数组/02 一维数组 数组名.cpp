#include <iostream>
using namespace std;

int main2()
{
	//��������;
	//1������ͨ��������ͳ����������ռ���ڴ��С
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��������ռ���ڴ�ռ�Ϊ��" << sizeof(arr) << endl;
	cout << "ÿ��Ԫ��ռ���ڴ��СΪ��" << sizeof(arr[0]) << endl;
	cout << "������Ԫ�ظ���Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << endl;

	//2������ͨ���������鿴�����׵�ַ
	cout << "�����׵�ַΪ��" << (int)arr << endl;
	cout << "�����е�һ��Ԫ�ص�ַΪ��" << (int)&arr[0] << endl;
	cout << "�����еڶ���Ԫ�ص�ַΪ��" << (int)&arr[1] << endl;

	//ע������
	cout << "�������Ǹ����������ǿ��޸ĵ���ֵ" << endl;
	system("pause");
	return 0;
}