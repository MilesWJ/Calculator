#include "Calculator.h"
#include <iostream>

void Calculator::addition(double num1, double num2)
{
	double answer = num1 + num2;
	std::cout << "\nThe sum of " << num1 << " and " << num2 << " is " << answer << "!" << std::endl;
}

void Calculator::subtraction(double num1, double num2)
{
	double answer = num1 - num2;
	std::cout << "\nThe difference of " << num1 << " and " << num2 << " is " << answer << "!" << std::endl;
}

void Calculator::multiplication(double num1, double num2)
{
	double answer = num1 * num2;
	std::cout << "\nThe product of " << num1 << " and " << num2 << " is " << answer << "!" << std::endl;
}

void Calculator::division(double num1, double num2)
{
	double answer = num1 / num2;
	std::cout << "\nThe difference of " << num1 << " and " << num2 << " is " << answer << "!" << std::endl;
}

void Calculator::calculate(double number1, double number2, int operation)
{
	switch (operation)
	{
	case 1:
		addition(number1, number2);
		break;
	case 2:
		subtraction(number1, number2);
		break;
	case 3:
		multiplication(number1, number2);
		break;
	case 4:
		division(number1, number2);
		break;
	default:
		std::cout << operation << " is an invalid opertation..." << std::endl;
		break;
	}
}