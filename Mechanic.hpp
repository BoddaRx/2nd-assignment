#ifndef Mechanic_hpp
#define Mechanic_hpp
#include "Person.hpp"

#include <iostream>
#include <string>

using namespace std;

//child inherits from class Person
class Mechanic: public Person
{
private:
    int counter;
    //Array of struct appointment;
    
    struct appointment
    {
        string arr[4] = {"1:00", "4:00", "3:00", "1:00"};
    };
    
public:
    Mechanic ();
    
    Mechanic (int count, string array[]);
    
    void isAvailable();
     
    //setters and getters
    void setcounter(int c);
    
    int getcounter() const;
    //mechanics :
    //Ayman, Khaled, Mai
};


#endif /* Mechanic_hpp */
