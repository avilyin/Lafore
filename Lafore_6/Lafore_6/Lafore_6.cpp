#include "Lafore_6.h"
#include "conio.h"


Int::Int() :i(0)
{
}
Int::Int(int a)
{
	i = a;
}
void Int::zero()
{
	i = 0;
}
void Int::init(int a)
{
	i = a;
}
void Int::display()
{
	std::cout << i;
}
Int Int::sum(Int a, Int b)
{
	Int result;
	result.i = a.i + b.i;
	return result;
}
Int::operator int()
{
	return i;
}
Int Int::operator=(Int a)
{
	i = a.i;
	return *this;
	
}
 
void lafore_6_1()
{
	Int result, temp;
	Int a(1), b(3);
	
	temp = result = a + b;
	std::cout << a << " + " << b << " = " << result;
	std::cout << "\n";
	


}

unsigned int tollBooth::getTotalNumberOfCars()
{
	return totalNumberOfCars;
}
double tollBooth::getTotalMoneyCollected()
{
	return totalMoneyCollected;
}
void tollBooth::payingCar()
{
	totalNumberOfCars++;
	totalMoneyCollected += 0.5;
}
void tollBooth::nopayCar()
{
	totalNumberOfCars++;
}
tollBooth::tollBooth()
{
	totalNumberOfCars = 0;
	totalMoneyCollected = 0;
}
void tollBooth::display()
{
	std::cout << "Total number of cars = " << totalNumberOfCars << "\n";
	std::cout << "Total money collected = " << totalMoneyCollected << "\n";
}

void Time::setTime()
{
	char dymmy;
	std::cout << "Enter time in format hh:mm:ss :";
	std::cin >> hours >> dymmy >> minutes >> dymmy
		>> seconds;
}
Time::Time():hours(0), minutes(0), seconds(0)
{
	
}
Time::Time(int h, int m, int s)
{
	hours = h;
	minutes = m;
	seconds = s;
}

Time Time::operator+(const Time & t1)
{
	Time sum;
	long tsec = totalSeconds(*this) + totalSeconds(t1);
	sum = sum.totalSecondsToTime(tsec);
	return sum;
	
}

void Time::showTime()
{
	std::cout << hours << ":" << minutes << ":" << seconds << "\n";
}

long Time::totalSeconds(const Time &t)
{
	return t.hours * 3600 + t.minutes * 60 + t.seconds;

}
Time Time::totalSecondsToTime(long & tsec)
{
	Time t;
	tsec %= 43200;
	t.hours = tsec / 3600;
	t.minutes = (tsec - t.hours * 3600) / 60;
	t.seconds = tsec - t.hours * 3600 - t.minutes * 60;
	return t;
}


	void Date::setDate()
	{
		char dymmy;
		std::cin >> day >> dymmy >> month >> dymmy >> year;
	}
	void Date::showDate()
	{
		std::cout << day << "/" << month << "/" << year << "\n";
	}


enum etype { laborer, secretary, manager, accountant, executive, researcher };


void Employee::setEmployee() 
{
	std::cout << "Enter Employee number: ";
	std::cin >> number;
	std::cout << "Enter Employee compensation: ";
	std::cin >> compensation;
}

void Employee::showEmployee()
{
	std::cout << "Employee number is " << number << ". Employee compensation is " << compensation << "\n";
}

void Employee2::setEmployee()
{
	std::cout << "Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher:";

	char userInput2;
	std::cin >> userInput2;
	switch (userInput2)
	{
	case ('l'): empType = laborer; break;
	case ('s'): empType = secretary; break;
	case ('m'): empType = manager; break;
	case ('a'): empType = accountant; break;
	case ('e'): empType = executive; break;
	case ('r'): empType = researcher; break;
	}

	Employee::setEmployee();
}

void Employee2::showEmployee() 
{
	std::cout << "Employee type: ";
	switch (empType)
	{
	case (laborer): std::cout << "laborer"; break;
	case (secretary): std::cout << "secretary"; break;
	case (manager): std::cout << "manager"; break;
	case (accountant): std::cout << "accountant"; break;
	case (executive): std::cout << "executive"; break;
	case (researcher): std::cout << "resercher"; break;
	}
	std::cout << "\n";

	Employee::showEmployee();

}

