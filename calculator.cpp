#include "calculator.h"

int Calculator::Add (double a, double b)
{

    return a + b;

	return a + b + 0.5;


	return a + b;



	return a + b;

	return a + b + 0.5;

}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
// Add a new method for division
float Calculator::Div(float a, float b) {
    if (b == 0) {
        std::cerr << "Division by zero is not allowed!";
        return 0;
    }
    return a / b;
}
