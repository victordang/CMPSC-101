//Victor Dang
//  main.cpp
//  version2_apexautorental
// APEX AUTO RENTAL VERSION 2
//  Created by victordang on 10/21/14.
//  Copyright (c) 2014 victordang. All rights reserved.
// This is an updated version for APEX AUTO RENTAL

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    
    
    
//Variable Declaration
    char typeOfCar ; //type of car (c = compact , l = luxury)
    int projMiles; //projected number of miless
    int numOfDays; //number of days
    double dailyPlanCompact; //daily plan of compact car
    double dailyPlanLuxury; // daily plan of luxury car
    double weeklyPlanCompact; // weekly plan of compact car
    double weeklyPlanLuxury; // weekly plan of luxury car
    int weeks; //number of weeks
    double differenceCompact; // difference of compact car plans (weekly and daily)
    double differenceLuxury; // differnce of lxuruy car plans (weekly and daily)
//constants
    
    double DFC_COMPACT = 17.00; // daily fixed cost of compact car
    double DFC_LUXURY = 21.00;// daily fixed cost of luxury car
    double CPM_COMPACT =0.28;//charge per mile of compact car
    double CPM_LUXURY = 0.35;//charge per mile of luxury car
    double WFC_COMPACT = 145.00;// weekly fixed cost of compact car
    double WFC_LUXURY = 199.00;// weekly fixed cost of luxury car
    double POG_COMPACT = 3.50;// price per gallon of compact car
    double POG_LUXURY= 3.65;// price per gallon of luxury car
    int MPG_COMPACT = 30; //miles per gallon of compact car
    int MPG_LUXURY = 24;//miles per gallon of luxury car
    

    
    


cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n";
cout << "@        APEX AUTO RENTAL        @ \n";
cout << "@   We leave the driving to you  @ \n";
cout << "@                                @ \n";
cout << "@                                @ \n";
cout << "@                                @ \n";
cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n";
cout << "                                   \n";
cout << "Please enter the following information: \n";

    
// ask user for input

cout << "Enter type of car:" << endl;
cin >> typeOfCar;
   
    
    
  while (typeOfCar != 'c' && typeOfCar != 'C' && typeOfCar != 'l' && typeOfCar != 'L')
  {
      cout << "Type of car not valid, please try again" << endl;
      cout << "Enter type of car:" << endl;
      cin >> typeOfCar;
  }
    
        


    cout << "Please enter projected miles: ";
    cin >> projMiles;
    cout << "Please enter number of days: ";
    cin >> numOfDays;

    // calculations 
    weeks = numOfDays/7;
    
    
    // special guidelines
    if (numOfDays % 7 != 0)
	{
		weeks = weeks + 1;
	}

    
    
    // compact car daily plan , weekly plan  and difference
    if (typeOfCar == 'C' ||typeOfCar == 'c')
    {
        dailyPlanCompact = (DFC_COMPACT * numOfDays) + (CPM_COMPACT * projMiles);
        weeklyPlanCompact = (WFC_COMPACT * weeks)+ (( projMiles * POG_COMPACT) / MPG_COMPACT);

        cout << "Total cost of daily plan: $" << dailyPlanCompact<< fixed << setprecision(2)<<endl;
        cout << "Total cost of weekly plan: $" << weeklyPlanCompact<< fixed << setprecision(2)<<endl;
        
        
        if (dailyPlanCompact > weeklyPlanCompact)
        {
            
            differenceCompact = dailyPlanCompact - weeklyPlanCompact;
            cout << "Customer will save $" << differenceCompact << fixed << setprecision(2) << " by choosing the weekly plan." <<endl;
        }
        
        else
        
        {
            differenceCompact = weeklyPlanCompact - dailyPlanCompact;
            cout << "Customer will save $" << differenceCompact << fixed << setprecision(2) << " by choosing the weekly plan." <<endl;

        }
        
        
        
        
    }
    

    
    
     //luxury car daily plan , weekly plan and difference
   
     else 
    {
        
        
        dailyPlanLuxury = (DFC_LUXURY * numOfDays) + (CPM_LUXURY * projMiles);
        weeklyPlanLuxury = (WFC_LUXURY * weeks)+ (( projMiles * POG_LUXURY) / MPG_LUXURY);
        
        
        
        cout << "Total cost of daily plan: $" << dailyPlanLuxury  << fixed << setprecision(2) << endl;
        cout << "Total cost of weekly plan: $" << weeklyPlanLuxury << fixed  << setprecision(2)<< endl;
        
        
        if (dailyPlanLuxury > weeklyPlanLuxury)
        {
            
            differenceLuxury = dailyPlanLuxury - weeklyPlanLuxury;
            cout << "Customer will save $" << differenceLuxury << fixed  << setprecision(2) << " by choosing the weekly plan." <<endl;
        }
        
        else
            
        {
            differenceLuxury = weeklyPlanLuxury - dailyPlanLuxury;
            cout << "Customer will save $" << differenceLuxury << fixed  << setprecision(2) << " by choosing the weekly plan." << endl;
            
        }
        
        
        
        
        
        
        
        
        
        
        

    }

    
    
    
    
    
    
    return 0;
}

