#include <iostream>
using namespace std;

int main4()
{
	//1 �ַ��ͱ����Ĵ���
	char ch = 'a';
	cout << ch << endl;
	//2 �ַ��ͱ������ڴ�ռ��
	cout << "char �ַ��ͱ�����ռ�ڴ��С" << sizeof(char) << endl;
	//3 �ַ��ͱ�����������
	//char ch2 = "b"; //�����ַ��ͱ���Ҫʹ�õ�����
	//char ch2 = 'abc';// �����ַ��ͱ���ʱ��������ֻ����һ���ַ�

	//4 �ַ��б�����ASCII��
	cout << (int)ch << endl;

	system("pause");
	return 0;
}