Angle Angle::setAngle() 
{
	std::cout << "Enter Angle. degree minutes direction: ";
	std::cin >> degrees >> minutes >> direction;
	return *this;
}

void Angle::displayAngle() 
{
	std::cout << degrees << " deg " << minutes << " min "  << direction << "\n";
}

Angle::Angle() 
{
	degrees = 0;
	minutes = 0;
	direction = 'X';
}

Angle::Angle(int deg, float min, char dir)
{
	degrees = deg;
	minutes = min;
	direction = dir;
}

void lafore_6_2()
{
	tollBooth t;
	char input = ' ';
	std::cout << "Input p to add paying car, input n to add nopaycar, input e for exit \n";
	while (true) 
	{
		input = _getche();
		if (input == 'p') t.payingCar();
		if (input == 'n') t.nopayCar();
		if (input == 27) break;

  	}
	std::cout << "\n";
	std::cout << "Total number of cars = " << t.getTotalNumberOfCars() << "\n";
	std::cout << "Total money collected = " << t.getTotalMoneyCollected() << "\n";
}

void lafore_6_3()
{
	Time t1(5, 4, 22);
	Time t2(1,15,59);
	Time t3;
	t3 = t1 + t2;
	t3.showTime();
}

void lafore_6_4()
{
	Employee e1, e2;
	e1.setEmployee();
	e2.setEmployee();
	e1.showEmployee();
	e2.showEmployee();
}

void lafore_6_6() 
{
	Employee2 e1, e2;
	e1.setEmployee();
	e2.setEmployee();
	e1.showEmployee();
	e2.showEmployee();
}

void lafore_6_7()
{
	Angle a1(180, 11.5, 'N');
	a1.displayAngle();

	char input = 'x';

	while (true)
	{
		std::cout << "Enter new angle (y/n) ?";
		std::cin >> input;
		if (input == 'n') break;
		if (input == 'y') 
		{
			Angle a;
			a.setAngle();
			a.displayAngle();
		}
		else continue;

	}
	
}

int serial::objectCounter;

void serial::displaySerial()
{
	std::cout << "My number is " << serialNumber << "\n";
}

serial::serial()
{
	objectCounter++;
	serialNumber = objectCounter;
}



void lafore_6_8()
{
	serial s1, s2, s3;
	s3.displaySerial();
	s2.displaySerial();
	s1.displaySerial();
}



	Fraction Fraction::sum(Fraction f1, Fraction f2)
	{
		Fraction result;

		result.numrator = f1.numrator*f2.denumerator + f2.numrator*f1.denumerator;
		result.denumerator = f1.denumerator*f2.denumerator;
		return result;
	}
	void Fraction::setFraction()
	{

		char dymmy;
		std::cin >> numrator >> dymmy >> denumerator;

	}
	void Fraction::showFraction()
	{
		std::cout << numrator << "/" << denumerator << "\n";
	}


void lafore_6_9()
{
	Fraction f1, f2, result;
	char input;
	while (true)
	{
		std::cout << "Enter first fracton: ";
		f1.setFraction();
		std::cout << "Enter second fracton: ";
		f2.setFraction();
		result = Fraction::sum(f1, f2);
		std::cout << "Sum is: ";
		result.showFraction();

		std::cout << "Repeat (y/n)? ";
		std::cin >> input;
		if (input == 'n') break;
	}
}

int Ship::numObjects = 0;

void Ship::setPosition()
{
	std::cout << "Enter latitude \n";
	latititude.setAngle();
	std::cout << "Enter longtitude \n";
	longtitude.setAngle();
}

void Ship::displayShip()
{
	std::cout << "Ship number: " << shipNumber << "\n";
	std::cout << "Ship latitude: "; latititude.displayAngle();
	std::cout << "Ship longtitude: "; longtitude.displayAngle();
}



Ship::Ship()
{
	numObjects++;
	shipNumber = numObjects;
}

void lafore_6_10()
{
	Ship s1, s2, s3;
	std::cout << "1st ship:\n";
	s1.setPosition();
	std::cout << "2nd ship:\n";
	s2.setPosition();
	std::cout << "3th ship:\n";
	s3.setPosition();
	s1.displayShip();
	s2.displayShip();
	s3.displayShip();
}



fraction::fraction() :numerator(0), denumerator(0)
{
}

void fraction::setNumerator(int num)
{
	numerator = num;
}

void fraction::setDenumerator(int denum)
{
	denumerator = denum;
}

