#include <iostream>
using namespace std;

struct systemunit{
    char* name = new char [20];
    bool having{};
};

struct powersupply{
    char* name = new char [20];
    bool having{};
};

struct motherboard{
    char* name = new char [20];
    bool having{};
};

struct ram{
    char* name = new char [20];
    bool having{};
};

struct ssd{
    char* name = new char [20];
    bool having{};
};

struct bios{
    char* name = new char [20];
    bool having{};
};

struct cmos{
    char* name = new char [20];
    bool having{};
};

struct gpu{
    char* name = new char [20];
    bool having{};
};

struct cpu{
    char* name = new char [20];
    bool having{};
};

struct coolingSystem{
    char* name = new char [20];
    bool having{};
};

struct PC{
    systemunit Systemunit{};
    powersupply Powersupply{};
    motherboard Motherboard{};
    ram RAM{};
    ssd SSD{};
    bios BIOS{};
    cmos CMOS{};
    gpu GPU{};
    cpu CPU{};
    coolingSystem CoolingSystem{};
    int count{};
};
int main() {
    PC p;
    int choice{};
    while (choice != 11) {
        cout
                << "\nEnter component \n1.System unit \n2.Power supply\n3.Motherboard\n4.RAM\n5.SSD\n6.BIOS\n7.CMOS\n8.GPU\n9.CPU\n10.Cooling system \n11.End\n: ";
        cin >> choice;
        switch (choice) {
            case 1 : {
                if (p.Systemunit.having == true)
                {
                    cout << "This component already exists";
                    break;
                }
                cin.ignore();
                cout << "Enter name of system unit : ";
                cin.getline(p.Systemunit.name, 20);
                p.Systemunit.having = true;
                p.count++;
                break;
            }

            case 2: {
                cin.ignore();
                if (p.Powersupply.having == true)
                {
                    cout << "This component already exists";
                    break;
                }
                if (p.Systemunit.having == true) {
                    cout << "Enter power supply : ";
                    cin.getline(p.Powersupply.name, 20);
                    p.Powersupply.having = true;
                    p.count++;
                    break;
                } else {
                    cout << "ERROR: Your PC have not system unit!";
                    cout << "\nTry again(0.Yes,1End app)? :";
                    int tmpChoice{};
                    cin >> tmpChoice;
                    if (tmpChoice == 0) {
                        break;
                    }
                    if (tmpChoice == 1) {
                        choice = 11;
                        break;
                    }
                }
            }

            case 3: {
                if (p.Motherboard.having == true)
                {
                    cout << "This component already exists";
                    break;
                }
                if (p.Powersupply.having == true) {
                    cin.ignore();
                    cout << "Enter motherboard : ";
                    cin.getline(p.Motherboard.name, 20);
                    p.Motherboard.having = true;
                    p.count++;
                    break;
                } else {
                    cout << "ERROR:Your PC have not power supply!";
                    cout << "\nTry again(0.Yes,1End app)? :";
                    int tmpChoice{};
                    cin >> tmpChoice;
                    if (tmpChoice == 0) {
                        break;
                    }
                    if (tmpChoice == 1) {
                        choice = 11;
                        break;
                    }
                }
            }

            case 4: {
                if (p.RAM.having == true)
                {
                    cout << "This component already exists";
                    break;
                }
                if (p.Motherboard.having == true) {
                    cin.ignore();
                    cout << "Enter RAM : ";
                    cin.getline(p.RAM.name, 20);
                    p.RAM.having = true;
                    p.count++;
                    break;
                } else {
                    cout << "ERROR:Your PC have not motherboard";
                    cout << "\nTry again(0.Yes,1End app)? :";
                    int tmpChoice{};
                    cin >> tmpChoice;
                    if (tmpChoice == 0) {
                        break;
                    }
                    if (tmpChoice == 1) {
                        choice = 11;
                        break;
                    }
                }
            }

            case 5: {
                if (p.SSD.having == true)
                {
                    cout << "This component already exists";
                    break;
                }
                if (p.Motherboard.having == true) {
                    cin.ignore();
                    cout << "Enter SSD :";
                    cin.getline(p.SSD.name, 20);
                    p.SSD.having = true;
                    p.count++;
                    break;
                } else {
                    cout << "ERROR:Your PC have not motherboard";
                    cout << "\nTry again(0.Yes,1End app)? :";
                    int tmpChoice{};
                    cin >> tmpChoice;
                    if (tmpChoice == 0) {
                        break;
                    }
                    if (tmpChoice == 1) {
                        choice = 11;
                        break;
                    }
                }
            }

            case 6: {
                if (p.BIOS.having == true)
                {
                    cout << "This component already exists";
                    break;
                }
                if (p.CMOS.having == true) {
                    cin.ignore();
                    cout << "Enter BIOS : ";
                    cin.getline(p.BIOS.name, 20);
                    p.BIOS.having = true;
                    p.count++;
                    break;
                } else {
                    cout << "ERROR:Your PC have not CMOS";
                    cout << "\nTry again(0.Yes,1End app)? :";
                    int tmpChoice{};
                    cin >> tmpChoice;
                    if (tmpChoice == 0) {
                        break;
                    }
                    if (tmpChoice == 1) {
                        choice = 11;
                        break;
                    }
                }
            }

            case 7:
                if (p.CMOS.having == true)
                {
                    cout << "This component already exists";
                    break;
                }
                if (p.Motherboard.having == true) {
                    cin.ignore();
                    cout << "Enter CMOS : ";
                    cin.getline(p.CMOS.name, 20);
                    p.CMOS.having = true;
                    p.count++;
                    break;
                } else {
                    cout << "ERROR:Your PC have not motherboard";
                    cout << "\nTry again(0.Yes,1End app)? :";
                    int tmpChoice{};
                    cin >> tmpChoice;
                    if (tmpChoice == 0) {
                        break;
                    }
                    if (tmpChoice == 1) {
                        choice = 11;
                        break;
                    }
                }

            case 8: {
                if (p.GPU.having == true)
                {
                    cout << "This component already exists";
                    break;
                }
                if (p.Motherboard.having == true) {
                    cin.ignore();
                    cout << "Enter GPU : ";
                    cin.getline(p.GPU.name, 20);
                    p.GPU.having = true;
                    p.count++;
                    break;
                } else {
                    cout << "ERROR:Your PC have not motherboard";
                    cout << "\nTry again(0.Yes,1End app)? :";
                    int tmpChoice{};
                    cin >> tmpChoice;
                    if (tmpChoice == 0) {
                        break;
                    }
                    if (tmpChoice == 1) {
                        choice = 11;
                        break;
                    }
                }

                case 9: {
                    if (p.CPU.having == true)
                    {
                        cout << "This component already exists";
                        break;
                    }
                    if (p.Motherboard.having == true) {
                        cin.ignore();
                        cout << "Enter CPU : ";
                        cin.getline(p.CPU.name, 20);
                        p.CPU.having = true;
                        p.count++;
                        break;
                    } else {
                        cout << "ERROR:Your PC have not motherboard";
                        cout << "\nTry again(0.Yes,1End app)? :";
                        int tmpChoice{};
                        cin >> tmpChoice;
                        if (tmpChoice == 0) {
                            break;
                        }
                        if (tmpChoice == 1) {
                            choice = 11;
                            break;
                        }
                    }

                    case 10: {
                        if (p.CoolingSystem.having == true)
                        {
                            cout << "This component already exists";
                            break;
                        }
                        if (p.Powersupply.having == true) {
                            cin.ignore();
                            cout << "Enter Cooling sytem : ";
                            cin.getline(p.CoolingSystem.name, 20);
                            p.CoolingSystem.having = true;
                            p.count++;
                            break;
                        } else {
                            cout << "ERROR:Your PC have not Power Supply";
                            cout << "\nTry again(0.Yes,1End app)? :";
                            int tmpChoice{};
                            cin >> tmpChoice;
                            if (tmpChoice == 0) {
                                break;
                            }
                            if (tmpChoice == 1) {
                                choice = 11;
                                break;
                            }
                        }
                    }

                }
            }

        }
        if (p.count == 10) {
            cout << "PC is ready for work !";
            break;
        }
    }
    return 0;
}