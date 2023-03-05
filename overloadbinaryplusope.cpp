#include <iostream>
using namespace std;
class complex
{
    int x;
    int y;
    public:
    int input()
    {
        cout<<"Enter x and y\n";
        cin>>x>>y;
        return 0;
    }
    complex operator+(complex&obj)
    {
        complex temp;
        temp.x=x+obj.x;
        temp.y=y+obj.y;
        return (temp);
    }
    int print()
    {
        cout<<x<<"+"<<y<<endl;
        return 0;
    }
};
int main()
{
    complex c1,c2,sum;
    c1.input();
    c2.input();
    sum=c1+c2;
    sum.print();
    return 0;
}