#include "Lafore_3.h"

void lafore_3_1()
{
	using namespace std;

	cout << "enter a number: ";
	int number;
	cin >> number;
	int numdigits = 1, temp_number = number;
	while (temp_number > 0) 
	{
		temp_number /= 10;
		if (temp_number > 0) numdigits++;

	}

	for (int line = 0; line < 20; line++)
	{
		for (int column = 1; column <=10; column ++)
		{
			cout << setw(numdigits+5) << number * (10*line + column);
		}
		cout << endl;
	}


}

void CelsiusToFarenheit() 
{
	std::cout << "Enter temperature in Celsius: ";
	double Celsius;
	std::cin >> Celsius;
	std::cout << "In Fahrenheit that's: " << Celsius * 1.8 + 32 << std::endl;

}
void FahrenheitToCelsius() 
{

	std::cout << "Enter temperature in Fahrengeit: ";
	double Fahrenheit;
	std::cin >> Fahrenheit;
	std::cout << "In Celsium that's: " << (Fahrenheit - 32) / 1.8 << std::endl;
	
}

void lafore_3_2()
{
	using namespace std;
	int choice;
	cout << "Type 1 to convert Farenheit to Celcius, \n      2 to convert Celsius to Farenheit: ";
	cin >> choice; 
	if (choice == 1) FahrenheitToCelsius();
	else if (choice == 2) CelsiusToFarenheit();
	else cout << "wrong choice" << endl;
}

void lafore_3_3()
{
	using namespace std;
	long number;
	cout << "enter a number: ";
	number = _getche() - 48;
	for (int i = 0; i < 5; i++)
	{
	
		number *= 10;
		number += (_getche() - 48);
	}
	cout << endl <<"number is: " << number << endl;
}

void doMathOperation() 
{
	using namespace std;
	double firstNumber, secondNumber;
	char operation;
	cout << "Enter the first number, operator, second number: ";
	cin >> firstNumber >> operation >> secondNumber;
	double answer;
	switch (operation)
	{
	case ('/'): answer = firstNumber / secondNumber; break;
	case ('*'): answer = firstNumber * secondNumber; break;
	case ('+'): answer = firstNumber + secondNumber; break;
	case ('-'): answer = firstNumber - secondNumber; break;
	}
	cout << "Answer = " << answer << endl;
}

void lafore_3_4()
{
	char answer = '0';
	while (answer != 'n')
	{
		doMathOperation();
		std::cout << "Do Another (y/n)? ";
		std::cin >> answer;
	}
	

}

void lafore_3_5()
{
	for (int line = 1; line <= 20; line ++)
	{

		for (int space = 0; space <= 20 - line; space ++ )  std::cout << " ";
		for (int star = 1; star <= 2*line-1 ; star ++ ) std::cout << "*";
		std::cout << std::endl;

	}
}

void factorial(int number)
{

	
	int factorial = 1;
	for (int i = number; i > 0; i--)
	{
		factorial *= i;
	}
	std::cout << "Factorial of " << number << " = " << factorial << std::endl;
}
void lafore_3_6()
{
	int input;
	
	while (true)
	{
		std::cout << "Input number: ";
		std::cin >> input;
		if (input == 0) break;
		factorial(input);
	}
		

}

void lafore_3_7()
{
	double initialAmount = 0;
	int numberOfYears = 0;
	double interestRate = 0, totalAmount = 0;
	std::cout << "Enter initial amount: "; std::cin >> initialAmount;
	std::cout << "Enter number of years: "; std::cin >> numberOfYears;
	std::cout << "Enter interest rate (percent per year): "; std::cin >> interestRate;
	totalAmount = initialAmount;
	for (int i = 0; i < numberOfYears; i++)
	{
		totalAmount += totalAmount * (interestRate / 100);
	}
	std::cout << "At the end of 10 years you will have: " << totalAmount << " dollars" << std::endl;
}

void AddOldPounds() 
{
	using namespace std;
	struct oldPound1
	{
		int pounds, shilings, pence;
	};

	oldPound1 firstAmount;
	oldPound1 secondAmount;
	oldPound1 total;
	total.pounds = 0; total.shilings = 0; total.pence = 0;
	char dot;
	cout << "enter the first amount: "; cin >> firstAmount.pounds >> dot >> firstAmount.shilings >> dot >> firstAmount.pence;
	cout << "enter the second amount: "; cin >> secondAmount.pounds >> dot >> secondAmount.shilings >> dot >> secondAmount.pence;

	if (firstAmount.pence + secondAmount.pence >= 12)
	{
		total.pence = firstAmount.pence + secondAmount.pence - 12;
		total.shilings += 1;
	}
	else total.pence = firstAmount.pence + secondAmount.pence;

	if (total.shilings + firstAmount.shilings + secondAmount.shilings >= 20)
	{
		total.shilings += firstAmount.shilings + secondAmount.shilings - 20;
		total.pounds = 1;
	}
	else total.shilings += firstAmount.shilings + secondAmount.shilings;

	total.pounds += firstAmount.pounds + secondAmount.pounds;


}

