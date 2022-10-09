#include "Customer.hpp"
#include "Person.hpp"

#include <iostream>

using namespace std;

    void Customer::setMechanicID(int Mid)
    {
        MechanicID = Mid;
    }
    
    int Customer::getMechanicID() const
    {
        return MechanicID;
    }
    
    bool Customer::operator < (Customer a)
    {
        if (this->MechanicID < a.MechanicID)
        {
            cout << "The two sections are similar." << endl;
            return true;
        }else
            return false;
    }
    
    bool Customer::operator > (Customer b)
    {
        if (this->MechanicID < b.MechanicID)
        {
            cout << "The two sections are similar." << endl;
            return true;
        }else
            return false;
    }
    
    bool Customer::operator == (Customer c)
    {
        if (this->MechanicID < c.MechanicID)
        {
            cout << "The two sections are similar." << endl;
            return true;
        }else
            return false;
    }
//customer:
//Ahmed at 1:00, Sara at 4:00, Kareem at 3:00, Mohammed at 1:00
