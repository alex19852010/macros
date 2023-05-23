
#include<iostream>
#include<string>

using namespace std;

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

cout << WEEK(5);
return 0;
    
} 