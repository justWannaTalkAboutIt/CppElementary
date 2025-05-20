#include <iostream>
using namespace std;
#include <string>

//ͨѶ¼����ϵͳ
//�����ϵ�ˣ���Ϣ�������������Ա����䣬��ϵ�绰����ͥסַ��������¼1000��
//��ʾ��ϵ�ˣ���ʾͨѶ¼��������ϵ����Ϣ
//ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
//������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
//�޸���ϵ�ˣ��������������޸�ָ����ϵ��
//�����ϵ�ˣ����ͨѶ¼��������Ϣ
//�˳�ͨѶ¼���˳�

struct contact
{
	string name;
	int sex;
	int age;
	string telephone;
	string address;
};

#define MAX 1000
struct contactBook
{
	contact arr[MAX];
	int num;
};

void showMenu()
{
	cout << "**************************" << endl;
	cout << "********* 1 ��� *********" << endl;
	cout << "********* 2 ��ʾ *********" << endl;
	cout << "********* 3 ɾ�� *********" << endl;
	cout << "********* 4 ���� *********" << endl;
	cout << "********* 5 �޸� *********" << endl;
	cout << "********* 6 ��� *********" << endl;
	cout << "********* 0 �˳� *********" << endl;
	cout << "**************************" << endl;
	cout << "����������ѡ���ܣ�" << endl;
}

void addContact(contactBook* p)
{
	//�ж�ͨѶ¼�Ƿ��������������������
	if (p->num == MAX)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	string name, telephone, address;
	int age, sex;
	cout << "��������ϵ�����ƣ�" << endl;
	cin >> name;
	cout << "��������ϵ���Ա�" << endl;
	while (1)
	{
		cout << " 1-��" << endl;
		cout << " 2-Ů" << endl;
		cin >> sex;
		if (sex == 1 || sex == 2)
		{
			break;
		}
		else
		{
			cout << "������������������" << endl;
		}
	}
	cout << "��������ϵ�����䣺" << endl;
	cin >> age;
	cout << "��������ϵ�˵绰��" << endl;
	cin >> telephone;
	cout << "��������ϵ�˵�ַ��" << endl;
	cin >> address;
	p->arr[p->num].name = name;
	p->arr[p->num].sex = sex;
	p->arr[p->num].age = age;
	p->arr[p->num].telephone = telephone;
	p->arr[p->num].address = address;

	p->num += 1;
	cout << "�����ϣ�ĿǰͨѶ¼����" << p->num << "λ��ϵ��" << endl;
	system("pause");
	system("cls");// ��������
}

