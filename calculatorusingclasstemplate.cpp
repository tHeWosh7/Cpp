#include<iostream>
using namespace std;
template <class T>
class calculator
{
    T num1, num2;
    public:
    calculator (T n1, T n2)
    {
        num1=n1;
        num2=n2;
    }
int display()
{
    cout<<"Numbers"<<num1<<num2<<endl;
    cout<<num1<<"+"<<num2<<"="<<Add()<<endl;
    cout<<num1<<"-"<<num2<<"="<<Subs()<<endl;
    cout<<num1<<"*"<<num2<<"="<<Mul()<<endl;
    cout<<num1<<"/"<<num2<<"="<<Div()<<endl;
    
    return 0;
}
T Add()
{
    return (num1+num2);
}
T Subs()
{
    return(num1-num2);
}
T Mul()
{
    return (num1*num2);
}
T Div()
{
    return (num1/num2);
}
};
int main()
{
    calculator<int>a(2,1);
    calculator<float>b(2.4,3.2);
    cout<<"Result for Int"<<endl;
    a.display();
    cout<<"Result for Float"<<endl;
    b.display();
}