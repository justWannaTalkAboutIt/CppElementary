#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
//ְ��������workerManager

//���û��Ĺ�ͨ���棺���û��ṩ�˵����棬���û�ѡ��ͬ�Ĺ���
//��ְ������ɾ�Ĳ�Ĳ���������Щ���ܵ�ʵ��
//���ļ��Ķ�д��������ɾ���û������޸����û���ͬ�����ļ��Ĳ���

WorkerManager::WorkerManager() //д���ʱ��������д������.hͷ�ļ�������������.cpp�ļ����� ����ʵ�� �� ���Գ�ʼ��
{
	//��ʼ������
	//this->m_EmpNum = 0; //һ��ʼ��0����
	//this->m_EmpArray = NULL;//һ��ʼû�д�����
	//���ϴ�����ȻҲ����ȷ�ģ�����һ����Ҫ���ļ��ж�ȡ֮ǰ�Ѿ����ڵ�ְ������ʱ�Ͳ�������
	//�������ӡ���ʾ�ȹ���֮ǰ��Ҫ���ȼ��һ���ļ�
	//�������Ϊ���࣬
	//		1 �ļ������ڣ����Է��ĵĴ��㿪ʼ��
	//		2 �ļ����ڵ�Ϊ�գ��ļ����ڣ������û�ʹ����չ�������ˣ����Ҳ���Դ��㿪ʼ
	//		3 �ļ������ҷǿգ���ʾ��Ҫ���ȶ�ȡ�ļ��д洢��ְ����Ϣ���ٽ�����ӡ���ʾ�Ȳ���

	//1 �ļ�������
	ifstream ifs;
	ifs.open(FILENAME,ios::in); //���Զ��ļ�

	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		//ȷ���ļ������ں󣬿��Դ��㿪ʼ
		//��ʼ�� ����
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ�����ļ���־
		this->m_FileIsEmpty = true;
		//�ر��ļ�
		ifs.close();
		//��������
		return;
	}

	//2 �ļ����� ������Ϊ��
	char ch;
	ifs >> ch;//���Զ�ȡһ���ַ�
	if (ifs.eof()) //�Ƿ���EOF��ȡʧ�ܣ�
		//EOF��һ���ļ����ⲿ��ǣ��������ݣ� ������-1�������ʹ��eof()��״̬�������жϣ�char���Ϳ����޷��洢����˲�ʹ�� if(ch==EOF)���ж�
	{
		//�ļ�Ϊ��
		//cout << "�ļ�Ϊ�գ�" << endl;
		//ȷ���ļ�Ϊ�պ󣬿��Դ��㿪ʼ
		//��ʼ�� ����
		//��ʼ����¼����
		this->m_EmpNum = 0;
		//��ʼ������ָ��
		this->m_EmpArray = NULL;
		//��ʼ�����ļ���־
		this->m_FileIsEmpty = true;
		//�ر��ļ�
		ifs.close();
		//��������
		return;
	}

	//3 �ļ����� �Ҽ�¼����
	int num = this->get_EmpNum();
	//cout << "�ļ��д洢��ְ������Ϊ��" << num << endl;
	//��ʼ��ְ���������� Ϊ�ļ��д洢��ְ����
	this->m_EmpNum = num;
	//���˳�ʼ������������Ҫ�������ʹ��������Լ��洢���������
	//��װ�ɺ��������Դ���������.hͷ�ļ�������������,Ȼ������.cpp�ļ�����ʵ�֣�Ȼ����������������
	
	//���ٿռ�
		//�ڶ�������һ�����������
		//����ɻ�Ǯ��С���ſڴһ�����������Ļ�ɫ�����񣨿�ݹ񣩣�ÿ�����Ӵ��һ����������ݣ�
		//���û����һ���ͺñȿ��Աû�п�ݹ�ȴ���ſ����󺰽�ĳ��ݷŽ�3�Ź���
		//����û�п�ݹ�Ҳ���޴�̸��3�Ż��Ǽ�����(Ұָ��)
		//һ�ѿ��ɢ���ڵ��ϣ��޷�����˳����ң����ܻᷢ�����ݵĶ�ʧ����ݶ�ʧ�������
	this->m_EmpArray = new Worker * [this->m_EmpNum];

	//���ļ��е����ݴ浽������
		//�κζ�̬�����������new �����ڴ���д�����ݣ�
		//�ͺñȿ��Ա�й˿Ͱ���ȡ���루ָ�룩��ȡ���֮ǰ�����Ȱ�˳��ڷźÿ�ݣ��������ڴ�����Ǵ�ݷÿ�ݵĸ��Թ���
		//������ڿռ��д����һ���ļ��ӣ����޷���˳��ڷţ�Ҳ���޷���˳���ȡ����û�п�ݹ��Ӿ��޷��ַ�ȡ���룩
		//�����ڴ�֮ǰ��Ҫ����new�����ڴ棨��ÿ�ݹ��ӣ� goto��һ�д���
	this->init_Emp();

	//���ԣ�����Ļ�ϴ�ӡ���
	/*for (int i = 0;i < this->m_EmpNum;i++)
	{
		cout <<" ְ����ţ�"<< this->m_EmpArray[i]->m_Id
			<< " ְ��������" << this->m_EmpArray[i]->m_Name 
			<< " ���ű�ţ�" << this->m_EmpArray[i]->m_DeptId << endl;
	}*/
		//�������������������Ϊʱ����ѡ��ANSI���뷽ʽ
}

