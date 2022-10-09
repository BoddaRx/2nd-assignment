#ifndef Person_hpp
#define Person_hpp

#include <iostream>
#include <string>

using namespace std;

class Person
{
protected:
    string Name;
    int ID;
    int Age;

public:
    Person ();
    
    Person (string n, int i, int age);
    
    void setName(string name);
    string getName() const;
    
    void setID(int id);
    int getID() const;
    
    void setAge(int a);
    int getAge() const;
    
    void print();
    
    struct appointment
    {
        int hours;
        int mins;
        
    };
    
    
};


#endif /* Person_hpp */
