#include <iostream>
using namespace std;

//�������������
class MyPrint 
{
public:
	//���غ������������
	void operator ()(string test) 
	{
		cout << test << endl;
	}
};
void MyPrint02(string test)
{
	cout << test << endl;
}

void test601() 
{
	MyPrint myPrint;
	myPrint("hello world");
	//����ʹ�������ǳ����� �������ã���˳�Ϊ�º���
	MyPrint02("hello world");
}

//�º���ʮ����û�й̶���д��
class MyAdd 
{
public:
	int operator()(int num1,int num2)
	{
		return num1 + num2;
	}
};

void test602() 
{
	MyAdd myAdd;
	int ret = myAdd(100,100);
	cout << "ret = " << ret << endl;

	//��������
	cout << "�������� MyAdd: " << MyAdd()(100, 100) << endl;
}
int main() 
{
	test601();
	test602();

	system("pause");
	return 0;
}