#include "lafore_2_1.h"


double gallon2cubicFeet()
{
	
	
	std::cout << "input gallons quantity: ";
	double gallons;
	std::cin >> gallons;
	std::cout << "cubicFeet = " <<  gallons / 7.481;
	return gallons / 7.481;
}