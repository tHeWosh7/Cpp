#include<iostream>
using namespace std;
class calculation
{
    private:
    int b;
    int h;
    int area;
    public:
    int set_data();
    int display_data();
};
int calculation:: set_data()
{
    cout<<"Enter the value of a and b\n";
    cin>>b>>h;
    return 0;
}
int calculation:: display_data()
{
    area=(b*h)/2;
    cout<<"Display the area of triangle\n";
    cout<<area<<endl;
    return 0;
}
int main()
{
    calculation c;
    c.set_data();
    c.display_data();
    return 0;
}
