#include "Lafore_5.h"
extern int numTimes2 = 0;

double circarea(double radius)
{
	return 3.141592 * radius * radius;
}

double power(double n, int p = 2)
{
	double result = n;
	for (int i = 1; i < p; i++)
	{
	result = result * n;
	}
	return result;
}



void zerosmaller(int & a, int & b)
{
	if (a <= b) a = 0;
	else b = 0;
}

struct Distance {
	int feet;
	double inches;
	void setDistance()
	{
		std::cin >> feet >> inches;
	}
	void showDistance() 
	{
		std::cout << feet << "'" << inches << "''" << "\n";
	}

	Distance lagerDistance(const Distance & d1, const Distance & d2)
{
	Distance larger;
	if (d1.feet + 12 * d1.inches >= d2.feet + 12 * d2.inches) return d1;
	else return d2;
}
};


long hms_to_sec(int h, int min, int sec)
{
	return h * 3600 + min * 60 + sec;
}

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

void Time::setTime()
	{
		char dymmy;
		std::cout << "Enter time in format hh:mm:ss :";
		std::cin >> hours >> dymmy >> minutes >> dymmy
			>> seconds;
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

	Time Time::sumTime(const Time & t1, const Time & t2)
	{
		Time sum;
		long tsec = totalSeconds(t1) + totalSeconds(t2);
		sum = sum.totalSecondsToTime(tsec);
		return sum;
	}


template<typename T> T power(T number, int power = 2)
{
	T result = 1;

	for (int i = 0; i <= power; i++)
	{
		result *= number;
	}
	return result;
}


void swap(int & a, int & b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap(Time & t1, Time & t2)
{
	Time temp;
	temp.hours = t1.hours;
	temp.minutes = t1.minutes;
	temp.seconds = t1.seconds;
	t1.hours = t2.hours;
	t1.minutes = t2.minutes;
	t1.seconds = t2.seconds;
	t2.hours = temp.hours;
	t2.minutes = temp.minutes;
	t2.seconds = temp.seconds;
	}

void showNumberOfTimes()
{
	static int numTimes = 0;
	numTimes++;
	std::cout << "I have been called " << numTimes << " times \n";

}


void showNumberOfTimes2()
{

	numTimes2++;
	std::cout << "I have been called " << numTimes2 << " times \n";

}


void lafore_5_1()
{
	std::cout << "Enter radius:";
	double radius;
	std::cin >> radius;
	std::cout << "Area of Circle: " << circarea(radius) << "\n";
}

void lafore_5_2()
{
	double number; int pow;
	std::cout << "Enter number and power (num pow):"; 
	std::cin >> number >> pow;
	std::cout << "result is:" << power(number, pow) << "\n";
	std::cout << "Enter number:";
	std::cin >> number;
	std::cout << number << "^2 = " << power(number) << "\n";
}


void lafore_5_3()
{
	std::cout << "Enter first int:"; 
	int a, b;
	std::cin >> a;
	std::cout << "Enter second int:";
	std::cin >> b;
	zerosmaller(a, b);
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
}

void lafore_5_4()
{
	Distance d1, d2, larger;
	std::cout << "Enter first distance (feet inches):";
	d1.setDistance();
	std::cout << "Enter second distance (feet inches):";
	d2.setDistance();
	larger = larger.lagerDistance(d1, d2);
	std::cout << "Larger distance is:";
	larger.showDistance();
	std::cout << "\n:";
}

void lafore_5_5()
{
	char input = 'y', dymmy;
	int h, m, s;
	while (input != 'n') 
	{
		std::cout << "Enter time in format 12:59:59  :";
		std::cin >> h >> dymmy >> m >> dymmy >> s;
		std::cout << "Total seconds = " << hms_to_sec(h, m, s) << "\n";
		std::cout << "Repeat (y/n)? :";
		std::cin >> input;
	}
	

}

void lafore_5_6()
{
	Time t1, t2, sum;
	t1.setTime();
	t2.setTime();
	sum = sum.sumTime(t1, t2);
	sum.showTime();
}



void lafore_5_7()
{
	int a = 5;
	float b = 5.1f;
	double c = 5.55;
	char d = 67;
	std::cout << a << "^2= " << power(a, 2) << "\n";
	std::cout << b << "^2= " << power(b, 2) << "\n";
	std::cout << c << "^2= " << power(c, 2) << "\n";
	std::cout << c << "^2= " << power(c) << "\n";
	std::cout << d << "^1= " << power(d,1) << "\n";
}

void lafore_5_8()
{
	int a = 1;
	int b = 33;
	std::cout << "before swap a = " << a << ", b = " << b << "\n";
	swap(a, b);
	std::cout << "after swap a = " << a << ", b = " << b << "\n";
}

void lafore_5_9()
{
	Time t1, t2;
	t1.setTime();
	t2.setTime();
	std::cout << "before swap t1 = ";
	t1.showTime();
	std::cout << "t2 = ";
	t2.showTime();
	swap(t1, t2);
	std::cout << "after swap t1 = ";
	t1.showTime();
	std::cout << "t2 = ";
	t2.showTime();


}

void lafore_5_10()
{
	showNumberOfTimes();
	showNumberOfTimes();
	showNumberOfTimes();

	showNumberOfTimes2();
	showNumberOfTimes2();
	showNumberOfTimes2();
	
}


