#include <iostream>
using namespace std;

int main()
{
	//switch���
	// ����Ӱ��֣�ʮ����
	// 10 ~9 ����
	// 8~7 �ǳ���
	// 6~5 һ��
	// 5���� ��Ƭ

	//1����ʾ�û�����Ӱ����
	cout << "�����Ӱ��֣�" << endl;
	//2���û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "����ķ���Ϊ��" << score << endl;
	//3�������û���ķ�������ʾ�û����Ľ��
	switch(score)
	{
	case 10:
		cout << "�����Ӱ" << endl;
		break;
	case 9:
		cout << "�����Ӱ" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
		cout << "�ǳ���" << endl;
		break;
	case 6:
		cout << "һ��" << endl;
		break;
	case 5:
		cout << "һ��" << endl;
		break;
	default :
		cout << "��Ƭ" << endl;
		break;
	}
	cout << "switch�ж�ʱֻ�������ͻ��ַ��ͣ���������һ������" << endl;

	system("pause");
	return 0;
}