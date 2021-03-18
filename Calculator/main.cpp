#include <iostream>
#include "Calculator.h"

int main()
{
	Calculator Calculator;

	while (true) {
		std::cout << "\nEnter the first number: ";
		std::cin >> Calculator.number1;

		std::cout << "Enter the second number: ";
		std::cin >> Calculator.number2;

		std::cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter the operation number would you like to perform: ";
		std::cin >> Calculator.operation;

		Calculator.calculate(Calculator.number1, Calculator.number2, Calculator.operation);
	}
}