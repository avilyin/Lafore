#pragma once
#include <iostream>
#include <cstring>
#include <string>
#include <stdlib.h>
#include <conio.h>

void reverseit(char * string);

class employee 
{
private:
	std::string name;
	long number;
	
public:
	int setData();
	void displayData();
	employee();
};

class Distance //English Distance class
{
private:
	int feet;
	float inches;
public:
	Distance();
	void getdist(); //get length from user
	void showdist(); //display distance
	static Distance divdist(Distance d1, int n);
	static Distance sumdist(Distance d1, Distance d2);
};

int maxint(int array[], int size);

void Lafore_7_1();
void Lafore_7_2();
void Lafore_7_3();
void Lafore_7_4();