void showContact(contactBook* p)
{
	if (p->num == 0)
	{
		cout << "ͨѶ¼Ϊ��" << endl;
		return;
	}
	for (int i = 0;i < p->num;i++)
	{
		cout << "\t" << "������" << p->arr[i].name
			<< "\t" << "�Ա�" << (p->arr[i].sex == 1 ? "��" : "Ů")
			<< "\t" << "���䣺" << p->arr[i].age
			<< "\t" << "�绰��" << p->arr[i].telephone
			<< "\t" << "��ַ��" << p->arr[i].address << endl;
	}
}
int isExist(contactBook* p, string name)
{
	//��װ�����������ϵ���Ƿ���ڣ������ڣ�������ϵ�����������о���λ�ã������ڷ���-1
	for (int i = 0;i < p->num;i++)
	{
		if (p->arr[i].name == name)
		{
			return i;// �ҵ��ˣ�������������������±�
		}
	}
	return -1;
}
void delContact(contactBook* p)
{
	if (p->num == 0)
	{
		cout << "��ǰͨѶ¼��ϵ������Ϊ0��,�޷�ɾ����ϵ��" << endl;
		return;
	}
	string name;
	cout << "������Ҫɾ����ϵ�˵����֣�" << endl;
	cin >> name;
	//���Ҳ�ɾ��
	int ret = isExist(p, name);
	if (ret == -1)
	{
		cout << "δ���ҵ�Ҫɾ������ϵ�ˣ���ǰ��ϵ����" << p->num << "��" << endl;
	}
	else
	{
		//ɾ��i����i+1ǰ�Ƶ�i����
		for (int i = ret; i < p->num-1;i++)
		{
			p->arr[i] = p->arr[i + 1];
		}
		p->num--;
	}
	cout << "ɾ���ɹ�" << endl;
	system("pause");
	system("cls");
}
void searchContact(contactBook* p)
{
	string name;
	cout << "������Ҫ������ϵ�˵�������" << endl;
	cin >> name;

	//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
	int ret = isExist(p, name);
	if (ret != -1)
	{
		cout << "�Ѳ�ѯ����ϵ�ˣ�λ�ڵ� " << ret << " ����ϵ��" << endl;

		cout << "\t" << "������" << p->arr[ret].name
			<< "\t" << "�Ա�" << (p->arr[ret].sex == 1 ? "��" : "Ů")
			<< "\t" << "���䣺" << p->arr[ret].age
			<< "\t" << "�绰��" << p->arr[ret].telephone
			<< "\t" << "��ַ��" << p->arr[ret].address << endl;
		return;
	}
	else
	{
		cout << "δ��ѯ������ϵ��" << endl;
	}
	system("pause");
	system("cls");
}
void modifyContact(contactBook* p)
{
	string name;
	cout << "������Ҫ�޸ĵ���ϵ��������" << endl;
	cin >> name;

	int ret = isExist(p,name);
	if (ret != -1)
	{
		cout << "�Ѳ�ѯ����ϵ�ˣ�λ�ڵ� " << ret << " ����ϵ��" << endl;
		string m_name, telephone, address;
		int age, sex;
		cout << "���޸ģ�" << endl;
		cout << "��������ϵ�����ƣ�" << endl;
		cin >> m_name;

		while (1)
		{
			cout << " 1-��" << endl;
			cout << " 2-Ů" << endl;
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				break;
			}
			else
			{
				cout << "������������������" << endl;
			}
		}
		cout << "��������ϵ�����䣺" << endl;
		cin >> age;
		cout << "��������ϵ�˵绰��" << endl;
		cin >> telephone;
		cout << "��������ϵ�˵�ַ��" << endl;
		cin >> address;

		p->arr[ret].name = m_name;
		p->arr[ret].sex = sex;
		p->arr[ret].age = age;
		p->arr[ret].telephone = telephone;
		p->arr[ret].address = address;

		cout << "\t" << "������" << p->arr[ret].name
			<< "\t" << "�Ա�" << (p->arr[ret].sex == 1 ? "��" : "Ů")
			<< "\t" << "���䣺" << p->arr[ret].age
			<< "\t" << "�绰��" << p->arr[ret].telephone
			<< "\t" << "��ַ��" << p->arr[ret].address << endl;
		cout << "�޸����" << endl;
		return;
	}
	else 
	{
		cout << "δ��ѯ������ϵ��,�޷��޸�" << endl;
	}
}
void emptyContact(contactBook* p)
{
	cout << "���ͨѶ¼" << endl;
	p->num = 0;
	system("pause");
}

int main()
{
	contactBook cBook;
	cBook.num = 0;//num����ͨѶ¼����ϵ�˵�����
	int len = sizeof(cBook.arr) / sizeof(cBook.arr[0]); //len����ͨѶ¼�д洢����

	while (1)
	{
		//չʾ�˵�
		showMenu();
		int choose;
		cin >> choose;
		switch (choose)
		{
		case 1:
			cout << "1 ���" << endl;
			addContact(&cBook);
			break;

		case 2:
			cout << "2 ��ʾ" << endl;
			cout << endl;
			showContact(&cBook);
			cout << endl;
			break;
		case 3:
			cout << "3 ɾ��" << endl;
			delContact(&cBook);
			break;
		case 4:
			cout << "4 ����" << endl;
			searchContact(&cBook);
			break;
		case 5:
			cout << "5 �޸�" << endl;
			modifyContact(&cBook);
			break;
		case 6:
			cout << "6 ���" << endl;
			emptyContact(&cBook);
			break;
		case 0:
			cout << "0 �˳�" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
}