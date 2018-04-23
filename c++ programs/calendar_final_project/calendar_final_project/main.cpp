//
//  main.cpp
//  calendar_final_project
//
//  Created by victordang on 12/8/14.
//  Copyright (c) 2014 victordang. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;


//function declaration

int dayofWeek (int day,int month , int year); //day of week function
bool isLeapYear (int year); // is it a leap year?



//main function
int main ()
{
    //variable declaration
    int month; // month the user inputs
    int year; // year the user inputs
    int daysInMonth; // days in the month
    int dow; // varaible for day of the week
    int cursorpos;//position of the cursor 
    string afterday; // to display the days
    int day; //variable day
    
    
    
    
// ask user for month
    cout <<"Enter month:" << endl;
    cin >> month;
    
    while (month < 1 || month > 12 )
           
    {
        cout << "Enter month:" << endl;
        cin >> month;
    }
    
    
// ask user for year
    cout <<"Enter year:" << endl;
    cin >> year;
   
    while (year < 1582)
    {
        cout << "Enter year:" << endl;
        cin >> year;
    }
    cout << endl;
    
    
    //what month is it
    
    if (month ==1)
      cout << "January";
    else if (month == 2)
        cout << "February";
    else if (month == 3)
        cout<<  "March";
    else if (month == 4)
        cout << "April";
    else if (month == 5)
        cout << "May";
    else if (month == 6)
        cout << "June";
    else if (month == 7)
        cout << "July";
    else if (month == 8)
        cout << "August";
    else if (month == 9)
        cout << "September";
    else if (month == 10)
        cout << "October";
    else if (month == 11)
        cout << "November";
    else if (month == 12)
        cout << "December";
            
            
    
    
    
    
    // gets the amount of days in the month
    
    if (month == 1 || month == 5 || month == 7 || month == 8 || month == 12)
        daysInMonth = 31;
    else if (isLeapYear (year) && month == 2)
        daysInMonth = 29;
    else if (isLeapYear (year) == 0 && month == 2)
        daysInMonth = 28;
    else
        daysInMonth = 30;


    
    
    cout << endl;
    cout <<  year << endl;
    
    

//displays top row of days of the week
    cout << "Sun " << setw(8) << "Mon" << setw(9) << "Tue" << setw(9) << "Wed" << setw(9) << "Thu" << setw(9) << "Fri" << setw(9)<< "Sat" <<endl;
    
    
  
   // places the position of first day of the week
    
    dow = dayofWeek (day , month, year);
    cursorpos = 0;
    
    if (dow == 0){
        
        cursorpos = 1;
        afterday = "";
        
        
    }
    
    else if (dow == 1){
        cursorpos = 10;
        afterday = "";
    }
    
    else if (dow == 2){
        cursorpos = 19;
        afterday = "";
    }
    else if (dow == 3){
        cursorpos = 28;
        afterday = "";
    }
    else if (dow == 4){
        cursorpos = 37;
        afterday = "";
    }
    else if (dow  == 5){
        cursorpos = 46;
        afterday = "";
    }
    else if (dow  == 6 ){
        cursorpos = 50;
        afterday = "\n";
    }
    
    if (day >= 10){
        cursorpos--;
    }
    if(day <= 7 && day >= 3){
        
        cursorpos--;
        
    }
    cout << setw(cursorpos)<< " "<< afterday;
    

    
    
    
    
    
    
    
    
    
    
    
    
    //output the rest of the calendar to the user
    for (int day =1; day <= daysInMonth; day++)
    {
        dow = dayofWeek (day , month, year);
        cursorpos = 0;
        
        if (dow == 0){
            
            cursorpos = 1;
            afterday = "";
            
            
        }
        
        else if (dow == 1){
            cursorpos = 10;
            afterday = "";
        }
        
        else if (dow == 2){
            cursorpos = 10;
            afterday = "";
        }
        else if (dow == 3){
            cursorpos = 10;
            afterday = "";
        }
        else if (dow == 4){
            cursorpos = 10;
            afterday = "";
        }
        else if (dow  == 5){
            cursorpos = 10;
            afterday = "";
        }
        else if (dow  == 6 ){
            cursorpos = 10;
            afterday = "\n";
        }
    
        if (day > 10){
            cursorpos--;
        }
        if(day <= 9 && day >= 1){
        
            cursorpos--;
            
        }
        cout << setw(cursorpos)<<day<<afterday;
        
        
    }
        
        
        

        
        
        
        
        
        
        
    return 0;

    
        
    }
    

// leap year function

bool isLeapYear (int year)
{

    return (( year % 400 == 0) || (year % 4 == 0 && year%100 != 0));
    
}

//day of week function
int dayofWeek (int day,int month , int year)
{
    int a;
    int y;
    int m;
    int d;
    
    
    a = (14 - month) / 12;
    y = (year - a);
    m = (month + (12 * a) - 2);
    d = (day + y + y/4 - y/100 + y/400 + (31 * m)/12 )% 7;
    
    
    return d;
}










    
    
    
    
    
    
    
    
    
    
    
    
    
    

