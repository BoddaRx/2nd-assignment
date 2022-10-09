#ifndef Customer_hpp
#define Customer_hpp
#include "Person.hpp"

#include <iostream>

using namespace std;

class Customer: public Person
{
private:
    int MechanicID;
    struct appointment;
    
public:
    void setMechanicID(int Mid);
    
    int getMechanicID() const;
    
    bool operator < (Customer a);
    
    bool operator > (Customer b);
    
    bool operator == (Customer c);
//customer:
//Ahmed at 1:00, Sara at 4:00, Kareem at 3:00, Mohammed at 1:00
    
    
};

#endif /* Customer_hpp */
