#include <iostream>
using namespace std;

//运算符重载 - 递增运算符
class MyInteger 
{
public:

	//递增运算符重载, 前置++
	MyInteger& operator++() 
	{
		m_Num++;
		return *this;
	}
	//递增运算符重载，后置++
	MyInteger operator++(int) 
	{
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}
	//递减运算符重载，前置--
	MyInteger& operator--() 
	{
		m_Num--;
		return *this;
	}
	//递减运算符重载，后置--
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

//运算符重载 左移运算符
ostream& operator<<(ostream& cout,MyInteger& myInt) 
{
	cout << myInt.getNum();
	return cout;
}

//测试函数
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