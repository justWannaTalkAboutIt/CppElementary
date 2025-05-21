#include <iostream>
using namespace std;
#include <string>

//��̬����2 ������Ʒ

class AbstractDrinking 
{
public:
	//��ˮ
	virtual void Boil() = 0;
	//����
	virtual void Brew() = 0;
	//���뱭��
	virtual void PourInCup() = 0;
	//���븨��
	virtual void PutSth() = 0;
	//������Ʒ
	void makeDrink() 
	{
		Boil();
		Brew();
		PourInCup();
		PutSth();
	}
};

//��������
class Coffee : public AbstractDrinking 
{
	//��ˮ
	void Boil() 
	{
		cout << "����Ϊ���� ��ˮing" << endl;
	}
	//����
	void Brew() 
	{
		cout << "���ݿ��� ���� ����" << endl;
	};
	//���뱭��
	void PourInCup()
	{
		cout << "******** ���ȵ��뱭��" << endl;
	}
	//���븨��
	void PutSth() 
	{
		cout << "�����Ǻ�ţ��" << endl;
	}
};

//������
class Tea : public AbstractDrinking
{
	//��ˮ
	void Boil()
	{
		cout << "����Ϊ�� ��ˮing" << endl;
	}
	//����
	void Brew()
	{
		cout << "���ݲ� ��� ���" << endl;
	};
	//���뱭��
	void PourInCup()
	{
		cout << "-------- �赹�뱭��" << endl;
	}
	//���븨��
	void PutSth()
	{
		cout << "������� " << endl;
	}
};
//��������
void doWork(AbstractDrinking& absDrinking) 
{
	absDrinking.makeDrink();
	//ʹ�����Ҫ�ǵ��ͷ�Ŷ(�����ָ��)
	//delete absDrinking;
}
//���Ժ���
void test401() 
{
	Coffee coffee;
	doWork(coffee);
	cout << "---------�ָ���----------" << endl;
	Tea tea;
	doWork(tea);
}
int main4() 
{
	test401();

	system("pause");
	return 0;
}
