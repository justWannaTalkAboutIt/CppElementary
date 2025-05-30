#include "workerManager.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
//职工管理类workerManager

//与用户的沟通界面：给用户提供菜单界面，让用户选择不同的功能
//对职工的增删改查的操作：对这些功能的实现
//与文件的读写交互：增删完用户，或修改完用户，同步到文件的操作

WorkerManager::WorkerManager() //写类的时候是跳着写，先在.h头文件里声明，再在.cpp文件里做 函数实现 或 属性初始化
{
	//初始化属性
	//this->m_EmpNum = 0; //一开始是0个人
	//this->m_EmpArray = NULL;//一开始没有存数组
	//如上代码虽然也是正确的，但是一旦需要从文件中读取之前已经存在的职工数据时就不合适了
	//因此在添加、显示等功能之前需要首先检查一下文件
	//检查结果分为三类，
	//		1 文件不存在，可以放心的从零开始了
	//		2 文件存在但为空，文件存在，但被用户使用清空功能清空了，因此也可以从零开始
	//		3 文件存在且非空，表示需要首先读取文件中存储的职工信息，再进行添加、显示等操作

	//1 文件不存在
	ifstream ifs;
	ifs.open(FILENAME,ios::in); //尝试读文件

	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		//确定文件不存在后，可以从零开始
		//初始化 属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化空文件标志
		this->m_FileIsEmpty = true;
		//关闭文件
		ifs.close();
		//结束操作
		return;
	}

	//2 文件存在 且数据为空
	char ch;
	ifs >> ch;//尝试读取一个字符
	if (ifs.eof()) //是否因EOF读取失败？
		//EOF是一个文件的外部标记（而非内容） 可能是-1，或必须使用eof()等状态函数来判断，char类型可能无法存储，因此不使用 if(ch==EOF)来判断
	{
		//文件为空
		//cout << "文件为空！" << endl;
		//确定文件为空后，可以从零开始
		//初始化 属性
		//初始化记录人数
		this->m_EmpNum = 0;
		//初始化数组指针
		this->m_EmpArray = NULL;
		//初始化空文件标志
		this->m_FileIsEmpty = true;
		//关闭文件
		ifs.close();
		//结束操作
		return;
	}

	//3 文件存在 且记录数据
	int num = this->get_EmpNum();
	//cout << "文件中存储的职工人数为：" << num << endl;
	//初始化职工人数属性 为文件中存储的职工数
	this->m_EmpNum = num;
	//除了初始化人数，还需要按照类型创建对象以及存储对象的数组
	//封装成函数，所以从这里跳到.h头文件，做函数声明,然后跳到.cpp文件里做实现，然后跳回来，做调用
	
	//开辟空间
		//在堆区分配一个具体的容量
		//想象成花钱在小区门口搭建一个美团外卖的黄色外卖柜（快递柜），每个格子存放一份外卖（快递）
		//如果没有这一步就好比快递员没有快递柜却对着空气大喊将某快递放进3号柜子
		//根本没有快递柜，也就无从谈起3号还是几号了(野指针)
		//一堆快递散落在地上，无法按照顺序查找，可能会发生数据的丢失（快递丢失）或崩溃
	this->m_EmpArray = new Worker * [this->m_EmpNum];

	//将文件中的数据存到数组中
		//任何动态数组必须先用new 分配内存再写入数据，
		//就好比快递员叫顾客按照取件码（指针）来取快递之前必须先按顺序摆放好快递，而分配内存就像是搭建拜访快递的各自柜子
		//如果不在空间中搭建格子一样的架子，就无法按顺序摆放，也就无法按顺序存取。（没有快递柜子就无法分发取件码）
		//所以在此之前需要先用new分配内存（搭建好快递柜子） goto上一行代码
	this->init_Emp();

	//测试，在屏幕上打印结果
	/*for (int i = 0;i < this->m_EmpNum;i++)
	{
		cout <<" 职工编号："<< this->m_EmpArray[i]->m_Id
			<< " 职工姓名：" << this->m_EmpArray[i]->m_Name 
			<< " 部门编号：" << this->m_EmpArray[i]->m_DeptId << endl;
	}*/
		//若出现中文乱码则另存为时编码选择ANSI编码方式
}

//展示菜单
void WorkerManager::ShowMenu() //注意函数实现时，函数名前要加作用域
{
	cout << "***************************************************" << endl;
	cout << "******************    开始菜单   ******************" << endl;
	cout << "***************** 0 退出开始菜单 ******************" << endl;
	cout << "***************** 1 增加职工信息 ******************" << endl;
	cout << "***************** 2 显示职工信息 ******************" << endl;
	cout << "***************** 3 删除职工信息 ******************" << endl;
	cout << "***************** 4 修改职工信息 ******************" << endl;
	cout << "***************** 5 查找职工信息 ******************" << endl;
	cout << "***************** 6 按照编号排序 ******************" << endl;
	cout << "***************** 7 清空所有文档 ******************" << endl;
	cout << "***************************************************" << endl;
	cout << endl;

}

