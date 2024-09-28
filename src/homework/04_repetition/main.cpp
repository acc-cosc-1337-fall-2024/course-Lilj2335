#include "repetition.h"
#include <iostream>
using std::cout,std::cin;

int main() 
{
	int input_menu;
	
	do
	{
	
	
		cout << "1.Factorial\n 2. Gcd\n  3 Exit\n";
		cin >> input_menu;
		switch (input_menu)
		{
		case 1:
			int FactorialInput;
			cout<< "Please Input a number";
			cin>> FactorialInput;
			cout<<factorial(FactorialInput);
			break;
			
		case 2:
			int GcdInput1,GcdInput2;
			cout<< "Please Enter a number";
			cin>> GcdInput1;
			cout<< "Please enter second number";
			cin>> GcdInput2;
			cout<<gcd (GcdInput1,GcdInput2);
			break;

		case 3:
			cout<< "Please confirmn exit when leaving";
			char exitinput;
			cin>> exitinput;
			if (exitinput!='y')
			{
				input_menu = -3;
			}
			break;


	
		default:
		cout<< "Wrong Information placed";
			break;
		}


	} while (input_menu!= 3);
	return 0;
}










