#include <iostream>
using namespace std;

int main3()
{
	//һ�������¼����ֻС������� 300��350��200��400��250
	//�ҳ�����ӡ���ص�С�������
	
	//1����ʼ�����飬�洢����
	int arr[5] = { 300,350,200,400,250 };
	//2����һ���ʣ����һ��Ԫ�ر����϶���Ҫ�󣬸������ֵ
	int max = 0;
	for (int i=0;i<5;i++) 
	{
		cout << arr[i] << endl;
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	//3����ӡ
	cout << "���ص�С���ǣ�" << endl;
	cout << max << endl;
	system("pause");
	return 0;
}