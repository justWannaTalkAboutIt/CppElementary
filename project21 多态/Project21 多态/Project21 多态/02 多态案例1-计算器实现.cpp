#include <iostream>
using namespace std;
#include <string>
//�ֱ����� ��ͨд�� �� ��̬ ʵ�ּ�����

//��ͨд��
class Calculator 
{
public:
	int getResult(string oper)
	{
		if (oper == "+")
		{
			return m_Num1 + m_Num2;
		}
		else if (oper == "-")
		{
			return m_Num1 - m_Num2;
		}
		else if (oper == "*")
		{
			return m_Num1 * m_Num2;
		}// �����Ҫ��չ�µĹ��ܣ������޸�Դ�룬
		else if (oper == "/")
		{
			return m_Num1 / m_Num2;
		}//�����޸�һ��Դ��
		//�˷��޸�һ��Դ��
		//... ...
		// �����Ľṹʵ�ڲ��������ǿ�����ά��
		//ʵ���ڿ����У���ѭ����ԭ�򣬼�������չ���п��ţ����޸Ľ��йر�
	}

	int m_Num1;
	int m_Num2;
};
//���ö�̬ʵ�ּ�����
//ʵ�ּ�����������
class AbstractCalc
{
public:
	virtual int getResult() 
	{
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

//�ӷ���������
class AddCalc :public AbstractCalc 
{
public:
	int getResult() 
	{
		return m_Num1 + m_Num2;
	}
};
//������������
class SubtractCalc :public AbstractCalc
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};
//�˷���������
class MulCalc :public AbstractCalc
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

//���԰���
void test201() 
{
	//��������������
	Calculator c;
	c.m_Num1 = 10;
	c.m_Num2 = 10;

	cout << c.m_Num1 << "+" << c.m_Num2 << "=" << c.getResult("+") << endl;
	cout << c.m_Num1 << "-" << c.m_Num2 << "=" << c.getResult("-") << endl;
	cout << c.m_Num1 << "*" << c.m_Num2 << "=" << c.getResult("*") << endl;
	cout << c.m_Num1 << "/" << c.m_Num2 << "=" << c.getResult("/") << endl;
}

void test202() 
{
	//��̬ʹ������������ָ�� ָ���������
	AbstractCalc* abc = new AddCalc();
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//�����ǵ�����
	delete abc;

	//����
	abc = new SubtractCalc();
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//�����ǵ�����
	delete abc;

	//�˷�
	abc = new MulCalc();
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
	//�����ǵ�����
	delete abc;
	
}
int main2() 
{
	test201();
	test202();

	system("pause");
	return 0;
}