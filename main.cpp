#include <iostream>
#include <string>
#include <queue>
#include "Person.hpp"
#include "Customer.hpp"
#include "Mechanic.hpp"

using namespace std;

#define SIZE 4

template <class T>
class data_type: public Customer
{
private:
    Customer* array;
    int front;
    int rear;
    int max;
    int size;
    
public:
    
    //constructor
    data_type(int s = SIZE)
    {
        array = new Customer[s];
        max = s;
        front = 0;
        rear = -1;
        size = 0;
    }
    
    
    int getsize() const
    {
        return size;
    }

    bool isEmpty()
    {
        return size == 0;
    }
    
    //push variable if queue is full
    void push(int variable)
    {
            if(size == max)
            {
            cout<<"Template class queue is full "<<endl;
            return;
            }
                
            if(front == -1)
            {
                front = 0;
            }
    }
    
    //pop variable if queue is empty
    void pop()
    {
            if(front == -1)
            {
                cout<<"Template class queue is empty "<<endl;
                return;
            }
            Customer index = array[front];
            
            for (int i = 0; i <size; i++)
            {
                    array[i] = array[i + 1];
            }
            
            if(size == 0)
            {
                front = -1;
                rear = 0;
            }
            return;
    }

};

int main()
{
    Person person1;
    Customer customer1;
    Mechanic mechanic1;
    data_type<class T> q;
    
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.getsize();
    
    struct Person::appointment time;
    
    cout << "Enter number of hours: ";
    cin >> time.hours;
    
    cout << "Enter number of minutes: ";
    cin >> time.mins;
        
    cout << endl;
    
    customer1.setName ("Ahmed");
    customer1.setID(333);
    customer1.setAge(66);
    customer1.setMechanicID(181417);
    customer1.print();
    
    mechanic1.setName("Ayman");
    
    cout << "Mr. " << customer1.getName() << " has an appointment at " << time.hours << ":" << time.mins << " with " << mechanic1.getName() << endl;
    
    cout << endl;
    
    cout << "Enter number of hours: ";
    cin >> time.hours;
    
    cout << "Enter number of minutes: ";
    cin >> time.mins;
    
    mechanic1.isAvailable();
        
    cout << endl;
    
    customer1.setName ("Sara");
    customer1.setID(222);
    customer1.setAge(21);
    customer1.setMechanicID(224031);
    customer1.print();
    
    mechanic1.setName("Khaled");
    
    cout << "Mr. " << customer1.getName() << " has an appointment at " << time.hours << ":" << time.mins << " with " << mechanic1.getName() << endl;
    
    cout << endl;
    
    cout << "Enter number of hours: ";
    cin >> time.hours;
    
    cout << "Enter number of minutes: ";
    cin >> time.mins;
        
    cout << endl;
    
    customer1.setName ("Kareem");
    customer1.setID(666);
    customer1.setAge(37);
    customer1.setMechanicID(211104);
    customer1.print();
    
    mechanic1.setName("Mai");
    
    cout << "Mr. " << customer1.getName() << " has an appointment at " << time.hours << ":" << time.mins << " with " << mechanic1.getName() << endl;
    
    cout << endl;
    
    cout << "Enter number of hours: ";
    cin >> time.hours;
    
    cout << "Enter number of minutes: ";
    cin >> time.mins;
        
    mechanic1.isAvailable();

    cout << endl;
    
    customer1.setName ("Mohamed");
    customer1.setID(444);
    customer1.setAge(20);
    customer1.setMechanicID(211119);
    customer1.print();
    
    mechanic1.setName("Khaled");
    
    cout << "Mr. " << customer1.getName() << " has an appointment at " << time.hours << ":" << time.mins << " with " << mechanic1.getName() << endl;

    return 0;
}
