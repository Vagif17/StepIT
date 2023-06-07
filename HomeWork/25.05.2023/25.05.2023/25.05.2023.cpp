#include <iostream>
#include <string.h>
using namespace std;



class GPU {
	string model{};
	string mark{};
	
public:
	GPU() = default;
	GPU(string model,string mark)
	{
		this->mark = mark;
		this->model = model;
	}
	
	void getinfo() {
		cout << "Model : " << this->model << '\n' << "Mark : " << this->mark;
	}
};

class SSD {
	string mark{};
	string model{};
public:
	SSD() = default;
	SSD(string model, string mark)
	{
		this->mark = mark;
		this->model = model;
	}
	void getinfo() {
		cout << "Model : " << this->model << '\n' << "Mark : " << this->mark;
	}
};

class motherboard {
	string mark{};
	string model{};
public:
	motherboard() = default;
	motherboard(string model, string mark)
	{
		this->mark = mark;
		this->model = model;
	}
	void getinfo() {
		cout << "Model : " << this->model << '\n' << "Mark : " << this->mark;
	}
};

class cooler {
	string mark{};
	string model{};
	int RevolutinsPerSecond{};
public:
	cooler() = default;
	cooler(string model, string mark)
	{
		this->mark = mark;
		this->model = model;
	}
	void getinfo() {
		cout << "Model : " << this->model << '\n' << "Mark : " << this->mark;
	}
};

class PowerSupply {
	int watt{};
	string mark{};
	string model{};
public:
	PowerSupply() = default;
	PowerSupply(string model, string mark,int watt)
	{
		this->mark = mark;
		this->model = model;
		this->watt = watt;
	}
	void getinfo() {
		cout << "Model : " << this->model << '\n' << "Mark : " << this->mark;
	}
};

class CPU {
	string mark{};
	string model{};
public:
	CPU() = default;
	CPU(string model, string mark)
	{
		this->mark = mark;
		this->model = model;
	}
	void getinfo() {
		cout << "Model : " << this->model << '\n' << "Mark : " << this->mark;
	}
};

class RAM {
private:
	string mark{};
	string model{};
public:
	RAM() = default;
	RAM(string model, string mark)
	{
		this->mark = mark;
		this->model = model;
	}
	void getinfo() {
		cout << "Model : " << this->model << '\n' << "Mark : " << this->mark;
	}
};


class frame {
	string mark{};
	string model{};
	CPU Cpu;
	RAM Ram;
	PowerSupply Powersupply;
	cooler Cooler;
	motherboard Motherboard;
	SSD Ssd;
	GPU Gpu;

public:
	frame(string mark,string model,CPU Cpu,RAM Ram,PowerSupply Powersupply,cooler Cooler,motherboard Motherboard,SSD Ssd,GPU Gpu)
	{
		this->mark = mark;
		this->model = model;
		this->Cpu = Cpu;
		this->Ram = Ram;
		this->Powersupply = Powersupply;
		this->Cooler = Cooler;
		this->Motherboard = Motherboard;
		this->Ssd = Ssd;
		this->Gpu = Gpu;
	}

	void ShowAll()
	{
		cout << "Frame :\n Model : " << this->model << "\nMark : " << this->mark;
		cout << "\nCPU :\n";
		Cpu.getinfo();
		
		cout << "\nRAM :\n";
		Ram.getinfo();

		cout << "\nPowersupply :\n";
		Powersupply.getinfo();

		cout << "\nCooler :\n";
		Cooler.getinfo();

		cout << "\nMotherboard :\n";
		Motherboard.getinfo();

		cout << "\nSSD :\n";
		Ssd.getinfo();

		cout << "\nGPU :\n";
		Cpu.getinfo();
	}
};

int main()
{
	CPU n1("Core I5","Intel");
	RAM n2("Trident Z", "G.SKILL");
	PowerSupply n3("S-250", "Smun", 300);
	cooler n4(" TH120 ARGB", "Thermaltake");
	motherboard n5("1424067","Asus");
	SSD n6(" P4510", "Intel");
	GPU n7("RTX 4090", "NVIDIA");
	frame final("OPF-1", "Empricus", n1, n2, n3, n4, n5, n6, n7);
	
	final.ShowAll();
	return 0;
}
