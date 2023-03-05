/*Program to find the greater number among two given numbers*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the value of a and b\n";
    cin>>a>>b;
    if(a>b)
    {
        cout<<a<<" is greater"<<endl;
    }
    else
    {
        cout<<b<<" is greater"<<endl;
    }
    return 0;
}