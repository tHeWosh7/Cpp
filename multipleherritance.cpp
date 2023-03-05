/**/
#include<iostream>
using namespace std;
class A
{
    public:
    int x;
    int getx()
    {
        cout<<"Enter x\n";
        cin>>x;
        // return 0;
    }
    int printx()
    {
        cout<<x<<endl;
         return 0;
    }
};
    class B
    {
        public:
        int y;
        int gety()
        {
            cout<<"Enter y\n";
            cin>>y;
            // return 0;
        }
        int printy()
        {
            cout<<y<<endl;
            return 0;
        }
    };
    class C: public A,public B
    {
        public:
        int z;
        int getz()
        {
            cout<<"Enter z\n";
            cin>>z;
            // return 0;
        }
        int printmul()
        {
            cout<<x*y*z<<endl;
            return 0;
        }
    };
int main()
{
    C c;
    c.getx();
    c.gety();
    c.getz();
    c.printx();
    c.printy();
    c.printmul();
    return 0;
}