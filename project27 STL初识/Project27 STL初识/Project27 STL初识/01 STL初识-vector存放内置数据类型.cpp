#include<iostream>
using namespace std;
#include<vector> 
#include<algorithm>

//vector�������������������
void myPrint1(int val)
{
	cout << val << endl;
}
void test101() 
{
	//����һ��vector����������
	vector<int>v;

	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);


	////ͨ�������������������е�����
	//vector<int>::iterator itBegin = v.begin();//��ʼ������ ָ�������еĵ�һ��Ԫ��
	//vector<int>::iterator itEnd = v.end(); // ���������� ָ�����������һ��Ԫ�صġ���һ����

	////��һ�ֱ���
	//while (itBegin!=itEnd)
	//{
	//	cout << *itBegin << endl; //�����Ҵ�ӡ
	//	itBegin++;//����Ųһλ
	//}

	////�ڶ��ֱ���
	//for (vector<int>::iterator it = v.begin();it != v.end();it++)
	//{
	//	cout << *it << endl;
	//}

	//������ ����
	for_each(v.begin(), v.end(), myPrint1);//ֻд��������Ϊ�ص�����
}

int main1() 
{
	test101();
	system("pause");
	return 0;
}
