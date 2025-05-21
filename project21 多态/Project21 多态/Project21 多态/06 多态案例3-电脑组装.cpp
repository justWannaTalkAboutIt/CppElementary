#include <iostream>
using namespace std;
#include <string>
//多态案例3 电脑组装
//假设 电脑主要组成部件为 CPU(用于计算)，显卡(用于显示)，内存条(用于草稿)
//将每个零件封装成抽象基类， 并且提供不同厂家，生产不同的零件，例如Intel厂商和Lenovo厂商
//创建电脑类提供让电脑工作的函数，并且调用每个零件工作的接口
//测试时组装三台不同的电脑进行工作，一台Intel,一台Lenovo的，一台混合的

//抽象基类
//CPU基类
class CPU 
{
public:
	virtual void compute() = 0;
	string m_brand;
};
//显卡抽象类
class GPU 
{
public:
	virtual void display() = 0;
	string m_brand;
};
//内存条抽象类
class memory 
{
public:
	virtual void stock() = 0;
	string m_brand;
};

//继承类
//IntelCPU类
class IntelCPU :public CPU 
{
public:
	IntelCPU()
	{
		this->m_brand = "Intel";
	}
	void compute() 
	{
		cout << m_brand << " CPU is computing ... ..." << endl;
	}
};
//IntelGPU类
class IntelGPU : public GPU 
{
public:
	IntelGPU()
	{
		this->m_brand = "Intel";
	}
	void display() 
	{
		cout << m_brand << " GPU is displaying ... ..." << endl;
	}
};
//IntelMemory类
class IntelMemory : public memory 
{
public:
	IntelMemory() 
	{
		this->m_brand = "Intel";
	}
	void stock() 
	{
		cout << m_brand << " memory is saving files ... ..." << endl;
	}
};
//LenovoCPU类
class LenovoCPU :public CPU
{
public:
	LenovoCPU()
	{
		this->m_brand = "Lenovo";
	}
	void compute()
	{
		cout << m_brand << " CPU is computing ... ..." << endl;
	}
};
//LenovoGPU类
class LenovoGPU : public GPU
{
public:
	LenovoGPU()
	{
		this->m_brand = "Lenovo";
	}
	void display()
	{
		cout << m_brand << " GPU is displaying ... ..." << endl;
	}
};
//LenovoMemory类
class LenovoMemory : public memory
{
public:
	LenovoMemory()
	{
		this->m_brand = "Lenovo";
	}
	void stock()
	{
		cout << m_brand << " memory is saving files ... ..." << endl;
	}
};

//电脑类
class Computer 
{
public:
	Computer(CPU* cpu,GPU* gpu, memory* mm) 
	{
		this->m_cpu = cpu;
		this->m_gpu = gpu;
		this->m_mm = mm;
	}
	void assembling() 
	{
		m_cpu->compute();
		m_gpu->display();
		m_mm->stock();
	}

	//如果传入栈中调用的对象，应在析构函数中将管理权交由栈控制
	//~Computer() 
	//{
	//}

	~Computer() 
	{
		if (m_cpu!=NULL)
		{
			delete m_cpu;
			m_cpu = NULL;
		}
		if (m_gpu!=NULL)
		{
			delete m_gpu;
			m_gpu = NULL;
		}
		if (m_mm!=NULL)
		{
			delete m_mm;
			m_mm = NULL;
		}
		cout << "computer 析构函数执行" << endl;
	}
	CPU* m_cpu;
	GPU* m_gpu;
	memory* m_mm;
};
//do函数
void doAssembling601() 
{
	//先组装一台Intel牌电脑
	IntelCPU intelCPU;
	IntelGPU intelGPU;
	IntelMemory intelMm;
	
	Computer computer(&intelCPU,&intelGPU,&intelMm);
	computer.assembling();

	//分割线
	cout << "-----------------------601分割线-----------------------" << endl;
	
	//再组装一台Lenovo牌电脑
	LenovoCPU leCPU;
	LenovoGPU leGPU;
	LenovoMemory leMm;
	Computer computer2(&leCPU, &leGPU, &leMm);
	computer2.assembling();
	cout << "-----------------------601分割线-----------------------" << endl;

	//再组装一台杂牌电脑
	IntelCPU intelCPU2;
	LenovoGPU leGPU2;
	IntelMemory intelMs2;
	Computer computer3(&intelCPU2,&leGPU2,&intelMs2);
	computer3.assembling();

}
//do函数第二种
void doAssembling602() 
{
	//先组装一台Intel电脑
	IntelCPU* inCPU = new IntelCPU();
	IntelGPU* inGPU = new IntelGPU();
	IntelMemory* inMm = new IntelMemory();
	Computer* computer = new Computer(inCPU,inGPU,inMm);
	computer->assembling();
	cout << "-----------------------602分割线-----------------------" << endl;

	//再组装一台Lenovo电脑
	LenovoCPU* leCPU = new LenovoCPU();
	LenovoGPU* leGPU = new LenovoGPU();
	LenovoMemory* leMm = new LenovoMemory();
	Computer* computer2 = new Computer(leCPU,leGPU,leMm);
	computer2->assembling();
	cout << "-----------------------602分割线-----------------------" << endl;

	//再组装一台杂牌电脑
	LenovoCPU* leCPU2 = new LenovoCPU();
	IntelGPU* inGPU2 = new IntelGPU();
	LenovoMemory* leMm2 = new LenovoMemory(); //这里要注意：即使之前的部件对象用完已经被delete且置空，但并不影响变量的作用域声明，//也就是在统一作用域 不允许重复定义变量，即使被delete
	Computer* computer3 = new Computer(leCPU,inGPU,leMm);
	computer3->assembling();
}
int main() 
{
	//doAssembling601(); //若使用601方式应将~computer(){}析构函数置空，以免在析构函数过程中 对栈地址调用delete

	doAssembling602();

	system("pause");
	return 0;
}