void lafore_3_8()
{
	char input;

	do 
	{
		AddOldPounds();
		std::cout << "Do you wish to continue (y/n)? "; std::cin >> input;
	} while (input != 'n');

}

void lafore_3_9()
{
	using namespace std;
	int guestNumber, chairNumber;
	cout << "Enter number of guests: "; cin >> guestNumber;
	cout << "Enter number of chairs: "; cin >> chairNumber;
	int arrangeNumber = 1;
	for (int i = guestNumber; i > guestNumber-chairNumber; i--) 
	{
		arrangeNumber *= i;
	}
	cout << "Number of arrangements = " << arrangeNumber << "\n";
}

void lafore_3_10()
{
	double initialAmount;
	int numberOfYears = 0;
	double interestRate, finalAmount;
	std::cout << "Enter initial amount: "; std::cin >> initialAmount;
	std::cout << "Enter interest rate (percent per year): "; std::cin >> interestRate;
	std::cout << "Enter final amount: "; std::cin >> finalAmount;
	double totalAmount = initialAmount;
	while (totalAmount < finalAmount)
	{
		totalAmount += totalAmount * (interestRate / 100);
		numberOfYears++;
	}
	
	std::cout << "You need " << numberOfYears << " years to get " << finalAmount << std::endl;
}


class oldPound
{
private:
	
  int pounds, shillings, pence, totalpence;

public:
	oldPound()
	{
		pounds = 0; shillings = 0; pence = 0; totalpence = 0;
	}
  
	void setPounds(int pounds) { this->pounds = pounds; }
	void setShillings(int shillings) { this->shillings = shillings; }
	void setpence(int pence) { this->pence = pence; }

	int getPounds() { return pounds; }
	int getShillings() { return shillings; }
	int getPence() { return pence; }

	void calcTotalPence()
	{
		totalpence = pence + shillings * 12 + pounds * 12 * 20;
	}
	void totalpenceToOldPound()
	{
		pence = totalpence % 12;
		shillings = ((totalpence - pence) / 12) % 20;
		pounds = (totalpence - pence - shillings * 12) / (12 * 20);
	}

	oldPound sumOldPound(oldPound &p1, oldPound &p2)
	{
		

		oldPound result;
		result.totalpence = p1.totalpence + p2.totalpence;
		result.totalpenceToOldPound();
		return result;

	}
	oldPound subsOldPound(oldPound &p1, oldPound &p2)
	{
		

		oldPound result;
		result.totalpence = p1.totalpence - p2.totalpence;
		result.totalpenceToOldPound();
		return result;
	}
	oldPound mulOldPound(oldPound p1, double mul)
	{
	
		oldPound result;
		result.totalpence = static_cast<int>(p1.totalpence * mul);
		result.totalpenceToOldPound();
		return result;
	}
	void showOldPound()
	{
		std::cout << pounds << "." << shillings << "." << pence << std::endl;
	}

	void showTotalPence()
	{
		std::cout << totalpence << std::endl;
	}
};


void lafore_3_11()

{
		using namespace std;
		oldPound firstPound, secondPound, resultPound; double multiplier;
		int pounds, shillings, pence;
		char dot, operation;

	
		cout << "Enter the first number in old pounds, operator, second number: ";
		cin >> pounds >> dot >> shillings >> dot >> pence >> operation;
		firstPound.setPounds(pounds); 
		firstPound.setShillings(shillings);
		firstPound.setpence(pence);
		firstPound.calcTotalPence();
		
		
		if (operation == '*') 
			cin >> multiplier;
		else if ((operation == '+') || (operation == '-'))
		{
			cin >> pounds >> dot >> shillings >> dot >> pence;
			secondPound.setPounds(pounds);
			secondPound.setShillings(shillings);
			secondPound.setpence(pence);
			secondPound.calcTotalPence();
						
		}
		else 
			cout << "unknown operation";

		switch (operation)
		{
		case ('*'): 
		{
			resultPound = resultPound.mulOldPound(firstPound, multiplier);
			break;
		}
		case ('+'): 
		{
			resultPound = resultPound.sumOldPound(firstPound, secondPound);
			break;
		}
		case ('-'): 
		{
			resultPound = resultPound.subsOldPound(firstPound, secondPound);
			break; 
		}

		}

		cout << "result is ";
		resultPound.showOldPound();


		



}

class fraction {
private: 
	int numerator, denumerator;
public:
	fraction() : numerator(0), denumerator(1)
	{
	}
	void setNumerator(int numerator)	{		this->numerator = numerator;	}
	void setDenumerator(int denumerator) { this->denumerator = denumerator; }
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

void lafore_3_12()
{
	char choice = 'y';

	while (choice != 'n')
	{
		calcFractions();
		std::cout << "Repeat calculation (y/n)? ";
		std::cin >> choice;
	}


}
