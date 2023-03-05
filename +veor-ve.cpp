/*Write a program in c++ to find the entered number is positive or negative*/
#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int Num;
    cout<<"Enter the number\n";
    cin>>Num;
    if(Num>=0)
    {
        cout<<Num<<"is positive"<<endl;
    }
    else
    {
        cout<<Num<<"is negative"<<endl;
    }
    return 0;
}