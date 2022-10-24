// seminarswitch.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "enter a grade";
    double grade;
    cin >> grade;
    int gardeRound = round(grade);
    if (grade < 3)
    {
        gardeRound = (int)grade;

    }
    
    switch (gardeRound)
    {
    case 2:
        cout << "slab"; break;
    case 3:
        cout << "sreden"; break;
    case 4:
        cout << "dobyr"; break;
    case 5:
        cout << "mn dobyr"; break;
    case 6:
        cout << "otlichen"; break;
    default: cout << "nevalidna ocenka";

    }
}

