#include "Mechanic.hpp"
#include "Person.hpp"

#include <iostream>
#include <string>

using namespace std;

Mechanic::Mechanic ()
{
    counter = 0;
}

Mechanic::Mechanic (int count, string array[])
{
    counter = count;
    array[counter] = {};
}

void Mechanic::isAvailable()
{
    for (int i = 0; i< 4; i++)
    {
        cin >> i;
        
        if (counter == 0) {
            cout<< "Place is empty" << endl;
        }
        else {
            cout<< "Place is full" << endl;;
        }
    }
    counter++;
}
 
//setters and getters
void Mechanic::setcounter(int c)
{
    counter++;
    counter = c;
}

int Mechanic::getcounter() const
{
    return counter;
}
//mechanics :
//Ayman, Khaled, Mai
