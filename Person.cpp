#include "Person.hpp"

#include <iostream>
#include <string>

using namespace std;

    Person::Person ()
    {
        Name = "";
        ID = 0;
        Age = 0;
    }
    
    Person::Person (string n, int i, int age)
    {
        Name = n;
        ID = i;
        Age = age;
    }
    
    void Person::setName(string name)
    {
        Name = name;
    }
    
    string Person::getName() const
    {
        return Name;
    }
    
    void Person::setID(int id)
    {
        ID = id;
    }
    
    int Person::getID() const
    {
        return ID;
    }
    
    void Person::setAge(int a)
    {
        Age = a;
    }
    
    int Person::getAge() const
    {
        return Age;
    }
    
    void Person::print()
    {
        cout << "Name: " << Name << endl;
        cout << "ID: " << ID << endl;
        cout << "Age: " << Age << endl;

    }
    
    struct appointment
    {
        int hours;
        int mins;
        
    };

