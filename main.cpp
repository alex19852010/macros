#include<iostream>

using namespace std;

 #define day1 "monday"
 #define day2 "Tuesday"
 #define day3 "wensday"
 #define day4 "Thursday"
 #define day5 "friday"
 #define day6 "saturday"
 #define day7 "sunday"
 #define noday "error"

main()
{
   int day = 0;
   while(1)
   {
    cout << "enter the day of week: ";
    cin >> day;

    if(day == 1)
    {
     cout << day1 << endl;
    }

    if(day == 2)
    {
     cout << day2 << endl;
    }

    if(day == 3)
    {
     cout << day3 << endl;
    }

   if(day == 4)
    {
     cout << day4 << endl;
    }

   if(day == 5)
    {
     cout << day5 << endl;
    }

   if(day == 6)
    {
    cout << day6 << endl;
    }

   if(day == 7)
    {
    cout << day7 << endl;
    }

   if(day <= 0 || day > 7)
    {
    cout << noday << endl;
    }
   }
   
  return 0;  
}