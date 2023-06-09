#include <iostream>
#include <string.h>

using namespace std;

class Template {
protected:
	string mark{};
	string model{};
public:
	Template() = default;
	
	Template(string mark,string model) {
		this->mark = mark;
		this->model = model;
	}

	void getObject() {
		cout << "Mark : " << this->mark << '\n' << "Model : " << this->model;
	}
};

class CPU : public Template
{
public:
	CPU() = default;

	CPU(string mark, string model) : Template(mark, model)
	{
	}
};

class RAM : public Template
{
public:
	RAM() = default;

	RAM(string mark, string model) : Template(mark, model)
	{
		
	}
};

class SSD : public Template {
public:
	SSD() = default;

	SSD(string mark, string model) : Template(mark, model)
	{
		
	}
};

class PowerSupply : public Template {
public:
	PowerSupply() = default;

	PowerSupply(string model, string mark) : Template(mark, model)
	{
	}
};

class Cooler : public Template {
public:
	Cooler() = default;

	Cooler(string model,string mark ) : Template(model,mark)
	{
	}
};

class GPU : public Template
{
public:
	GPU() = default;

	GPU(string model, string mark) : Template(model, mark)
	{
	}
};


class MotherBoard : public Template {
private:
	CPU cpu;
	RAM ram;
	SSD ssd;
	Cooler cooler;
	PowerSupply powerSupply;
public:
	MotherBoard() = default;

	MotherBoard(string model, string mark) : Template(model, mark) {

	}
	MotherBoard(CPU cpu, RAM ram, SSD ssd, Cooler cooler, PowerSupply powerSupply)
	{
		this->cpu = cpu;
		this->ram = ram;
		this->ssd = ssd;
		this->cooler = cooler;
		this->powerSupply = powerSupply;
	}

	void showAll()
	{
		cout << "\nCPU : \n";
		cpu.getObject();

		cout << "\nRAM : \n";
		ram.getObject();

		cout << "\nSSD : \n";
		ssd.getObject();

		cout << "\nCooler :\n ";
		cooler.getObject();

		cout << "\nPowerSupply :\n ";
		powerSupply.getObject();
		
	}
};

class Frame : public Template {
private:
	MotherBoard motherboard;

public:
	Frame() = default;

	Frame(string model, string mark,MotherBoard motherboard) : Template(model, mark) {
		this->motherboard = motherboard;
	}

	void ShowAll()
	{
		cout << "Frame : \nMark : " << this->mark << "\nModel : " << this->model << "\nMotherboard : ";
		motherboard.showAll();

	}

};

int main()
{
	CPU n1("Core I5", "Intel");
	RAM n2("Trident Z", "G.SKILL");
	PowerSupply n3("S-250", "Smun");
	Cooler n4(" TH120 ARGB", "Thermaltake");
	SSD n5(" P4510", "Intel");
	GPU n6("RTX 4090", "NVIDIA");
	MotherBoard n7(n1, n2, n5, n4, n3);
	Frame Final("OPF-1", "Empricus",n7);

	Final.ShowAll();

	return 0;
}
