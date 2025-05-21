#include <iostream>
using namespace std;
#include <string>
//��̬����3 ������װ
//���� ������Ҫ��ɲ���Ϊ CPU(���ڼ���)���Կ�(������ʾ)���ڴ���(���ڲݸ�)
//��ÿ�������װ�ɳ�����࣬ �����ṩ��ͬ���ң�������ͬ�����������Intel���̺�Lenovo����
//�����������ṩ�õ��Թ����ĺ��������ҵ���ÿ����������Ľӿ�
//����ʱ��װ��̨��ͬ�ĵ��Խ��й�����һ̨Intel,һ̨Lenovo�ģ�һ̨��ϵ�

//�������
//CPU����
class CPU 
{
public:
	virtual void compute() = 0;
	string m_brand;
};
//�Կ�������
class GPU 
{
public:
	virtual void display() = 0;
	string m_brand;
};
//�ڴ���������
class memory 
{
public:
	virtual void stock() = 0;
	string m_brand;
};

//�̳���
//IntelCPU��
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
//IntelGPU��
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
//IntelMemory��
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
//LenovoCPU��
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
//LenovoGPU��
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
//LenovoMemory��
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

//������
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

	//�������ջ�е��õĶ���Ӧ�����������н�����Ȩ����ջ����
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
		cout << "computer ��������ִ��" << endl;
	}
	CPU* m_cpu;
	GPU* m_gpu;
	memory* m_mm;
};
//do����
void doAssembling601() 
{
	//����װһ̨Intel�Ƶ���
	IntelCPU intelCPU;
	IntelGPU intelGPU;
	IntelMemory intelMm;
	
	Computer computer(&intelCPU,&intelGPU,&intelMm);
	computer.assembling();

	//�ָ���
	cout << "-----------------------601�ָ���-----------------------" << endl;
	
	//����װһ̨Lenovo�Ƶ���
	LenovoCPU leCPU;
	LenovoGPU leGPU;
	LenovoMemory leMm;
	Computer computer2(&leCPU, &leGPU, &leMm);
	computer2.assembling();
	cout << "-----------------------601�ָ���-----------------------" << endl;

	//����װһ̨���Ƶ���
	IntelCPU intelCPU2;
	LenovoGPU leGPU2;
	IntelMemory intelMs2;
	Computer computer3(&intelCPU2,&leGPU2,&intelMs2);
	computer3.assembling();

}
//do�����ڶ���
void doAssembling602() 
{
	//����װһ̨Intel����
	IntelCPU* inCPU = new IntelCPU();
	IntelGPU* inGPU = new IntelGPU();
	IntelMemory* inMm = new IntelMemory();
	Computer* computer = new Computer(inCPU,inGPU,inMm);
	computer->assembling();
	cout << "-----------------------602�ָ���-----------------------" << endl;

	//����װһ̨Lenovo����
	LenovoCPU* leCPU = new LenovoCPU();
	LenovoGPU* leGPU = new LenovoGPU();
	LenovoMemory* leMm = new LenovoMemory();
	Computer* computer2 = new Computer(leCPU,leGPU,leMm);
	computer2->assembling();
	cout << "-----------------------602�ָ���-----------------------" << endl;

	//����װһ̨���Ƶ���
	LenovoCPU* leCPU2 = new LenovoCPU();
	IntelGPU* inGPU2 = new IntelGPU();
	LenovoMemory* leMm2 = new LenovoMemory(); //����Ҫע�⣺��ʹ֮ǰ�Ĳ������������Ѿ���delete���ÿգ�������Ӱ�������������������//Ҳ������ͳһ������ �������ظ������������ʹ��delete
	Computer* computer3 = new Computer(leCPU,inGPU,leMm);
	computer3->assembling();
}
int main() 
{
	//doAssembling601(); //��ʹ��601��ʽӦ��~computer(){}���������ÿգ��������������������� ��ջ��ַ����delete

	doAssembling602();

	system("pause");
	return 0;
}