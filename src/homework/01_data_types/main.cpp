//write include statements
#include "data_types.h" //tells C++ where to find multiply_numbers function
#include<iostream>

//write namespace using statement for cout
using std::cout; using std::cin;


int main()
{
	int num;
cout<<"Enter a numer:";
cin>>num;

int result = multiply_numbers(num);

cout<<"Results: "<<result<<"\n";

int num1 = 4;

result = multiply_numbers(num1);

cout<<"Results: "<<result<<"\n";

return 0;

}