#include <iostream>
using namespace std;

int main()
{
	//��ά���鰸��Ӧ��
	//		����	��ѧ	Ӣ��
	//����	100		100		100
	//����	90		50		100
	//����	60		70		80
	//�ֱ��������ͬѧ���ܳɼ�

	int arr[3][3] =
	{
		{100,100,100},
		{90,50,100},
		{60,70,80}
	};

	
	for (int i = 0;i<3;i++)
	{
		int score = 0;
		for (int j= 0;j<3;j++) 
		{
			score += arr[i][j];
			cout << arr[i][j] << "\t" ;
		}
		cout << score << " ";
		cout << endl;
	}


	system("pause");
	return 0;
}