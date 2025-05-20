#include <iostream>
using namespace std;

//��������� - ���������
class MyInteger 
{
public:

	//�������������, ǰ��++
	MyInteger& operator++() 
	{
		m_Num++;
		return *this;
	}
	//������������أ�����++
	MyInteger operator++(int) 
	{
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}
	//�ݼ���������أ�ǰ��--
	MyInteger& operator--() 
	{
		m_Num--;
		return *this;
	}
	//�ݼ���������أ�����--
	MyInteger operator--(int)
	{
		MyInteger temp = *this;
		m_Num--;
		return temp;
	}
	//getter
	int getNum() 
	{
		return m_Num;
	}
	MyInteger() 
	{
		m_Num = 0;
	}
private:
	int m_Num;
};

//��������� ���������
ostream& operator<<(ostream& cout,MyInteger& myInt) 
{
	cout << myInt.getNum();
	return cout;
}

//���Ժ���
void test301()
{
	MyInteger myint = MyInteger();
	cout << "myint = " << myint << endl;
	++myint; 
	cout << "++myint = " << myint << endl;
	++(++myint);
	cout << "++(++myint) = " << myint << endl;
	
	myint = MyInteger();
	cout << "myint = " << myint << endl;
	myint++;
	cout << "myint++ = " << myint << endl;
	(myint++)++;
	cout << "(myint++)++ = " << myint << endl;

	myint = MyInteger();
	--(--myint);
	cout << "myint = " << myint << endl;
	(myint--)--;
	cout << "myint-- = " << myint << endl;

}

int main3() 
{
	test301();
	system("pause");
	return 0;
}