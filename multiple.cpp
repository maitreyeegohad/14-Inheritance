//Multiple inheritance
#include<iostream>
#include<string>
using namespace std;

//Parent Class-1
class Vehicle 
{
    public:
    string company="Suzuki";
    void type()
    {
        cout<<"Swift"<<endl;
    }
};
//Parent Class-2
class Specs 
{
    public:
    string mileage="20 kmpl";
    void colour()
    {
        cout<<"Red and White"<<endl;
    }
};
//Child Class-1 (derived from parent-1&2)
class Car: public Vehicle, public Specs 
{
    public:
    string seater="4 seater";
};

int main()
{
    //Multiple Inheritance
    Car f1;
    f1.colour();
    cout<<f1.company<<" ";
    f1.type();
    cout<<"("<<f1.seater<<")"<<endl<<"MILEAGE: "<<f1.mileage<<endl;
}
/*
Red and White 
Suzuki Swift
(4 seater)
MILEAGE: 20 kmpl
*/
