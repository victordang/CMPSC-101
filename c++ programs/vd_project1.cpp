// Victor Dang
// September 9 , 2014
// This program will convert Brazillian Reals to US dollars



#include <iostream>
using namespace std;

int main()
{
    
    
	// variables
    
	int brl;
	double usDollar;
    
	// constant
    
	const double BRL_TO_USD = 0.436414;
    
    
    
	// output to the user and input to the user
	cout << "Currency Conversion \n";
	cout << "Written by Victor Dang \n";
	cout << "This program will tell you the US dollar equivalent of Brazillian reals (BRL). \n";
	cout << "The current conversion rate is 1 BRL = .436414 USD. \n";
	cout << "Please enter an amount in reals :  ";
	cin >> brl;
    
	//calculations
	usDollar = brl * BRL_TO_USD;
    
    
    //output of Reals entered converted into USD 
	cout << brl << " reals converts to $" << usDollar << " US \n ";
    
    
    
    
	return 0;
}

