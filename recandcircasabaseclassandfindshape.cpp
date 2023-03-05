/*Create a class rectangle and circle as a base class and shape as a derived class and find the area of a shape*/
#include<iostream>
#include<math.h>
using namespace std;
// #define PI=3.14;

class Rectangle
{
    public:
    int l;
    int b;
    int AreaRec;
    int setAreaRec()
    {
        cout<<"Enter l and b\n";
        cin>>l>>b;
        AreaRec= l*b;
        return 0;
    }
};
class Circle:public Rectangle
{
    // private:
    public:
    int r;
   double pi=3.14;
    float AreaCirc;
    int setAreaCirc()
    {
        cout<<"Enter r"<<endl;
        cin>>r;
        AreaCirc=2*pi*r*r;
        return 0;
    }
    int display()
    {
        cout<<"Area of rectangle="<<AreaRec<<endl<<"Area of Circle="<<AreaCirc<<endl;
        return 0;
    }
};
int main()
{
    Circle c;
    c.setAreaRec();
    c.setAreaCirc();
    c.display();
    return 0;
}