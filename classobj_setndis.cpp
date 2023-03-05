#include<iostream>
using namespace std;
class sample
{
    private:
    int a;
    int b;
    public:
    int set_data(int x, int y)
    {
        a=x;
        b=y;
        return 0;
    }
    int display_data()
    {
        cout<<a<<b<<endl;
        return 0;
    }
};
int main()
{
    int p,q;
    sample s;
    s.set_data(10,20);
    s.display_data();
    return 0;
}