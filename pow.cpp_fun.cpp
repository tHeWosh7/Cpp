/*WAP to find the power of number using recursion in C++ where b is the base and a is the power*/
#include<iostream>
using namespace std;
int pow(int b, int a)
 int main()
{
    int a,b,res;
    cout<<"Enter base\n";
    cin>>b;
    cout<<"Enter power\n";
    cin>>a;
    res=pow(b,a);
    cout<<res;
    return 0;
}
int pow(int b, int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
        return(b*pow())
    }

}
