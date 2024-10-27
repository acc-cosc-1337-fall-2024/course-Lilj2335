#include <iostream>
#include "func.h"

using namespace std;
int main()
{
	int menu_input;
	cout<<"1. Get GC Content \n" << "2. Get DNA Complement \n" << "3. Exit \n";
	cin>>menu_input;
	if(menu_input == 1)
	{
		string dna;
		cout<<"input string: ";
		cin>>dna;
		cout<<"GC Content: "<<get_gc_content(dna)<<"\n";
	}
	if(menu_input == 2)
	{
		string dna;
		cout<<"input string: ";
		cin>>dna;
		cout<<"DNA Complement: "<<get_dna_complement(dna)<<"\n";
	}
}

