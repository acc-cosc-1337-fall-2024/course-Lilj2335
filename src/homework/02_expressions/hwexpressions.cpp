#include "hwexpressions.h"

//Declare variables
const double tax_rate = 6.75;

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

double get_sales_tax_amount(double meal_amount)
{
	double product = tax_rate * meal_amount;
	product = product/100;
	return product;

}


double get_tip_amount(double meal_amount, double tip_rate)
{
	double product = meal_amount * tip_rate;
	return product;
}
