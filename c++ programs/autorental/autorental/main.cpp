#include<iostream>
using namespace std;

int main()
{ //VARIABLE LIST
	char
    typeOfCar;             //Denotes the type of car the customer wants to rent
    
	int
    days,                  //Projected number of days
    miles,                 //Projected number of miles
    weeks;                 //Number of weeks
    
	double
    compactDay,            //Cost of compact daily plan
    luxuryDay,             //Cost of luxury daily plan
    compactWeek,           //Cost of compact weekly plan
    luxuryWeek,            //Cost of luxury weekly plan
    comDifference,         //The difference between weekly and daily compact car costs
    luxDifference;         //The difference between weekly and daily luxury car costs
    
    //CONSTANT LIST
	const double
    COMDAY = 17.00,        //Daily cost to rent a comcapct car
    LUXDAY = 21.00,        //Daily cost to rent a luxury car
    COMMILE = 0.28,        //Cost per mile to rent a compact car
    LUXMILE = 0.35,        //Cost per mile to rent a luxury car
    COMWEEK = 145.00,      //Weekly cost to rent a copact car
    LUXWEEK = 199.00,      //Weekly cost to rent a luxury car
    COMGAS = 3.50,         //Cost per gallon of gas to rent a compact car
    LUXGAS = 3.65;         //Cost per gallon of gas to rent a luxury car
    
	const int
    COMMPG = 30,           //Fuel efficiency of a compact car
    LUXMPG = 24;           //Fuel efficiency of a luxury car
    
	
    //User enters information
	cout << "Please enter the following information:" << endl;
	cout << endl;
	cout << "Type of car: ";
	cin >> typeOfCar;
	while (typeOfCar != 'C' && typeOfCar != 'c' && typeOfCar != 'L' && typeOfCar != 'l')
	{
		cout << "Please re-enter: ";
		cin >> typeOfCar;
	}
	cout << endl;
	cout << "Projected number of miles: ";
	cin >> miles;
	cout << endl;
	cout << "Projected number of days: ";
	cin >> days;
	cout << endl;
	weeks = days / 7;
	if (days % 7 != 0)
	{
		weeks = weeks + 1;
	}
    
	//Compact Branch
	if (typeOfCar == 'C' || typeOfCar == 'c')
	{
		compactDay = (COMDAY * days) + (COMMILE * miles);
		compactWeek = (COMWEEK * weeks) + ((miles * COMGAS) / COMMPG);
		cout << "The cost of the compact daily plan would be: $" << compactDay << endl;
		cout << "The cost of the weekly compact plan would be: $" << compactWeek << endl;
		if (compactDay > compactWeek)
		{
			comDifference = compactDay - compactWeek;
			cout << "By choosing the weekly plan, the customer will save $" << comDifference;
		}
		else
		{
			comDifference = compactWeek - compactDay;
			cout << "By choosing the daily plan, the customer will save $" << comDifference;
		}
	}
	
	//Luxury Branch
	else
	{
		luxuryDay = (LUXDAY * days) + (LUXMILE * miles);
		luxuryWeek = (LUXWEEK * weeks) + ((miles * LUXGAS) / LUXMPG);
		cout << "The cost of the luxury daily plan would be: $" << luxuryDay << endl;
		cout << "The cost of the luxury weekly plan would be: $" << luxuryWeek << endl;
		if (luxuryDay > luxuryWeek)
		{
			luxDifference = luxuryDay - luxuryWeek;
			cout << "By choosing the weekly plan, the customer will save: $" << luxDifference;
		}
		else
		{
			luxDifference = luxuryWeek - luxuryDay;
			cout << "By chosing the daily plan, the custmer will save: $" << luxDifference;
		}
	}
    
	return 0;
}
