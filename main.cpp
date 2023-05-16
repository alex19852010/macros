#include<iostream>
#define UP      1 << 0
#define DOWN    1 << 1
#define LEFT    1 << 2
#define RIGHT   1 << 3



using namespace std;

main()
{
    
    int n = 0;
    cout << "enter enter:";
    cin >> n;

    if(n == UP)
    {
        cout << "up";
    }

    else if(n == DOWN)
    {
        cout << "down";
    }

    else if(n == LEFT)
    {
        cout << "left";
    }

    else if(n == RIGHT)
    {
        cout << "right";
    }

    
}