//չʾ�˵�
void WorkerManager::ShowMenu() //ע�⺯��ʵ��ʱ��������ǰҪ��������
{
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
	cout << endl;

}

//�˳�ϵͳ
void WorkerManager::ExitSystem() 
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//-------------------����1-��� �漰���ĺ�����ʵ��-------------------
//���ְ��
void WorkerManager::Add_Emp() 
{
	cout << "������Ҫ��ӵ�ְ��������" << endl;

	int addNum = 0;//�����û�Ҫ��ӵ���������
	cin >> addNum;

	if (addNum>0)
	{
		//��ӣ�û��һ��ʼ��ָ���洢һ���˻��������ˣ��������öѶ�̬��չ
		//�ȼ�����Ӻ��¿ռ������Ĵ�С
		int newSize = this->m_EmpNum + addNum; // �¿ռ����� = ԭ����¼���� + ��������

		//�����¿ռ�
		Worker** newSpace = new Worker* [newSize];

		//if �ж�һ��ԭ���ݣ����ԭ�������ݣ������ݴ�ԭ���ռ俽�����¿ռ�
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0;i < this->m_EmpNum;i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}

		}
		//���������󣬿�ʼ�����ְ������
		for (int i = 0;i < addNum;i++)
		{
			int id;//ְ�����
			string name; //ְ������
			int dId;//����ѡ��

			cout << "�������" << i + 1 << "��ְ����ţ�" << endl;
			cin >> id;
			cout << "�������" << i + 1 << "��ְ��������" << endl;
			cin >> name;
			cout << "��ѡ���ְ����λ" << endl;
			cout << "\t 1 ��ְͨ��" << endl;
			cout << "\t 2 ����" << endl;
			cout << "\t 3 �ϰ�" << endl;
			cin >> dId;

			Worker* worker = NULL;//ע��ָ���ʼ��ʱ��Ҫ�ÿ�

			switch (dId)
			{
			case 1:
				worker = new Employee(id, name, dId);
				break;
			case 2:
				worker = new Manager(id, name, dId);
				break;
			case 3:
				worker = new Boss(id, name, dId);
				break;
			default:
				break;
			}
			//��������ְ��ָ�� ���浽������
			newSpace[this->m_EmpNum + i] = worker;
		}
		//���ԭ�������ݣ�����ְ�����ݽ�����
		//�ͷ�ԭ������Ĺ���
		delete[] this->m_EmpArray;
		
		//���¿ռ�ָ�� //�����¿ռ��ָ���ַ/�绰��/Կ��
		this->m_EmpArray = newSpace;

		//����ְ������ //���洢��ְ����������
		this->m_EmpNum = newSize;

		//����ְ����Ϊ�ձ�־
		this->m_FileIsEmpty = false;
		
		//��ʾ��ӳɹ� //��ע���ǵ��������һ�仰������Ҫ��ʾ�йز�������Ϣ
		cout << "�ɹ����" << addNum << "����ְ��" << endl;
		
		//�������ݵ��ļ���
		this->save();
	}
	else 
	{
		cout << "������������" << endl;
	}
	
	//��������������ص��ϼ�Ŀ¼ 
	system("pause");
	system("cls");
}

//�����ļ�
void WorkerManager::save() 
{
	//д�ļ� ofstrea
	ofstream ofs;
	ofs.open(FILENAME, ios::out);
	for (int i = 0;i < this->m_EmpNum;i++)
	{
		ofs << this->m_EmpArray[i]->m_Id << " "
			<< this->m_EmpArray[i]->m_Name << " "
			<< this->m_EmpArray[i]->m_DeptId << endl;
	}
	ofs.close();
}

