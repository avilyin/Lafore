#include "Lafore_7.h"

void reverseit(char * string)
{
	int length = strlen(string);
	char temp;
	for (int i = 0; i < length/2; i++)
	{
		temp = string[i];
		string[i] = string[length - i - 1];
		string[length - i - 1] = temp;
	}
		
}



void Lafore_7_1()
{
	char a[25];
	std::cin >> a;
	reverseit(a);
	std::cout << a << "\n";
}

int employee::setData()
{
	std::cout << "Enter Employee number: ";
	if (std::cin >> number)
	{
	std::cout << "Enter Employee name: ";
	std::cin >> name;
	return 0;
	}
	else
	{
		std::cout << "wrong input!\n";
		return 1;
	}

}

void employee::displayData()
{
	std::cout << "Employee N: " << number << ". Name - " << name << "\n";

}


employee::employee()
{
	number = 0;
	name = "";
}




Distance::Distance():feet(0), inches(0)
{
}

void Distance::getdist()
{
	std::cout << "Enter feet : ";
	char str[80];
	std::cin >> str;
	feet = atof(str);

	std::cout << "Enter inches : ";
	std::cin >> str;
	inches = atof(str);
	
}

void Distance::showdist()
{
	std::cout << feet << " ft " << inches << " in \n";
}

Distance Distance::divdist(Distance d1, int n)
{
	float fltfeet = d1.feet + d1.inches / 12.0;
	fltfeet /= n;
	Distance d2;
	d2.feet = int(fltfeet);
	d2.inches = (fltfeet - d2.feet) * 12.0;
	return d2;
}

Distance Distance::sumdist(Distance d1, Distance d2)
{
	float fltfeet = d1.feet + d1.inches / 12.0 + d2.feet + d2.inches / 12.0;
	Distance d3;
	d3.feet = int(fltfeet);
	d3.inches = (fltfeet - d3.feet) * 12.0;
	return d3;
}


void Lafore_7_2()
{
	const int ARRAYSIZE = 10;
	employee empArray[ARRAYSIZE];
	char input = 'n'; int empCount = 0;
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		if (empArray[i].setData()) break;
		empCount++;
		std::cout << "Continue (y/n) \n";
		std::cin >> input;
		if (input == 'n') break;
	}


	for (int i = 0; i < empCount; i++)
	{
		empArray[i].displayData();
	}
}

void Lafore_7_3()
{
	const int ARRAYSIZE = 10;
	Distance distArray[ARRAYSIZE];
	char input = 'n'; int distCount = 0;
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		distArray[i].getdist();
		distCount++;
		std::cout << "Continue (y/n)";
		input = _getche();
		std::cout << std::endl;
		//std::cin >> std::setw(1) >> input;

		if (input == 'n') break;
	}



	Distance sum;
	for (int i = 0; i < distCount; i++)
	{
		sum = Distance::sumdist(distArray[i], sum);
	}

	sum = Distance::divdist(sum, distCount);
	std::cout << "Average = ";
	sum.showdist();
}

int maxint(int array[], int size)
{
	int max = array[0];
	int maxi = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] > max)
		{
			max = array[i];
			maxi = i;
		}
	}
	return maxi;
}

void Lafore_7_4()
{
	const int SIZE = 100;
	int arr[SIZE] = {};
	char input = 'n';
	int number;
	int i = 0;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "\nInput arr[" << i << "] :" ;
		std::cin >> number;
		arr[i] = number;
		std::cout << "Continue (y/n)? ";
		input = _getche();
		if (input == 'n') break;
	}
	std::cout << "Index of max element is " << maxint(arr, SIZE) << std::endl;

}
