#include <iostream>
using namespace std;

int main6()
{
	//������
	//�������1��100 ��Щ����

	//��1 ��100���ҵ��������֣���Ϊ����������ӡ�
	// 7�ı��� 7 14 21 28....
	// ��λ��7 7 17 27 ...
	// ʮλ��7 70 71 72 ...

	for (int i = 1; i<101;i++)
	{
		bool flag_a = (i % 7 == 0?1:0); // i��7�ı���
		bool flag_b = (i % 10 == 7 ? 1 : 0); // i�ĸ�λ����7
		bool flag_c = (i / 10 == 7 ? 1:0); // i ��ʮλ����7
		if (flag_a||flag_b||flag_c)
		{
			//cout << flag_a << flag_b << flag_c << endl;
			cout << "������" << endl;
		}
		else
		{
			//cout << flag_a << flag_b << flag_c << endl;
			cout << i << endl;
		}
		
	}
	system("pause");
	return 0;
}