//ͳ���ļ�������
int WorkerManager::get_EmpNum() 
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in); //���ļ� ��

	//׼���������������нӶ�����������
	int id;
	string name;
	int dId;
	int num = 0; //���ؽ���������¼���м�����
	
	while (ifs>> id && ifs>>name&& ifs>> dId) 
	//ֻ��ÿһ��ֵ���ɹ���ȡ���Ż����ѭ��
	//ʹ�����������>>��ifs��ȡ����ʱ��Ĭ���Կհ��ַ����ո��Ʊ�������з��ȣ���Ϊ�ָ����Ҳ���ǻ��Զ������ո��ȡÿ���ֶ�
	{
		num++; //��ȡһ�к�+1
	}
	return num;
}

//�����ļ����ݳ�ʼ������
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;
	string name;
	int dId;
	int index = 0;//��ʾ�����м�¼��ռ�ڼ���

	while (ifs >> id && ifs>>name && ifs>> dId)
		//��һ����Ӧ����һ������
	{
		Worker* worker = NULL;
		switch (dId)
		{
		case 1:
			worker = new Employee(id,name,dId);
			break;
		case 2:
			worker = new Manager(id,name,dId);
			break;
		case 3:
			worker = new Boss(id,name,dId);
			break;
		default:
			cout << "������������" << endl;
			break;
		}
		this->m_EmpArray[index] = worker; //�洢����Կ�װ�˳��Ž�Կ�׹���
		index++;//����λ�õ���
	}

	//�����ļ�֮��ر��ļ�
	ifs.close();
}

//-------------------����2-��ʾ �漰���ĺ�����ʵ��-------------------

//-------------------����2-��ʾ �漰���ĺ�����ʵ��-------------------
//��ʾְ��
void WorkerManager::Show_Emp() 
{
	//ͨ�������ж��Ƿ���ڼ�¼
	if (this->m_FileIsEmpty)//��Ȼ if(this->m_EmpNum == 0) Ҳ���жϣ���m_EmpNum������������������������ϵ��������û��m_FileIsEmpty���
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else 
	{
		for (int i = 0;i < this->m_EmpNum;i++)
		{
			//���ö�̬���ó���ӿ�
			this->m_EmpArray[i]->showInfo();
		}
	}
	//�������������
	system("pause");
	system("cls");
}

//-------------------����3-ɾ�� �漰���ĺ�����ʵ��-------------------
//ɾ�������е�һ����¼
void WorkerManager::Del_Emp() 
{
	if (this->m_FileIsEmpty == true)
	{
		cout << "��¼������" << endl;
		return;
	}
	int id;
	cout << "������Ҫɾ����id:" << endl;
	cin >> id;
	int ret = this->IsExist(id);
	if (ret == -1)
	{
		cout << "��id��¼�����ڣ�" << endl;
	}
	else 
	{
		cout << "��id�����ڵ�" << ret + 1 << "����¼" << endl;
		for (int i = ret; i < this->m_EmpNum-1;i++)
		{
			this->m_EmpArray[i] = this->m_EmpArray[i + 1];
		}
		this->m_EmpNum--;
		cout << "ɾ���ɹ�" << endl;
		//�ڶ��е�����ɾ���󣬸���txt�ļ��еļ�¼
			//ofs.open(FILENAME,ios::out)Ĭ��ģʽ��ÿ�δ��ļ�������ԭ���ݣ���д��������
		this->save();
	}
	//��ͣ������
	system("pause");
	system("cls");
}

//��idȷ���Ƿ���ڴ˼�¼,�����ڷ���index,�������ڷ���-1
int WorkerManager::IsExist(int id)
{
	int index = -1;
	for (int i = 0;i < this->m_EmpNum;i++)
	{
		if (this->m_EmpArray[i]->m_Id == id)
		{
			index = i;
			break;
		}
	}
	return index;
}

