#include <iostream>
using namespace std;

int main4()
{
	//��������λ�����ҵ�ˮ�ɻ���

	//1����������λ�����������100~999
	int num = 100;
	do 
	{
		int digit = 0;
		int decimal_d = 0;
		int hundred_d = 0;
		//2���ҵ�ˮ�ɻ���
		//2.1��ȡ��λ
		digit = num % 10;
		//2.2��ȡʮλ
		decimal_d = num /10 % 10;
		//2.3��ȡ��λ
		hundred_d = num / 100 % 10;
		//2.4�ж�
		bool flag = (digit * digit * digit + decimal_d * decimal_d * decimal_d + hundred_d * hundred_d * hundred_d == num ? 1 : 0);
		if (flag)
		{
			cout << num << endl;
		}
		num++;
	} while (num < 1000);
	
	

	
	system("pause");
	return 0;
}