#include "Lafore_4.h"


struct Phone
{
public:
	int areaCode, exchange, number;
	Phone(int area, int exch, int numb) : areaCode(area), exchange(exch), number(numb)	{}
	Phone() : areaCode(0), exchange(0), number(0)	{}
	void display() 
	{
		std::cout << " (" << areaCode << ") " << exchange << "-" << number << "\n";
	}
};

struct Point {
public:
	int x, y;
	Point sum(const Point & p1, const Point & p2)
	{
		Point result;
		result.x = p1.x + p2.x;
		result.y = p1.y + p2.y;
		return result;
	}
	void showPoint(const Point & p1)
	{
		std::cout << p1.x << " " << p1.y << "\n";
	}
};

struct Distance {
	int feet;
	double inches;
	void setDistance() 
	{
		std::cin >> feet >> inches;
	}
};

struct Volume {

	Distance length, width, height;
	void setVolume()
	{
		std::cout << "Enter first distance (feet inches): "; length.setDistance();
		std::cout << "Enter second distance (feet inches): "; width.setDistance();
		std::cout << "Enter third distance (feet inches): "; height.setDistance();
	}
	double calcVolume()
	{
		double volume = (length.feet + length.inches / 12) * (width.feet + width.inches / 12) * (height.feet + height.inches / 12);
		std::cout << "Volume =  " << volume << "\n";
		return volume;
	}
};

struct Date
{
	int day, month, year;
	void setDate()
	{
		char dymmy;
		std::cin >> day >> dymmy >> month >> dymmy >> year;
	}
	void showDate()
	{
		std::cout << day << "/" << month << "/" << year << "\n";
	}
};

enum etype { laborer, secretary, manager, accountant, executive, researcher };


struct Employee 
{
	int number; double compensation; etype empType; Date dateOfEmployment;
	void setEmployee() 
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
		std::cout << "Enter employee number:";
		std::cin >>  number;

		std::cout << "Enter employee compensation:";
		std::cin >> compensation;

		std::cout << "Enter date of first employment (dd/mm/yyy): ";
		dateOfEmployment.setDate();
	}
	void showEmployee() 
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
		std::cout <<  "Employee Number: " << number << "\n" << "Compensation: " << compensation << "\n" << "Date of Employment: ";
		dateOfEmployment.showDate(); 
		std::cout << "\n";

	}
};

struct Fraction 
{
	int numrator, denumerator;
	Fraction sum(Fraction f1, Fraction f2) 
	{
		Fraction result;

		result.numrator = f1.numrator*f2.denumerator + f2.numrator*f1.denumerator;
		result.denumerator = f1.denumerator*f2.denumerator;
		return result;
	}
	void setFraction() 
	{
		

		char dymmy;
		std::cin >> numrator >> dymmy >> denumerator;
	
	}
	void showFraction() 
	{
		std::cout << numrator << "/" << denumerator << "\n";
	}
};

struct Time
{
	int hours, minutes, seconds;
	void setTime() 
	{
		char dymmy;
		std::cout << "Enter time in format hh:mm:ss :";
		std::cin >> hours >> dymmy >> minutes >> dymmy 
>> seconds;
	}
	void showTime() 
	{
		std::cout << hours << ":" << minutes << ":" << seconds << "\n";
	}

	int totalSeconds() 
	{
		return hours * 3600 + minutes * 60 + seconds;
		
	}
	Time totalSecondsToTime(int & tsec) 
	{
		Time t;
		tsec %= 43200;
		t.hours = tsec / 3600 ;
		t.minutes = (tsec - t.hours * 3600) / 60;
		t.seconds = tsec - t.hours * 3600 - t.minutes * 60;
		return t;
	}

	Time sumTime(Time & t1, Time & t2) 
	{
		Time sum;
		int tsec = t1.totalSeconds() + t2.totalSeconds();
		sum = sum.totalSecondsToTime(tsec);
		return sum;
	}
};

struct fraction {
private:
	int numerator, denumerator;
public:
	fraction() : numerator(0), denumerator(1)
	{
	}
	void setNumerator(int num) { numerator = num; }
	void setDenumerator(int denum) { denumerator = denum
; }
	int getNumerator() { return numerator; }
	int getDeumerator() { return denumerator; }
	fraction sumFractions(fraction f1, fraction f2)
	{
		fraction result;
		result.setNumerator(f1.numerator*f2.denumerator + f2.numerator*f1.denumerator);
		result.setDenumerator(f1.denumerator * f2.denumerator);
		return result;
	}
	fraction subsFractions(fraction f1, fraction f2)
	{
		fraction result;
		result.setNumerator(f1.numerator*f2.denumerator - f2.numerator*f1.denumerator);
		result.setDenumerator(f1.denumerator * f2.denumerator);
		return result;
	}
	fraction mulFractions(fraction f1, fraction f2)
	{
		fraction result;
		result.setNumerator(f1.numerator * f2.numerator);
		result.setDenumerator(f1.denumerator * f2.denumerator);
		return result;
	}
	fraction divFractions(fraction f1, fraction f2)
	{
		fraction result;
		result.setNumerator(f1.numerator * f2.denumerator);
		result.setDenumerator(f1.denumerator * f2.numerator);
		return result;
	}
	void showFraction(fraction f1)
	{
		std::cout << f1.numerator << "/" << f1.denumerator << std::endl;
	}

};