//-------------------����4-�޸� �漰���ĺ�����ʵ��-------------------
void WorkerManager::Mod_Emp()
{
	//�����ж��Ƿ���ڼ�¼����������ֱ���˳�����
	if (this->m_FileIsEmpty == true)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
		//�����������
		system("pause");
		system("cls");
		return;
	}

	//�ļ���Ϊ�գ����Բ���
	cout << "�������޸�ְ���ı�ţ�" << endl;
	int id;
	cin >> id;

	//���Ȳ�ѯ�û������id�Ƿ����
	int ret = this->IsExist(id);
	if (ret == -1) //����ѯ��������-1��ֱ���˳�����
	{
		cout << "��id�����ڣ�" << endl;
		//�����������
		system("pause");
		system("cls");
		return;
	}

	//����ѯ����������������ʼ�޸�
		//�޸ķ�Ϊ����������ɾ��ԭ���ģ����½�һ���µ�

	//ɾ�����ͷ�ԭ��ָ�� ��ָ�Ĵ洢�ռ�
	delete this->m_EmpArray[ret];

	int newId = 0;
	string newName = "";
	int dSelect = 0;

	cout << "�鵽��" << id << "��ְ������������ְ���ţ�" << endl;
	cin >> newId;

	cout << "��������������" << endl;
	cin >> newName;

	cout << "�������λ��" << endl;
	cout << "\t 1 ��ְͨ��" << endl;
	cout << "\t 2 ����" << endl;
	cout << "\t 3 �ϰ�" << endl;
	cout << endl;
	cin >> dSelect;

	//�½�һ��
	Worker* worker = NULL;
	switch (dSelect) 
	{
	case 1:
		worker = new Employee(newId, newName, dSelect);
		break;
	case 2:
		worker = new Manager(newId, newName, dSelect);
		break;
	case 3:
		worker = new Boss(newId, newName, dSelect);
		break;
	default:
		break;
	}

	//�ŵ�������
	this->m_EmpArray[ret] = worker;
	cout << "�޸ĳɹ���" << this->m_EmpArray[ret]->m_DeptId << endl;

	//�����ļ�
	this->save();
	
	//�����������
	system("pause");
	system("cls");
}

//-------------------����5-��ѯ �漰���ĺ�����ʵ��-------------------
void WorkerManager::Find_Emp() 
{
	//�ȼ���ļ���¼�Ƿ�Ϊ��
	if (this->m_FileIsEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;

		//�����������
		system("pause");
		system("cls");
	}

	//���ļ���¼�ǿգ���������
	//���������ַ�ʽ��һ�ְ����������ң�һ�ְ���ְ����Ų���
	cout << "һ�ְ����������ң�һ�ְ���ְ����Ų���,��������ҷ�ʽ" << endl;
	cout << "\t -1- ����Ų���" << endl;
	cout << "\t -2- ����������" << endl;
	int select = 0;
	cin >> select;

	switch (select)
	{
	case 1:
	{
		int id;
		cout << "������Ҫ���ҵ�ְ����ţ�" << endl;
		cin >> id;

		int ret = IsExist(id);
		if (ret == -1)
		{
			cout << "�˼�¼������" << endl;
		}
		else
		{
			cout << "\t�˼�¼�����ڼ�¼ ��" << ret + 1 << "��" << endl;
			this->m_EmpArray[ret]->showInfo();
		}
		break;
	}
	case 2:
	{
		string name;
		cout << "������Ҫ���ҵ�ְ��������" << endl;
		cin >> name;

		int ret = IsExist(name);
		if (ret == -1)
		{
			cout << "�˼�¼������" << endl;
		}
		else
		{
			cout << "\t�˼�¼�����ڼ�¼ ��" << ret + 1 << "��" << endl;
			this->m_EmpArray[ret]->showInfo();
		}
		break;
	}
	default:
		cout << "ѡ��������󣬷����ϼ��˵�" << endl;
		break;
	}

	//�����������
	system("pause");
	system("cls");
}

int WorkerManager::IsExist(string name)
{
	//����ǲ��������������
	int index = -1;
	for (int i = 0;i < this->m_EmpNum;i++)
	{
		if (this->m_EmpArray[i]->m_Name == name)
		{
			index = i;
			break;
		}
	}
	return index;
}

