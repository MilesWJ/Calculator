#pragma once
class Calculator
{
public:

	double number1;
	double number2;
	int operation;

	void addition(double num1, double num2);

	void subtraction(double num1, double num2);

	void multiplication(double num1, double num2);

	void division(double num1, double num2);

	void calculate(double number1, double number2, int operation);
};