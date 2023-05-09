//Если покупатель хочет какой нибудь другой преобрести то продавец еу предлогает следующий по списку,после последнего товара продавец предаставляет весь списос
#include <iostream>
using namespace std;
int main()
{
	float lays_price = 2.50, bizon_price = 5, cola_price = 3.15, mars_prie = 8.75, price{};
	int choose{}, lays = 6, bizon = 9, cola = 5, mars = 2, cout_lays{}, cout_bizon{}, cout_cola{}, cout_mars{}, continue_{}, dicount{}, choose_discount{};
	while (true)
	{
		if (choose == 11)
			break;
		if (true)
			cout << "\t\t\tAll Items" << endl;
		cout << "\t\t1.Lays - " << lays << "\n\t\tPrice :" << lays_price <<
			"\n\t\t2.Bizon - " << bizon << "\n\t\tPrice :" << bizon_price <<
			"\n\t\t3.Cola - " << cola << "\n\t\tPrice :" << cola_price <<
			"\n\t\t4.Mars - " << mars << "\n\t\tPrice :" << mars_prie << endl;
		cout << "Choose item :" << endl;
		cin >> choose;
		if (choose > 4 || choose < 1)
			cout << "Choose correct" << endl;
		switch (choose)
		{
		case 1:
			cout << "Count of lays >";
			cin >> cout_lays;
			if (lays < cout_lays)
			{
				cout << "- We dont have so many lays  " << endl;
				cout << "- You can choose something else or less lays" << endl;
				break;
			}
			else
				price = price + (lays_price * cout_lays);
			lays = lays - cout_lays;
			cout << "Price now - " << price << endl;
			cout << "- Something else ? (1/Yes, 0/No) " << endl;
			cin >> continue_;
			if (continue_ == 0)
			{
				cout << "-Do you have a dicount? (1/Yes, 0/No)" << endl;
				cin >> choose_discount;
				if (choose_discount == 1)
				{
					cout << "What discount do you have?" << endl;
					cin >> dicount;
					cout << "Price now is - " << price - (price / 100 * dicount) << endl;
					cout << "- Good Bye";
				}
				if (choose_discount == 0)
				{
					cout << "Price is - " << price << endl;
					cout << "- Ok.Good bye!";
				}
			cout << "\n- Continue job ? (10/Yes, 11/No)" << endl;
			cin >> choose;
			break;
			}
		
		case 2:
			cout << "Count of bizon :" << endl;
			cin >> cout_bizon;
			if (bizon < cout_bizon)
			{
				cout << "- We dont have so many bizon" << endl;
				cout << "- You can choose something else or less bizon" << endl;
				break;
			}
			if (bizon >= cout_bizon)
				price = price + (bizon_price * cout_bizon);
			bizon = bizon - cout_bizon;
			cout << "Price now - " << price << endl;
			cout << "- Something else ? (1/Yes, 0/No) " << endl;
			cin >> continue_;
			if (continue_ == 0)
			{
				cout << "-Do you have a dicount? (1/Yes, 0/No)" << endl;
				cin >> choose_discount;
				if (choose_discount == 1)
				{
					cout << "What discount do you have?" << endl;
					cin >> dicount;
					cout << "Price now is - " << price - (price / 100 * dicount) << endl;
					cout << "- Good Bye";
				}
				if (choose_discount == 0)
				{
					cout << "Price is - " << price << endl;
					cout << "- Ok.Good bye!";
				}
				cout << "\n- Continue job ? (10/Yes, 11/No)" << endl;
				cin >> choose;
				break;
			}

		case 3:
			cout << "Count of cola :" << endl;
			cin >> cout_cola;
			if (cola < cout_cola)
			{ 
				cout << "- We dont have so many cola" << endl;
			    cout << "- You can choose something else or less bizon" << endl;
				break;
			}
			if (cola >= cout_cola)
				price = price + (cout_cola * cola_price);
			cola = cola - cout_cola;
			cout << "Price now - " << price << endl;
			cout << "- Something else ? (1/Yes, 0/No) " << endl;
			cin >> continue_;
			if (continue_ == 0)
			{
				cout << "-Do you have a dicount? (1/Yes, 0/No)" << endl;
				cin >> choose_discount;
				if (choose_discount == 1)
				{
					cout << "What discount do you have?" << endl;
					cin >> dicount;
					cout << "Price now is - " << price - (price / 100 * dicount) << endl;
					cout << "- Good Bye";
				}
				if (choose_discount == 0)
				{
					cout << "Price is - " << price << endl;
					cout << "- Ok.Good bye!";
				}
				cout << "\n- Continue job ? (10/Yes, 11/No)" << endl;
				cin >> choose;
				break;
			
			}
		
		case 4:
			cout << "Enter count of mars :";
			cin >> cout_mars;
			if (mars < cout_mars)
			{
				cout << "- We dont have so many mars" << endl;
				cout << "- You can choose something else or less =mars" << endl;
				break;
			}
			if (mars >= cout_mars)
				price = price + (cout_mars * mars_prie);
			mars = mars - cout_mars;
			cout << "Price now - " << price << endl;
			cout << "- Something else ? (1/Yes, 0/No) " << endl;
			cin >> continue_;
			if (continue_ == 0)
			{
				cout << "-Do you have a dicount? (1/Yes, 0/No)" << endl;
				cin >> choose_discount;
				if (choose_discount == 1)
				{
					cout << "What discount do you have?" << endl;
					cin >> dicount;
					cout << "Price now is - " << price - (price / 100 * dicount) << endl;
					cout << "- Good Bye";
				}
				if (choose_discount == 0)
				{
					cout << "Price is - " << price << endl;
					cout << "- Ok.Good bye!";
				}
				cout << "\n- Continue job ? (10/Yes, 11/No)" << endl;
				cin >> choose;
				break;

			}
		
		}
	}
	return 0;
}