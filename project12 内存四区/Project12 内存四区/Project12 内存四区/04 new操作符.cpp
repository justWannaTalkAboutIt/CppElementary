#include <iostream>
using namespace std;

//1��new�Ļ����﷨
int* func() 
{
	//�ڶ���������������
	//new���� ���������͵�ָ��
	int* p = new int(10);
	return p;
}
//2���ڶ�������new��������
void test01() 
{
	int* p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	//���������ɳ���Ա�����٣�����Ա�����ͷ�
	delete p;
	//cout << *p << endl; // �ڴ��Ѿ����ͷţ��ٴη��ʾ��ǷǷ��������ᱨ��
}

void test02() 
{
	//����10�������ݵ����飬�ڶ���
	int* arr = new int[10];
	for (int i=0;i<10;i++) 
	{
		arr[i] = i + 100; //��10��Ԫ�ظ�ֵ��100~109
	}
	for (int i = 0;i < 10;i++)
	{
		cout << arr[i] << endl;
	}
	//�ͷŶ�������
	delete[] arr;
}
int main() 
{
	//test01();

	test02();
	system("pause");
	return 0;
}