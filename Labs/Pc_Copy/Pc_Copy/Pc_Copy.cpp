#include <string>
#include <cstring>
#include <iostream>
using namespace std;

class PowerSupply
{
    string mark{};
    string model{};
    uint16_t power{};
public:
    PowerSupply() = default;

    PowerSupply(string model, string mark, uint16_t power)
    {
        this->mark = mark;
        this->model = model;
        this->power = power;
    }

    friend ostream& operator <<(ostream& os, const PowerSupply& other)
    {
        os << "\n\nPower supply:\nMark : " << other.mark << "\nModel : " << other.model << "\nPower : " << other.power;
        return os;
    }
};

class PCI {
    string form{};
public:
    PCI() = default;

    PCI(string form)
    {
        this->form = form;
    }

    friend ostream& operator <<(ostream& os, const PCI& other)
    {
        os << "\n\nPCI :\nForm:" << other.form;
        return os;
    }


};

class CPU {
    string mark{};
    string model{};
public:
    CPU() = default;

    CPU(string mark, string model)
    {
        this->mark = mark;
        this->model = model;
    }

    friend ostream& operator << (ostream& os, const CPU& other)
    {
        os << "\n\nCPU :\nMark : " << other.mark << "\nModel : " << other.model;
        return os;
    }
};

class Video_Card
{
    string mark{};
    string model{};
public:
    Video_Card() = default;

    Video_Card(string mark, string model)
    {
        this->mark = mark;
        this->model = model;
    }

    friend ostream& operator <<(ostream& os, const Video_Card& other)
    {
        os << "\n\nVideoCard : \nMark :" << other.mark << "\nModel : " << other.model;
        return os;
    }
};

class MotherBoard {
    string mark{};
    string model{};
    PCI pci{ "PCI-X" };
    CPU cpu{};
    Video_Card videocard{};
public:
    MotherBoard() = default;

    MotherBoard(string mark, string model, CPU cpu, const Video_Card videocard)
    {
        this->mark = mark;
        this->model = model;
        this->cpu = cpu;
        this->videocard = videocard;
    }

    friend ostream& operator<<(ostream& os, const MotherBoard other)
    {
        os << "\n\nMotherboard :\nMark : " << other.mark << "\nModel : " << other.model << other.cpu << other.videocard << other.pci;
        return os;
    }



};

class frame {
private:
    MotherBoard motherboard{};
    PowerSupply powersupply{};
    string form{};
public:

    frame(const frame& other)
    {
        this->form = other.form;
        this->motherboard = other.motherboard;
        this->powersupply = other.powersupply;
    }
    frame(string form, const MotherBoard motherboard, const PowerSupply powersupply)
    {
        this->form = form;
        this->motherboard = motherboard;
        this->powersupply = powersupply;
    }



    friend ostream& operator << (ostream& os, const frame& other)
    {
        os << "Form of frame : " << other.form << other.powersupply << other.motherboard;
        return os;
    }
};

int main()
{
    PowerSupply power("TPN-DAO9", "HP", 150);
    CPU cpu("AMD RYZEN", "2950X");
    Video_Card videocard("NVIDEA", "RTX-4090");
    MotherBoard motherboard("ASUS", "TUF X299 MARK 2", cpu, videocard);
    frame frame1("ITX", motherboard, power);
    cout << "Fist : " << endl << frame1;

    frame frame_copied{ frame1 };

    cout << "\nCopied:" << endl << frame_copied;

    return 0;
}