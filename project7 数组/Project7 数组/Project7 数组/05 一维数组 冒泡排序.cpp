#include <iostream>
using namespace std;

int main5()
{
	//ð������
	int arr[9] = {4,2,8,0,5,7,1,3,9};
	//��ӡ
	cout << "ð������ǰ˳��" << endl;
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	//ð��
	for (int i = 0; i<sizeof(arr)/sizeof(arr[0])-1;i++)
	{
		for (int j=0;j<sizeof(arr)/sizeof(arr[0])-1-i;j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//��ӡ
	cout << "ð�������˳��" << endl;
	for (int i = 0;i < sizeof(arr) / sizeof(arr[0]);i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}