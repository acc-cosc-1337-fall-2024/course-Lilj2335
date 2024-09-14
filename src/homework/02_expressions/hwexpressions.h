// write include statements
#include<iostream>
#include "hwexpressions.h"

//Declare varible //meal_amount, tip_rate, tip_amount, and total 
double meal_amount;
double tip_rate;
double tip_amount;
double tax_amount;
double total;


//write namespace using statement for cout
using std: :cout; using std::cin;

int main()
{
//Get meal amount
cout<<"Please enter meal amount:\n";
cin>>meal_amount;
tax_amount = get_sales_tax_amount(meal_amount);

//Get tip rate
enter tip rate 
cin>>tip_rate;
tip_amount = get_tip_amount(meal amount);
total = tip_amount + tax_amount + meal-amount;

// display receipt 
cout<<" thank for shopping with us\nMeal amount = $" <<"\nSales tax =$ <<tax_amount<<\nTip amount =$<<tip-amount;"



