#include <iostream>

class Calculator
{
public:

	double number1;
	double number2;
	int operation;

	void add(double num1, double num2) // Function for addition.
	{
		double answer = num1 + num2;
		std::cout << "\nThe sum of " << num1 << " and " << num2 << " is " << answer << "!";
	}

	void subtract(double num1, double num2) // Function for subtraction.
	{
		double answer = num1 - num2;
		std::cout << "\nThe difference of " << num1 << " and " << num2 << " is " << answer << "!";
	}

	void multiply(double num1, double num2) // Function for mutiplication.
	{
		double answer = num1 * num2;
		std::cout << "\nThe product of " << num1 << " and " << num2 << " is " << answer << "!";
	}

	void divide(double num1, double num2) // Function for division.
	{
		double answer = num1 / num2;
		std::cout << "\nThe difference of " << num1 << " and " << num2 << " is " << answer << "!";
	}

	void calculate(double number1, double number2, int operation) {

		Calculator Calculator;

		switch (operation) // Switch to run the correct operation type. (If operation > 4, defaults to "invalid")
		{
		case 1:
			Calculator.add(number1, number2);
			break;
		case 2:
			Calculator.subtract(number1, number2);
			break;
		case 3:
			Calculator.multiply(number1, number2);
			break;
		case 4:
			Calculator.divide(number1, number2);
			break;
		default:
			std::cout << operation << " is an invalid opertation..." << std::endl;
			break;
		}

	}
};

int main() // Runs the main function of the calculator.
{
	Calculator Calculator;

	Calculator.number1; // Input for the first number.
	std::cout << "Enter the first number: ";
	std::cin >> Calculator.number1;

	Calculator.number2; // Input for the second number.
	std::cout << "Enter the second number: ";
	std::cin >> Calculator.number2;

	Calculator.operation; // Input for the operation type.
	std::cout << "\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\nEnter the operation number would you like to perform: ";
	std::cin >> Calculator.operation;

	Calculator.calculate(Calculator.number1, Calculator.number2, Calculator.operation);
}
