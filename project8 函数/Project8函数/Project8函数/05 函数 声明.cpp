#include <iostream>
using namespace std;

//����������
//�ȽϺ���max��ʵ�������������ֱȽϣ����ؽϴ����
int max(int a, int b);

int main5()
{
	int a = 10;
	int b = 20;

	cout << max(a, b) << endl;
	printf("\n");
	cout << "�������������ϵ�������ִ��" << endl;
	cout << "�����main�������ȣ��Զ��庯���ں�����ִ�еı�������main����ʱ�Ҳ����Զ��庯��,�ᱨ��" << endl;
	cout << "�뽫�Զ��庯��д��main�������棬�ұ��ⱨ��������������������main�������庯��" << endl;
	printf("\n");
	cout << "��������д��Σ�����ֻ��дһ��" << endl;

	system("pause");
	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;
}