//write include statements
#include <iostream>
#include "hwexpressions.h"

//Declare variables //meal_amount, tip_rate, tip_amount, tax_amount, and total
double meal_amount;
double tip_rate;
double tip_amount;
double tax_amount;
double total;


//write namespace using statement for cout
using std::cout; using std::cin;
	
int main()
{
	//Get meal amount
	cout<<"Enter meal amount:\n";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	
	//Get tip rate
	cout<<"Enter tip rate\n";
	cin>>tip_rate;
	tip_amount = get_tip_amount(meal_amount,tip_rate);
	total = tip_amount + tax_amount + meal_amount;
	
	//Display receipt
	
	cout<<"Meal amount = $"<<meal_amount<<"\nSales tax = $"<<tax_amount<<"\nTip amount = $"<<tip_amount;
	cout<<"\nTotal = $"<<total;
	return 0;
}