int fraction::getNumerator()
{
	return numerator;
}

int fraction::getDeumerator()
{
	return denumerator;
}

fraction fraction::sumFractions(fraction & f1, fraction & f2)
{
	fraction result;
	result.setNumerator(f1.getNumerator() * f2.getDeumerator() + f2.getNumerator()*f1.getDeumerator());
	result.setDenumerator(f1.getDeumerator() * f2.getDeumerator());
	return result;
}

fraction fraction::subsFractions(fraction & const f1, fraction & const f2)
{
	fraction result;
	result.setNumerator(f1.getNumerator()*f2.getDeumerator() - f2.getNumerator()*f1.getDeumerator());
	result.setDenumerator(f1.getDeumerator() * f2.getDeumerator());
	return result;
}

fraction fraction::mulFractions(fraction & const f1, fraction & const f2)
{
	fraction result;
	result.setNumerator(f1.getNumerator() * f2.getNumerator());
	result.setDenumerator(f1.getDeumerator() * f2.getDeumerator());
	return result;
}

fraction fraction::divFractions(fraction & const f1, fraction & const f2)
{
		fraction result;
		result.setNumerator(f1.getNumerator() * f2.getDeumerator());
		result.setDenumerator(f1.getDeumerator() * f2.getNumerator());
		return result;
}

void fraction::showFraction(fraction & const f1)
{
	
	std::cout << f1.getNumerator() << "/" << f1.getDeumerator();
}

void fraction::reduce(fraction & f1)
{
	int num = f1.getNumerator();
	int denum = f1.getDeumerator();
	int NOD;
	while (num!=denum)
	{
		if (num > denum) 
		{
			num = num - denum;
		}
		else 
			denum = denum - num;
		
	}
	NOD = num;
	
	f1.setNumerator(f1.getNumerator() / NOD);
	f1.setDenumerator(f1.getDeumerator() / NOD);
}

void fraction::calcFractions()
{
	fraction firstFraction, secondFraction, result;
	int numerator, denumerator;
	char operation, slash;
	std::cout << "Enter first fraction, operator, and the second fraction: ";
	std::cin >> numerator >> slash >> denumerator >> operation;
	firstFraction.setNumerator(numerator);
	firstFraction.setDenumerator(denumerator);
	std::cin >> numerator >> slash >> denumerator;
	secondFraction.setNumerator(numerator);
	secondFraction.setDenumerator(denumerator);

	switch (operation)
	{
	case ('+'):
	{
		result = fraction::sumFractions(firstFraction, secondFraction); break;
	}

	case ('-'):
	{
		result = fraction::subsFractions(firstFraction, secondFraction); break;
	}

	case ('*'):
	{
		result = fraction::mulFractions(firstFraction, secondFraction); break;
	}

	case ('/'):
	{
		result = fraction::divFractions(firstFraction, secondFraction); break;
	}

	}

    fraction::reduce(result);
	std::cout << "result is ";
	fraction::showFraction(result);
}


void lafore_6_11()
{
	char choice = 'y';

	while (choice != 'n')
	{
		fraction::calcFractions();
		std::cout << "Repeat calculation (y/n)? ";
		std::cin >> choice;
	}
}

void lafore_6_12() 
{
	int denum; 
	fraction f1, f2;
	std::cout << "Enter Denumeratior: ";
	std::cin >> denum;
	std::cout << "    ";

	for (int i = 1; i < denum; i++) 
	{
		f1.setNumerator(i);
		f1.setDenumerator(denum);
		fraction::reduce(f1); std::cout << "  ";
		std::setw(6);  fraction::showFraction(f1);
		
	}
	std::cout << "\n" << "----------------------------------\n";
	
	for (int i = 1 ; i < denum; i++)
	{

		f1.setNumerator(i);
		f1.setDenumerator(denum);
		fraction::reduce(f1);
		fraction::showFraction(f1);
		std::cout << "   ";

		for (int j = 1; j < denum; j++)
		{

			f2.setNumerator(j);
			f2.setDenumerator(denum);
			f2 = fraction::mulFractions(f1, f2);
			fraction::reduce(f2);
			fraction::showFraction(f2);

			if (f2.getDeumerator() < 10)
			{ 
				std::cout << " ";
			}
		 std::cout << " ";
		}
		std::cout << "\n";
	}
	
}
