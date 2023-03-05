#include<iostream>
using namespace std;
void mul_ab();
void main()
{
    mul_ab();//called
}
void mul_ab()
{
    int a,b,mul;
    cout<<"Enter a and b/n";
    cin>>a>>b;
    mul=a*b;
    cout<<"mul="<< mul<<endl;
}