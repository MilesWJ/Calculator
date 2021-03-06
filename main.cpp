#include <iostream>

class Calculator
{
public:

	double number1;
	double number2;
	int operation;
	enum operation { add = 1, sub, mul, div };

	void addition(double num1, double num2)
	{
		double answer = num1 + num2;
		std::cout << "\nThe sum of " << num1 << " and " << num2 << " is " << answer << "!";
	}

	void subtraction(double num1, double num2)
	{
		double answer = num1 - num2;
		std::cout << "\nThe difference of " << num1 << " and " << num2 << " is " << answer << "!";
	}

	void multiplication(double num1, double num2)
	{
		double answer = num1 * num2;
		std::cout << "\nThe product of " << num1 << " and " << num2 << " is " << answer << "!";
	}

	void division(double num1, double num2)
	{
		double answer = num1 / num2;
		std::cout << "\nThe difference of " << num1 << " and " << num2 << " is " << answer << "!";
	}

	void calculate(double number1, double number2, int operation)
	{
		switch (operation)
		{
		case add:
			Calculator::addition(number1, number2);
			break;
		case sub:
			Calculator::subtraction(number1, number2);
			break;
		case mul:
			Calculator::multiplication(number1, number2);
			break;
		case div:
			Calculator::division(number1, number2);
			break;
		default:
			std::cout << operation << " is an invalid opertation..." << std::endl;
			break;
		}
	}
};

int main()
{
	Calculator Calculator;

	std::cout << "Enter the first number: ";
	std::cin >> Calculator.number1;

	std::cout << "Enter the second number: ";
	std::cin >> Calculator.number2;

	std::cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter the operation number would you like to perform: ";
	std::cin >> Calculator.operation;

	Calculator.calculate(Calculator.number1, Calculator.number2, Calculator.operation);
}
