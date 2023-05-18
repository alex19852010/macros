#include<iostream>

using namespace std;

void armata_shoot(int count)

{
    for(int i = 0; i < count; i ++)
    {
        cout << "shoot" << endl;
    }
}

#define TANK(model, name) model ## _ ## name




main()
{
    double armata_weight = 49.5;
    int armata_capasity = 3;
    double armata_max_speed = 90;
  

   TANK(armata, shoot)(5);
    
    
}