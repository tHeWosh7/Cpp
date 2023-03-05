#include<iostream>
using namespace std;
class sample
{
    private :
    int a;
    int b;
    public :
    int set_data();
    int display_data();
};
 int sample:: set_data()
{
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    return 0;
}
int sample:: display_data()
{
    cout<<"Display values\n";
    cout<<a<<endl<<b;
    return 0;
}
int main()
{
    sample s;
    s.set_data();
    s.display_data();
    return 0;
}