#include "lafore_2_5.h"

void lafore_2_5()
{
	std::cout << "input letter\n";
	char a;
	std::cin >> a;
	if (isalpha(a)) 
	{
		std::cout << islower(a);
	}
	else std::cout << "you didnt enter letter!\n";

}

void lafore_2_6()
{
	double usdPound = 1.487;
	double usdfranc = 0.172;
	double usdYen = 0.00955;
	double usdAmount;
	
	std::cout << "Input Amonunt of USD" << std::endl;
	std::cin >> usdAmount;
	std::cout << "Pounds - " << usdAmount/usdPound << std::endl;
	std::cout << "Franc - " << usdAmount / usdfranc << std::endl;
	std::cout << "Yen - " << usdAmount / usdYen << std::endl;
}

void lafore_2_7()
{
	std::cout << "Input Celcium temperature:  ";
	double celciumTemp;
	std::cin >> celciumTemp;
	double farenheitTemp = celciumTemp * 9 / 5 + 32;
	std::cout << "Farenheit Temp:  " << farenheitTemp;
}

void lafore_2_8()
{
	int pop1 = 2425785, pop2 = 47, pop3 = 9761;
	
	std::cout << std::setw(8) << std::setfill('.') << "Location" << std::setw(12)  << "Population" << std::endl;
	std::cout << std::setw(8) << std::setfill('.') << "Portcity" << std::setw(12) << pop1 << std::endl;
	std::cout << std::setw(8) << std::setfill('.') << "Hightown" << std::setw(12) << pop2 << std::endl;
	std::cout << std::setw(8) << std::setfill('.') << "Lowville" << std::setw(12) << pop3 << std::endl;

}

void lafore_2_9()
{
	std::cout << "Enter the first fraction: ";
	int a, b, c, d; char dymmychar;
	std::cin >> a >> dymmychar >> b;
	std::cout << "Enter the second fraction: ";
	std::cin >> c >> dymmychar >> d;
	std::cout << "Sum: " << a * d + b * c << "/" << b * d;


}

void lafore_2_10()
{
	using namespace std;
	double old_pounds, old_shillings, old_pence;
		double decimal_pounds;
	cout << "Enter pounds: "; cin >> old_pounds;
	cout << "Enter shillings: "; cin >> old_shillings;
	cout << "Enter pence: "; cin >> old_pence;
	decimal_pounds = old_pounds + old_shillings / 20 + old_pence / (12 * 20);
	decimal_pounds = (round(decimal_pounds * 100)) / 100;
	cout << "Decimal pounds = " << decimal_pounds;

}

void lafore_2_11()
{
	using namespace std;
	class person
	{
	private:
		string Last_name, First_name, Street_adress, Town, State;
	public:
			person(string Last_name, string First_name, string Street_adress, string Town, string State)
		{
			this->Last_name = Last_name;
			this->First_name = First_name;
			this->Street_adress = Street_adress;
			this->Town = Town;
			this->State = State;
			
		}
			void print_person() 
			{
			
				cout << setiosflags(ios::left) << setw(15) << Last_name << setiosflags(ios::left) << setw(15) << First_name <<
					setiosflags(ios::left) << setw(20) << Street_adress << setiosflags(ios::left) << setw(15) << Town <<
					setiosflags(ios::left) << setw(15) << State << endl;

			}
			static void print_header() 
			
			{
				
				cout << setw(15) << setiosflags(ios::left) << "Last Name" << setw(15) << setiosflags(ios::left) << "First_name" <<
					setw(20) << setiosflags(ios::left) <<"Street adress" << setw(15) << setiosflags(ios::left) << "Town"  <<
					setw(15) << setiosflags(ios::left) << "State" << endl;
				cout << "....................................................................." << endl;
			}


	};

	person Jones("Jones", "Bernard", "109 Pine Lane", "Littletown", "MI");
	person Brian("o'Brian", "Coleen", "42 E.99th Ave.", "Bigcity", "NY");
	person Wong("Wong", "Harry", "121-F Alabama St", "Lakeville", "IL");


	list<person> person_list;

	person_list.push_back(Jones);
	person_list.push_back(Brian);
	person_list.push_back(Wong);
	Jones.print_header();
	for (person p : person_list) 
	{
		p.print_person();
	}
	


}

void lafore_2_12()
{
	using namespace std;
	double decimal_pound, defrac;
	cout << "Enter decimal pounds: "; cin >> decimal_pound;
	int old_shillings, old_pence, pounds;
	defrac = decimal_pound - static_cast<int>(decimal_pound);
	pounds = static_cast<int>(decimal_pound);
	old_shillings = static_cast<int>(20*defrac);
	old_pence = 12*(20*defrac-old_shillings);
	cout << "Equivalent in old notation = " << pounds << "." << old_shillings << "." << old_pence;
}
