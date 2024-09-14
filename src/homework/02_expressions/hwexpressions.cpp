#include "hwexpressions.h"

// Declare variables
const double tax_rate

//example
int add_numbers(int num1, int num2)
{
	return num1 + num2;
}

//write function code here

double get_sales_tax_amount(double meal_amount)
{
double product = tax_rate * meal_amount;
// return product; --> When i ran the test i realized that I was treating 6.75% as a number and forgetting to divide by 100 (6.75/100)
product = product/100;
return product;

}


double get_tip_amount (double meal_amount, double tip_rate)
{
double product = meal_amount * tip_rate;
return product;

}
