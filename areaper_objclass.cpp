#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
     Test()
    {
        cout<<"Constructor used in";
        a=10;
        b=20;
    }

 void show()
{
    cout<<a<<endl;
    cout<<b<<endl;

}
};
int main()
{
    Test t;
    t.show();
    return 0;
}