//退出系统
void WorkerManager::ExitSystem() 
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//-------------------功能1-添加 涉及到的函数的实现-------------------
//添加职工
void WorkerManager::Add_Emp() 
{
	cout << "请输入要添加的职工数量：" << endl;

	int addNum = 0;//保存用户要添加的输入数量
	cin >> addNum;

	if (addNum>0)
	{
		//添加：没有一开始就指定存储一万人还是两万人，而是利用堆动态扩展
		//先计算添加后新空间的所需的大小
		int newSize = this->m_EmpNum + addNum; // 新空间人数 = 原来记录人数 + 新增人数

		//开辟新空间
		Worker** newSpace = new Worker* [newSize];

		//if 判断一下原数据，如果原来有数据，将数据从原来空间拷贝到新空间
		if (this->m_EmpArray != NULL)
		{
			for (int i = 0;i < this->m_EmpNum;i++)
			{
				newSpace[i] = this->m_EmpArray[i];
			}

		}
		//拷贝结束后，开始添加新职工数据
		for (int i = 0;i < addNum;i++)
		{
			int id;//职工编号
			string name; //职工姓名
			int dId;//部门选择

			cout << "请输入第" << i + 1 << "个职工编号：" << endl;
			cin >> id;
			cout << "请输入第" << i + 1 << "个职工姓名：" << endl;
			cin >> name;
			cout << "请选择该职工岗位" << endl;
			cout << "\t 1 普通职工" << endl;
			cout << "\t 2 经理" << endl;
			cout << "\t 3 老板" << endl;
			cin >> dId;

			Worker* worker = NULL;//注意指针初始化时需要置空

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
			//将创建的职工指针 保存到数组中
			newSpace[this->m_EmpNum + i] = worker;
		}
		//如果原来有数据，新增职工数据结束后
		//释放原来数组的柜子
		delete[] this->m_EmpArray;
		
		//更新空间指向 //更改新空间的指向地址/电话号/钥匙
		this->m_EmpArray = newSpace;

		//更新职工人数 //所存储的职工数量增加
		this->m_EmpNum = newSize;

		//更新职工不为空标志
		this->m_FileIsEmpty = false;
		
		//提示添加成功 //备注不是单纯的输出一句话，而是要提示有关操作的信息
		cout << "成功添加" << addNum << "名新职工" << endl;
		
		//保存数据到文件中
		this->save();
	}
	else 
	{
		cout << "输入数字有误" << endl;
	}
	
	//按任意键后，清屏回到上级目录 
	system("pause");
	system("cls");
}

//保存文件
void WorkerManager::save() 
{
	//写文件 ofstrea
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

//统计文件中人数
int WorkerManager::get_EmpNum() 
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in); //打开文件 读

	//准备几个容器用来承接读出来的内容
	int id;
	string name;
	int dId;
	int num = 0; //返回结果，代表记录中有几个人
	
	while (ifs>> id && ifs>>name&& ifs>> dId) 
	//只有每一个值都成功读取，才会进入循环
	//使用右移运算符>>从ifs读取数据时，默认以空白字符（空格，制表符，换行符等）作为分割符，也就是会自动跳过空格读取每个字段
	{
		num++; //读取一行后+1
	}
	return num;
}

//按照文件内容初始化数组
void WorkerManager::init_Emp()
{
	ifstream ifs;
	ifs.open(FILENAME,ios::in);

	int id;
	string name;
	int dId;
	int index = 0;//表示在所有记录中占第几条

	while (ifs >> id && ifs>>name && ifs>> dId)
		//读一条相应创建一个对象
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
			cout << "部门数字有误" << endl;
			break;
		}
		this->m_EmpArray[index] = worker; //存储，将钥匙按顺序放进钥匙柜中
		index++;//索引位置递增
	}

	//读完文件之后关闭文件
	ifs.close();
}

//-------------------功能2-显示 涉及到的函数的实现-------------------

//-------------------功能2-显示 涉及到的函数的实现-------------------
//显示职工
void WorkerManager::Show_Emp() 
{
	//通过属性判断是否存在记录
	if (this->m_FileIsEmpty)//虽然 if(this->m_EmpNum == 0) 也能判断，但m_EmpNum对其他变量存在隐性依赖关系，且区分没有m_FileIsEmpty清楚
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else 
	{
		for (int i = 0;i < this->m_EmpNum;i++)
		{
			//利用多态调用程序接口
			this->m_EmpArray[i]->showInfo();
		}
	}
	//按任意键后清屏
	system("pause");
	system("cls");
}

