#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b;
}
//Vladyslav Bohdanenko
int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}
//Vitau vsux
int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
