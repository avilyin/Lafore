#pragma once
#include <iostream>
extern int numTimes2;
double circarea(double radius);
//double power(double n, int p);

void zerosmaller(int &a, int &b);
struct Distance;
long hms_to_sec(int h, int min, int sec);
template<typename T> T power(T number, int power);

void swap(int & a, int & b);

struct Time
{
	int hours, minutes, seconds;

	void setTime();
	
	void showTime();
	
	long totalSeconds(const Time &t);
	
	Time totalSecondsToTime(long & tsec);


	Time sumTime(const Time & t1, const Time & t2);
	
};

void swap(Time & t1, Time & t2);
//extern int numTimes = 0;
void showNumberOfTimes();
void showNumberOfTimes2();

void lafore_5_1();
void lafore_5_2();
void lafore_5_3();
void lafore_5_4();
void lafore_5_5();
void lafore_5_6();
void lafore_5_7();
void lafore_5_8();
void lafore_5_9();
void lafore_5_10();