//-------------------功能3-删除 涉及到的函数的实现-------------------
//删除数组中的一条记录
void WorkerManager::Del_Emp() 
{
	if (this->m_FileIsEmpty == true)
	{
		cout << "记录不存在" << endl;
		return;
	}
	int id;
	cout << "请输入要删除的id:" << endl;
	cin >> id;
	int ret = this->IsExist(id);
	if (ret == -1)
	{
		cout << "此id记录不存在！" << endl;
	}
	else 
	{
		cout << "此id存在于第" << ret + 1 << "条记录" << endl;
		for (int i = ret; i < this->m_EmpNum-1;i++)
		{
			this->m_EmpArray[i] = this->m_EmpArray[i + 1];
		}
		this->m_EmpNum--;
		cout << "删除成功" << endl;
		//在堆中的数据删除后，更新txt文件中的记录
			//ofs.open(FILENAME,ios::out)默认模式，每次打开文件后会清空原内容，再写入新数据
		this->save();
	}
	//暂停后清屏
	system("pause");
	system("cls");
}

//按id确认是否存在此记录,若存在返回index,若不存在返回-1
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

//-------------------功能4-修改 涉及到的函数的实现-------------------
void WorkerManager::Mod_Emp()
{
	//首先判断是否存在记录，若不存在直接退出函数
	if (this->m_FileIsEmpty == true)
	{
		cout << "文件不存在或记录为空" << endl;
		//按任意键清屏
		system("pause");
		system("cls");
		return;
	}

	//文件不为空，可以查找
	cout << "请输入修改职工的编号：" << endl;
	int id;
	cin >> id;

	//首先查询用户输入的id是否存在
	int ret = this->IsExist(id);
	if (ret == -1) //若查询函数返回-1则直接退出函数
	{
		cout << "该id不存在！" << endl;
		//按任意键清屏
		system("pause");
		system("cls");
		return;
	}

	//若查询函数返回索引，则开始修改
		//修改分为两步，首先删除原来的，再新建一个新的

	//删除，释放原来指针 所指的存储空间
	delete this->m_EmpArray[ret];

	int newId = 0;
	string newName = "";
	int dSelect = 0;

	cout << "查到：" << id << "号职工，请输入新职工号：" << endl;
	cin >> newId;

	cout << "请输入新姓名：" << endl;
	cin >> newName;

	cout << "请输入岗位：" << endl;
	cout << "\t 1 普通职工" << endl;
	cout << "\t 2 经理" << endl;
	cout << "\t 3 老板" << endl;
	cout << endl;
	cin >> dSelect;

	//新建一个
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

	//放到数组里
	this->m_EmpArray[ret] = worker;
	cout << "修改成功！" << this->m_EmpArray[ret]->m_DeptId << endl;

	//保存文件
	this->save();
	
	//按任意键清屏
	system("pause");
	system("cls");
}

//-------------------功能5-查询 涉及到的函数的实现-------------------
void WorkerManager::Find_Emp() 
{
	//先检查文件记录是否为空
	if (this->m_FileIsEmpty)
	{
		cout << "文件不存在或记录为空" << endl;

		//按任意键清屏
		system("pause");
		system("cls");
	}

	//若文件记录非空，继续操作
	//查找有两种方式，一种按照姓名查找，一种按照职工编号查找
	cout << "一种按照姓名查找，一种按照职工编号查找,请输入查找方式" << endl;
	cout << "\t -1- 按编号查找" << endl;
	cout << "\t -2- 按姓名查找" << endl;
	int select = 0;
	cin >> select;

	switch (select)
	{
	case 1:
	{
		int id;
		cout << "请输入要查找的职工编号：" << endl;
		cin >> id;

		int ret = IsExist(id);
		if (ret == -1)
		{
			cout << "此记录不存在" << endl;
		}
		else
		{
			cout << "\t此纪录存在于记录 第" << ret + 1 << "条" << endl;
			this->m_EmpArray[ret]->showInfo();
		}
		break;
	}
	case 2:
	{
		string name;
		cout << "请输入要查找的职工姓名：" << endl;
		cin >> name;

		int ret = IsExist(name);
		if (ret == -1)
		{
			cout << "此记录不存在" << endl;
		}
		else
		{
			cout << "\t此纪录存在于记录 第" << ret + 1 << "条" << endl;
			this->m_EmpArray[ret]->showInfo();
		}
		break;
	}
	default:
		cout << "选项输入错误，返回上级菜单" << endl;
		break;
	}

	//按任意键清屏
	system("pause");
	system("cls");
}

