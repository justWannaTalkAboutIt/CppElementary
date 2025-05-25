#include <iostream>
using namespace std;
#include <string>

//���ڶ�̬��ְ������ϵͳ��ְ������ϵͳ������������˾�����е�ְ����Ϣ

//��˾��ְ����Ϊ���࣬��ͨԱ���������ϰ塣
//��ʾ��Ϣʱ����Ҫ��ʾְ����ţ�ְ��������ְ�����ţ���λְ��
//��ͨԱ��ְ����ɾ����������񣻾���ְ������ϰ彻�������񣬲��·������Ա�����ϰ�ְ�𣺹���˾��������

//����ϵͳ��Ҫʵ�ֵĹ�������
//0 �˳�����ϵͳ���˳���ǰ����ϵͳ
//1 ����ְ����Ϣ��ʵ���������ְ�����ܣ�����Ϣ¼�뵽�ļ��У�ְ����ϢΪ��ְ����ţ����������ű��
//2 ��ʾְ����Ϣ����ʾ��˾�ڲ�����ְ������Ϣ
//3 ɾ��ְ����Ϣ�����ձ��ɾ��ָ����Ա��
//4 �޸�ְ����Ϣ�����ձ���޸�Ա��������Ϣ
//5 ����ְ����Ϣ������ְ����Ż���ְ���������������Ա��Ϣ
//6 ���ձ�����򣺰���ְ����Ž��������û�����ѡ���������鿴
//7 ��������ĵ�������ļ��м�¼����ְ����Ϣ�������ǰ���ٴ�ȷ�ϣ���ֹ��ɾ��

//���࣬��������(��Ϊ��һ���麯������û�д��麯��)
class Person 
{
public:
	virtual void work() {};
	int m_Id;
	string m_Name;
	int m_Department;
	string m_Resonsibility;
};
//���ࣺԱ��
class Staff:public Person 
{
public:
	void work() 
	{
		m_Resonsibility = "��ɾ�����������";
	}
};
//���ࣺԱ��
class Manager:public Person 
{
public:
	void work() 
	{
		m_Resonsibility = "����ϰ彻�������񣬲��·������Ա����";
	}
};
//���ࣺԱ��
class Boss:public Person
{
public:
	void work()
	{
		m_Resonsibility = "����˾��������";
	}
};

void addStaff(Person* book,int& num) 
{
	cout << "-------1 ��ʼ����ְ��" << endl;
	int id;
	cout << "������ְ���ı��" << endl;
	cin >> id;
	cout << "������ְ��������" << endl;
	string name;
	cin >> name;
	cout << "������ְ���Ĳ���" << endl;
	cout << "1 - ��ͨԱ��" << endl;
	cout << "2 - ����" << endl;
	cout << "3 - �ϰ�" << endl;
	int department;
	cin >> department;
	switch (department)
	{
	case 1:
	{
		Staff stff;
		stff.m_Id = id;
		stff.m_Name = name;
		stff.m_Department = department;
		stff.work();
		book[num] = stff;
		break;
	}
	case 2:
	{
		Manager stff;
		stff.m_Id = id;
		stff.m_Name = name;
		stff.m_Department = department;
		stff.work();
		book[num] = stff;
		break;
	}
	case 3:
	{
		Boss stff;
		stff.m_Id = id;
		stff.m_Name = name;
		stff.m_Department = department;
		stff.work();
		book[num] = stff;
		break;
	}
	}
	num += 1;
	cout << "������" << endl;
}

void addTest(Person* book, int& num)
{
	Staff s;
	s.m_Id = 1;
	s.m_Name = "zhangsan";
	s.m_Department = 1;
	s.work();
	book[num] = s;
	num += 1;
	Manager m;
	m.m_Id = 2;
	m.m_Name = "lisi";
	m.m_Department = 2;
	m.work();
	book[num] = m;
	num += 1;
	Staff s2;
	s2.m_Id = 3;
	s2.m_Name = "wangwu";
	s2.m_Department = 1;
	s2.work();
	book[num] = s2;
	num += 1;
}

void showStaff(const Person* book,const int num)
{
	cout << "-------2 չʾְ����Ϣ" << endl;
	for (int i = 0;i < num;i++)
	{
		cout << "\t" << "���:" << book[i].m_Id << "\t"<< "������" << book[i].m_Name << "\t" << "���ţ�" << book[i].m_Department << "\t" << "ְ��" << book[i].m_Resonsibility << endl;
	}
}

