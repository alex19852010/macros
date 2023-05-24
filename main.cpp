
#include<iostream>
#include<string>

using namespace std;

#define ONE   1
#define TWO   2
#define THREE 3
#define FOUR  4
#define FIVE  5
#define SIX   6
#define SEVEN 7
#define ERROR "ERROR"
#define WEEK(number)DAY_## number
#define DAY_1 "the day is monday"
#define DAY_2 "the day is Tuesday"
#define DAY_3 "the day is Wednesday"
#define DAY_4 "the day is Thursday"
#define DAY_5 "the day is friday"
#define DAY_6 "the day is Saturday"
#define DAY_7 "the day is Sunday"


main()
{
int day = 0;
while(1)
{
 cout << "enter day: ";
cin >> day;

if(day == ONE)
 {
  cout << WEEK(1) << endl;
 }

 if(day == TWO)
 {
  cout << WEEK(2) << endl;
 }

 if(day == THREE)
 {
  cout << WEEK(3) << endl;
 }

 if(day == FOUR)
 {
  cout << WEEK(4) << endl;
 }

 if(day == FIVE)
 {
  cout << WEEK(5) << endl;
 }

 if(day == SIX)
 {
  cout << WEEK(6) << endl;
 }

 if(day == SEVEN)
 {
  cout << WEEK(7) << endl;
 }

 

 if(day > 7 || day <= 0)
 {
  cout << ERROR << endl;
 }
}



return 0;
    
} 