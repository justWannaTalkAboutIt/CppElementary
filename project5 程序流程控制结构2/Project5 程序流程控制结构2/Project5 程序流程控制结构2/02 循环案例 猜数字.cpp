#include <iostream>
using namespace std;
#include <ctime>

int main2()
{
	// ������
	// �������һ��1 ��100֮�������
	// ��Ҳ²⣬��ʹ�²������С
	// �¶��ˣ���ϲ���ʤ��

	//�����������ӣ���ֹÿ�����ɵ��������һ��
	srand((unsigned int )time(NULL));
	
	//1��ϵͳ���������
	int num = 1 + rand() % 100;
	//rand()%100����1~99�������
	cout << num << endl;

	int val = 0;
	while (1)
	{
		//2����ҽ��в²�
		cout << "��������Ĳ²�" << endl;
		cin >> val;

		//3���ж���ҵĲ²�
		if (val > num)
		{
			cout << "�²����" << endl;
		}
		else if (val < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "��ϲ����" << endl;
			break;
		}
	}
	system("pause");
	return 0;
}