//-------------------����6-���� �漰���ĺ�����ʵ��-------------------
void WorkerManager::Sort_Emp() 
{
	//�����ж��Ƿ��� �ļ������ڻ��¼Ϊ�յ����
	if (this->m_FileIsEmpty == true)
	{
		cout << "��¼�����ڻ�Ϊ��" << endl;
		return;
	}

	//ȷ�����м�¼����������
	cout << "��ѡ������ʽ" << endl;
	cout << "\t -1- ��ְ���Ž�������" << endl;
	cout << "\t -2- ��ְ���Ž��н���" << endl;
	int select = 0;
	cin >> select;

	//��������
		//ʹ�ü�ѡ������
	for (int i = 0;i < this->m_EmpNum - 1;i++)
	{
		//������ע�⣬ÿһ�ֿ�ʼʱ��minIdx��ֵΪ���ֿ�ʼδ����ĵ�һ��������i
		int minIdx = i; 
		//minIdx�ı仯��Ϊ���֣�ÿ��һ��ʼ�ĳ�ʼ�����Լ�ÿ�ֱȽ��еĸ���
		//for (int j = i; j < this->m_EmpNum;j++) //array[j] < array[minIdx],����һ�αȽ�minIdx=i��j=i ʱ�����Լ����Լ��Ƚ�
		for(int j = i+1; j < this->m_EmpNum;j++)// �ڴ�ѭ���У���ν�δ��������Ԫ����ٶ�����Сֵ�Ƚϣ������ҵ�����δ����Ԫ��(��i��m_EmpNum)�е���Сֵ)
		{
			switch (select)
			{
			case 1:
			{
				if (this->m_EmpArray[j]->m_Id < this->m_EmpArray[minIdx]->m_Id)  //���бȼٶ�����Сֵ��ҪС��Ԫ�أ������������³�j
				{
					minIdx = j;
				}
				break;
			}
			case 2:
			{
				if (this->m_EmpArray[j]->m_Id > this->m_EmpArray[minIdx]->m_Id)  //���бȼٶ������ֵ��Ҫ���Ԫ�أ������������³�j
				{
					minIdx = j;
				}
				break;
			}
			}
			
		}
		//�ڴ�ѭ�����󣬼����һ�ֱȽϣ����ҵ��˴���δ����Ԫ��(��i��m_EmpNum)�е���Сֵ minIdx
		//���ռ�ѡ������Ĺ��򣬽�����Сֵ�����δ����Ԫ���еĵ�һ��(i)����
		Worker* worker = this->m_EmpArray[i]; //�½�һ����ʱ���� �洢����δ����ĵ�һ��Ԫ��
		this->m_EmpArray[i] = this->m_EmpArray[minIdx]; //��i �� minIdx �洢��ָ�뽻��
		this->m_EmpArray[minIdx] = worker;
		//������ɣ�һ��Ԫ�ع�λ
	}
	//����Ԫ�ع�λ����ʾ
	this->Show_Emp();
	//�洢
	this->save();

	//������򵥵������㷨��ѧ����lessonӦ�þ��ǣ���Ҫȥ�볭���˵�����������Ҫ��ͷ�����Լ�������
	//����ǿ���ҽ���֪ʶ��ȥ�����Ǵ���õ�������Ϊ������
	//����������ľ����˵㣬������һЩС���������ƣ�֪������
}

//-------------------����7-��� �漰���ĺ�����ʵ��-------------------
void WorkerManager::Clean_File()
{
	cout << "ȷ����գ�" << endl;
	cout << "\t -1- ȷ��" << endl;
	cout << "\t -2- ����" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc); //�����ļ���д��ʲô��ɾ���ļ��������´���
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0;i < this->m_EmpNum;i++)
			{
				delete this->m_EmpArray[i]; //���ٿ�ݹ��ӵ�Ԫ
				this->m_EmpArray[i] = NULL; //���ٶ�Ӧ��Կ��
			} //�ͷź������ÿգ��γɼ�����䣨�����ӣ�ɾ��˭˭Ϊ��
		}

		//ɾ����������ָ��
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
		//�����ÿ�
		this->m_EmpNum = 0;
		//�ļ���־�ÿ�
		this->m_FileIsEmpty = true;
	}
	else 
	{
		//�����������
		system("pause");
		system("cls");
		return;
	}
	cout << "��ճɹ�" << endl;

	//�����������
	system("pause");
	system("cls");
}
//��������
WorkerManager::~WorkerManager() 
{
	//�����������ֶ������ֶ��ͷ�
	if (this->m_EmpArray != NULL)
	{
		//��������ٿ�ݹ�
		for (int i = 0;i < this->m_EmpNum;i++)
		{
			delete this->m_EmpArray[i]; //���ٿ�ݹ��ӵ�Ԫ
			this->m_EmpArray[i] = NULL; //���ٶ�Ӧ��Կ��
		} //�ͷź������ÿգ��γɼ�����䣨�����ӣ�ɾ��˭˭Ϊ��

		delete[] this->m_EmpArray; // ɾ����ݹ�����
		this->m_EmpArray = NULL; //�ӵ�Կ��
		//ֻ��Ҫ����new�����Ķ���
	}
}