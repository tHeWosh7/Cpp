#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    Test (int x, int y)
    {
        a=x;
        b=y;
    }
    void show()
    {
        cout<<a<<endl;
        cout<<b<<endl;
    }
};
    int main()
    {
        Test T (10,20);
        T.show ();
        return 0;
    }