int WorkerManager::IsExist(string name)
{
	//这个是不考虑重名的情况
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

//-------------------功能6-排序 涉及到的函数的实现-------------------
void WorkerManager::Sort_Emp() 
{
	//首先判断是否有 文件不存在或记录为空的情况
	if (this->m_FileIsEmpty == true)
	{
		cout << "记录不存在或为空" << endl;
		return;
	}

	//确定存有记录，继续进行
	cout << "请选择排序方式" << endl;
	cout << "\t -1- 按职工号进行升序" << endl;
	cout << "\t -2- 按职工号进行降序" << endl;
	int select = 0;
	cin >> select;

	//进行排序
		//使用简单选择排序
	for (int i = 0;i < this->m_EmpNum - 1;i++)
	{
		//！！！注意，每一轮开始时，minIdx的值为此轮开始未排序的第一个数，即i
		int minIdx = i; 
		//minIdx的变化分为两种：每轮一开始的初始化，以及每轮比较中的更新
		//for (int j = i; j < this->m_EmpNum;j++) //array[j] < array[minIdx],而第一次比较minIdx=i，j=i 时会变成自己和自己比较
		for(int j = i+1; j < this->m_EmpNum;j++)// 在此循环中，逐次将未排序区域元素与假定的最小值比较，意在找到所有未排序元素(从i到m_EmpNum)中的最小值)
		{
			switch (select)
			{
			case 1:
			{
				if (this->m_EmpArray[j]->m_Id < this->m_EmpArray[minIdx]->m_Id)  //若有比假定的最小值还要小的元素，将此索引更新成j
				{
					minIdx = j;
				}
				break;
			}
			case 2:
			{
				if (this->m_EmpArray[j]->m_Id > this->m_EmpArray[minIdx]->m_Id)  //若有比假定的最大值还要大的元素，将此索引更新成j
				{
					minIdx = j;
				}
				break;
			}
			}
			
		}
		//在此循环过后，即完成一轮比较，即找到了此轮未排序元素(从i到m_EmpNum)中的最小值 minIdx
		//按照简单选择排序的规则，将此最小值与此轮未排序元素中的第一个(i)交换
		Worker* worker = this->m_EmpArray[i]; //新建一个临时变量 存储此轮未排序的第一个元素
		this->m_EmpArray[i] = this->m_EmpArray[minIdx]; //将i 与 minIdx 存储的指针交换
		this->m_EmpArray[minIdx] = worker;
		//交换完成，一个元素归位
	}
	//所有元素归位后，显示
	this->Show_Emp();
	//存储
	this->save();

	//从这个简单的排序算法中学到的lesson应该就是：不要去想抄别人的做法，而是要从头构建自己的做法
	//不是强迫我进到知识里去，而是从虚幻的理论中为我所用
	//有了这个核心就有了点，随后根据一些小问题逐步完善，知道掌握
}

//-------------------功能7-清空 涉及到的函数的实现-------------------
void WorkerManager::Clean_File()
{
	cout << "确定清空？" << endl;
	cout << "\t -1- 确定" << endl;
	cout << "\t -2- 返回" << endl;

	int select = 0;
	cin >> select;

	if (select == 1)
	{
		ofstream ofs;
		ofs.open(FILENAME, ios::trunc); //不管文件里写的什么，删除文件后再重新创建
		ofs.close();

		if (this->m_EmpArray != NULL)
		{
			for (int i = 0;i < this->m_EmpNum;i++)
			{
				delete this->m_EmpArray[i]; //销毁快递柜子单元
				this->m_EmpArray[i] = NULL; //销毁对应的钥匙
			} //释放后立即置空，形成肌肉记忆（无语子）删除谁谁为空
		}

		//删除堆区数组指针
		delete[] this->m_EmpArray;
		this->m_EmpArray = NULL;
		//数量置空
		this->m_EmpNum = 0;
		//文件标志置空
		this->m_FileIsEmpty = true;
	}
	else 
	{
		//按任意键清屏
		system("pause");
		system("cls");
		return;
	}
	cout << "清空成功" << endl;

	//按任意键清屏
	system("pause");
	system("cls");
}
//析构函数
WorkerManager::~WorkerManager() 
{
	//堆区的数据手动开辟手动释放
	if (this->m_EmpArray != NULL)
	{
		//先逐个销毁快递柜
		for (int i = 0;i < this->m_EmpNum;i++)
		{
			delete this->m_EmpArray[i]; //销毁快递柜子单元
			this->m_EmpArray[i] = NULL; //销毁对应的钥匙
		} //释放后立即置空，形成肌肉记忆（无语子）删除谁谁为空

		delete[] this->m_EmpArray; // 删除快递柜整体
		this->m_EmpArray = NULL; //扔掉钥匙
		//只需要考虑new出来的东西
	}
}