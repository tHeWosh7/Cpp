#include<iostream>
using namespace std;
class Vehicle
{
    public:
    Vehicle()
    {
        cout<<"..Vehicle.."<<endl;
    }
};
class car: public Vehicle
{
    public:
    car()
    {
        cout<<"->Car"<<endl;
    }
};
class Racing_car: public car
{
    public:
    Racing_car()
    {
        cout<<"-->Racing car"<<endl;
    }
};
class Ferrari:public Racing_car
{
    public:
    Ferrari ()
    {
        cout<<"--->Ferrari"<<endl;
    }
};
int main()
{
    Ferrari f;
    return 0;
}