void calcFractions()
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
		result = result.sumFractions(firstFraction, secondFraction); break;
	}

	case ('-'):
	{
		result = result.subsFractions(firstFraction, secondFraction); break;
	}

	case ('*'):
	{
		result = result.mulFractions(firstFraction, secondFraction); break;
	}

	case ('/'):
	{
		result = result.divFractions(firstFraction, secondFraction); break;
	}

	}

	std::cout << "result is ";
	result.showFraction(result);
}


struct Sterling {

	int pounds, shillings, pence, totalOldPence;


	void ConvertNewToOldSterling(double newSterling)
	{
		totalOldPence = static_cast<int>(newSterling * 240);
		pence = totalOldPence % 12;
		shillings = ((totalOldPence - pence) / 12) % 20;
		pounds = (totalOldPence - pence - shillings * 12) / (12 * 20);
	}


	void showOldPound()
	{
		std::cout << pounds << "." << shillings << "." << pence << std::endl;
	}
		
};

void lafore_4_1()
{
	Phone phoneNumber1(212, 767, 8900), phoneNumber2;
	std::cout << " Enter Phone number in format nnn-nnn-nnnn" << "\n";
	char space;
	std::cin >> phoneNumber2.areaCode >> space >> phoneNumber2.exchange >> space >> phoneNumber2.number;
	std::cout << "My number is "; phoneNumber1.display();
	std::cout << "Your number is "; phoneNumber2.display();
}

void lafore_4_2()
{
	Point p1, p2, result;
	std::cout << "Enter coordinates for p1: ";
	std::cin >> p1.x >> p1.y;
	std::cout << "Enter coordinates for p2: ";
	std::cin >> p2.x >> p2.y;
	result = result.sum(p1, p2);
	std::cout << "Coordinates of p1 + p2 are: ";
	result.showPoint(result);

}

void lafore_4_3()
{
	Volume room;
	room.setVolume();
	room.calcVolume();


}

void lafore_4_4()
{
	Employee emp1, emp2, emp3;
	std::cout << "Enter info for the first Employee (number compensation): ";
	emp1.setEmployee();
	std::cout << "Enter info for the second Employee (number compensation): ";
	emp2.setEmployee();
	std::cout << "Enter info for the third Employee (number compensation): ";
	emp3.setEmployee();

	emp1.showEmployee();
	emp2.showEmployee();
	emp3.showEmployee();
	std::cout << "\n";
}

void lafore_4_5()
{
	Date d1;
	std::cout << "Enter date in dd/mm/yyyy format: ";
	d1.setDate();
	d1.showDate();
}

void lafore_4_6()
{
	
	etype e1;
	std::cout << "Enter employee type (first letter only) laborer, secretary, manager, accountant, executive, researcher: " ;
	char userInput;
	std::cin >> userInput;
	switch (userInput) 
	{
	case ('l'): e1 = laborer; break;
	case ('s'): e1 = secretary; break;
	case ('m'): e1 = manager; break;
	case ('a'): e1 = accountant; break;
	case ('e'): e1 = executive; break;
	case ('r'): e1 = researcher; break;
	}

	std::cout << "Employee type is ";

	switch (e1)
	{
	case (laborer): std::cout << "laborer"; break;
	case (secretary): std::cout << "secretary"; break;
	case (manager): std::cout << "manager"; break;
	case (accountant): std::cout << "accountant"; break;
	case (executive): std::cout << "executive"; break;
	case (researcher): std::cout << "resercher"; break;
	}

	std::cout << "\n ";

}

void lafore_4_7()
{
	Employee e1, e2, e3;
	std::cout << "Enter first employee infomation: \n";
	e1.setEmployee();
	std::cout << "Enter second employee infomation: \n";
	e2.setEmployee();
	std::cout << "Enter third employee infomation: \n";
	e3.setEmployee();
	std::cout << "\nFirst employee information: \n";
	e1.showEmployee();
	std::cout << "Second employee information: \n";
	e2.showEmployee();
	std::cout << "Third employee information: \n";
	e3.showEmployee();
}

void lafore_4_8()
{
	Fraction f1, f2, result;
	std::cout << "Enter the first fraction (x/y): ";
	f1.setFraction();
	std::cout << "Enter the second fraction (x/y): ";
	f2.setFraction();
	result = result.sum(f1, f2);
	std::cout << "Sum: ";
	result.showFraction();


}

void lafore_4_9()
{
	Time t1;
	t1.setTime();
	std::cout << "Total seconds: " << t1.totalSeconds() << "\n";


}

void lafore_4_10()
{

	double pound; Sterling s1;
	std::cout << "Enter new-style Decimal Pound (pound.pence): ";
	std::cin >> pound;
	s1.ConvertNewToOldSterling(pound);
	std::cout << "Old-style Pound: ";
	s1.showOldPound();

}

void lafore_4_11()
{
	Time t1, t2, sum;
	t1.setTime();
	t2.setTime();
	sum = sum.sumTime(t1, t2);
	sum.showTime();
}

void lafore_4_12()
{
	char choice = 'y';

	while (choice != 'n')
	{
		calcFractions();
		std::cout << "Repeat calculation (y/n)? ";
		std::cin >> choice;
	}

}

