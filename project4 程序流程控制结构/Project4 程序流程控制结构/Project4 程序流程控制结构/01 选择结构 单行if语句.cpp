#include <iostream>
using namespace std;

int main1()
{
	// ѡ��ṹ ����if���
	// �û���������������������600�֣� ��Ϊ����һ����ѧ

	//1���û��������
	int score = 0;
	cout << "������һ��������" << endl;
	cin >> score;

	//2����ӡ�û�����ķ���
	cout << "������ķ���Ϊ��" << score << endl;

	//3���жϷ����Ƿ����600��������ڣ���ô���
	if (score > 600)
	{
		cout << "��ϲ�㿼����һ����ѧ" << endl;
	}
	system("pause");
	return 0;
}