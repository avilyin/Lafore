#pragma once
#include <iostream>
#include <iomanip>

class Int 
{
public:
	Int();
	Int(int a);
	
	void zero();
	void init(int a);
	void display();
	Int sum(Int a, Int b);
	operator int();
	Int operator = (Int a);
//private:
	int i;
};

class tollBooth {
private:
	unsigned int totalNumberOfCars;
	double totalMoneyCollected;
public:
	unsigned int getTotalNumberOfCars();
	double getTotalMoneyCollected();
	void payingCar();
	void nopayCar();
	tollBooth();
	void display();
};

class Time
{
private:
	int hours, minutes, seconds;
	long totalSeconds(const Time &t);

	Time totalSecondsToTime(long & tsec);

public:
	void setTime();

	Time();
	Time(int h, int m, int s);

	void showTime();

	Time operator+(const Time & t1);



};

class Date
{
private:
	int day, month, year;
public:
	void setDate();
	void showDate();
};

enum etype;

class Employee
{
    private:
	int number; double compensation;
public:
	void setEmployee();
	void showEmployee();
};

class Employee2:public Employee 
{
private:
	Date dateOfEmployment;
	etype empType;
public:
	void setEmployee();
	void showEmployee();
};

class Angle {

private:
	int degrees;
	float minutes;
	char direction;
public:
	Angle setAngle();
	void displayAngle();
	Angle();
	Angle(int deg, float min, char dir);
};

class serial
{
	
private:
	int serialNumber;
	static int objectCounter;
public:
	void displaySerial();
	serial();
};

class Fraction
{
private:
	int numrator, denumerator;
public:
	static Fraction sum(Fraction f1, Fraction f2);
	void setFraction();
	void showFraction();
};

class Ship {
private:
	static int numObjects;
	int shipNumber;
	Angle longtitude;
	Angle latititude;
public:
	void setPosition();
	void displayShip();
	Ship();
};


class fraction {
private:
	int numerator, denumerator;
public:
	fraction();
	void setNumerator(int num);
	void setDenumerator(int denum);
	int getNumerator();
	int getDeumerator();
	static fraction sumFractions(fraction & const f1, fraction & const f2);
	static fraction subsFractions( fraction & const f1, fraction & const f2);
	static fraction mulFractions(fraction & const f1, fraction  & const f2);
	static fraction divFractions(fraction  & const f1, fraction  & const f2);
	static void calcFractions();
	static void showFraction(fraction & const f1);
	static void reduce(fraction & f1);
};


void lafore_6_1();
void lafore_6_2();
void lafore_6_3();
void lafore_6_4();
void lafore_6_6();
void lafore_6_7();
void lafore_6_8();
void lafore_6_9();
void lafore_6_10();
void lafore_6_11();
void lafore_6_12();