int isIn(const Person * book,const int num, const int Id)
{
	//��ѯĳid�Ƿ�����ڼ�¼�У������ڷ���λ�ñ�ţ����򷵻�-1
	for (int i = 0;i < num;i++)
	{
		if (book[i].m_Id == Id)
		{
			return i;
		}
	}
	return -1;
}
int isIn(const Person* book, const int num, const string name)
{
	//��ѯĳname�Ƿ�����ڼ�¼�У������ڷ���λ�ñ�ţ����򷵻�-1
	for (int i = 0;i < num;i++)
	{
		if (book[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deleteStaff(Person* book,int& num)
{
	cout << "-------3ɾ�� ��������Ҫɾ����Ա�����" << endl;
	int deleteId;
	cin >> deleteId;
	int flag = isIn(book,num,deleteId);
	if (flag == -1)
	{
		cout << "��id�ڼ�¼�в����ڣ�ɾ��ʧ��" << endl;
		return;
	}
	cout << "id = "<< flag << "�Ѳ��ҵ�id��ɾ����" << endl;
	for (int i = flag;i < num-1; i++) //i<num-1����Ϊ�������鳤����ɾ��1����¼�󣬳��ȱ�ԭ��������1λ
	{
		book[i] = book[i + 1];
	}
	num -= 1;
	cout << "ɾ�����" << endl;
}

void modifyStaff(Person* book, const int& num)
{
	cout << "-------4�޸� ְ������޸�" << endl;
	cout << "��������Ҫ�޸ĵ�ְ����ţ�" << endl;
	int flag;
	int id;
	cin >> id;
	flag = isIn(book, num, id);
	if (flag == -1)
	{
		cout << "�ü�¼������" << endl;
		return;
	}
	cout << "�ü�¼���ڣ����Ϊ" << flag << endl;
	cout << "�������޸ĵ�id" << endl;
	cin >> book[flag].m_Id;
	cout << "�������޸ĵ�����" << endl;
	cin >> book[flag].m_Name;
	cout << "�������޸ĵĲ���" << endl;
	cin >> book[flag].m_Department;
	book[flag].work();
	cout << "�޸����" << endl;
}


void inquiryStaff(Person* book, const int& num)
{
	cout << "-------5��ѯ ��ѡ��ְ��������ѯ �� ��ְ����Ų�ѯ" << endl;
	cout << "\t " << "-1 ��ְ��������ѯ" << endl;
	cout << "\t " << "-2 ��ְ����Ų�ѯ" << endl;
	int choose;
	int flag;
	cin >> choose;
	switch (choose)
	{
	case 1:
	{
		string name;
		cin >> name;
		flag = isIn(book, num, name);
		if (flag == -1)
		{
			cout << "�ü�¼������" << endl;
			return;
		}
		cout << "�ü�¼���ڣ����Ϊ" << flag << endl;
		cout << "\t" << "���:" << book[flag].m_Id << "\t" << "������" << book[flag].m_Name << "\t" << "���ţ�" << book[flag].m_Department << "\t" << "ְ��" << book[flag].m_Resonsibility << endl;
		break;
	}
	case 2:
	{
		int id;
		cin >> id;
		flag = isIn(book, num, id);
		if (flag == -1)
		{
			cout << "�ü�¼������" << endl;
			return;
		}
		cout << "�ü�¼���ڣ����Ϊ" << flag << endl;
		cout << "\t" << "���:" << book[flag].m_Id << "\t" << "������" << book[flag].m_Name << "\t" << "���ţ�" << book[flag].m_Department << "\t" << "ְ��" << book[flag].m_Resonsibility << endl;
		break;
	}
	default:
		cout << "����������Ч" << endl;
		break;
	}
}
void sortStuff( Person* book,const int& num)
{
	//���������һ��
	cout << "-------6 ����" << endl;

	for (int i = 0;i < num - 1;i++)
	{
		for (int j = 0;j < num - 1 - i;j++)
		{
			if (book[j].m_Id > book[j+1].m_Id)
			{
				Person p = book[j];
				book[j] = book[j + 1];
				book[j + 1] = p;
			}
		}
	}
	showStaff(book,num);
}

void emptyStaff(Person* book,int& num)
{
	cout << "-------7 ���" << endl;
	num = 0;
	cout << "��ճɹ�" << endl;
	return;
}
int main() 
{
	//��ʼ��һ�����飬�����洢Ա����Ϣ
	Person book[1024];
	//��ʼ��һ�������������洢����
	int num = 0;
	//�û������ѡ��
	int choose;
	//ѭ����
	while (1)
	{
		//�ȹ�����ʼ�˵�
		cout << "***************************************************" << endl;
		cout << "******************    ��ʼ�˵�   ******************" << endl;
		cout << "***************** 0 �˳���ʼ�˵� ******************" << endl;
		cout << "***************** 1 ����ְ����Ϣ ******************" << endl;
		cout << "***************** 2 ��ʾְ����Ϣ ******************" << endl;
		cout << "***************** 3 ɾ��ְ����Ϣ ******************" << endl;
		cout << "***************** 4 �޸�ְ����Ϣ ******************" << endl;
		cout << "***************** 5 ����ְ����Ϣ ******************" << endl;
		cout << "***************** 6 ���ձ������ ******************" << endl;
		cout << "***************** 7 ��������ĵ� ******************" << endl;
		cout << "***************************************************" << endl;

		cout << "�������Ӧ������ѡ���ܣ�" << endl;
		cin >> choose;
		if (choose == 0)
		{
			cout << "��ӭ�´�ʹ�ã��ټ���" << endl;
			break;
		}
		switch (choose)
		{
		case 1:
			addStaff(book,num);
			break;
		case 2:
			showStaff(book,num);
			break;
		case 3:
			deleteStaff(book,num);
			break;
		case 4:
			modifyStaff(book,num);
			break;
		case 5:
			inquiryStaff(book,num);
			break;
		case 6:
			sortStuff(book,num);
			break;
		case 7:
			cout << "7���" << endl;
			break;
		case 8:
			addTest(book,num);
			break;
		default:
			cout << "������ָ����Χ�ڵ����֣��������������Ч" << endl;
			break;
		}

	}
	system("pause");
	return 0;
}
//�����ϵĹ��ܾ������
//�ڴ˹����г����������⣺
//1 �ļ���д���ʵ�֣���ÿ������֮����Ҫ����һ���ļ�����ȫ����д���ǽ�����ĳ��Ŀ�����������ĳ��Ŀ�����ʵ�ֵģ�
//2 �����д��ڴ�����֧�� ÿ����֧�Ĵ���߶��ظ�������Ż���
//3 ��̬����Ҳû�кܶ�̬���ڽ��в���4���޸Ĳ��ţ���ְ��û���Զ��޸ģ�����Ż���