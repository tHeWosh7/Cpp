#include<iostream>
using namespace std;
int fact_num (int n);
int main()
{
    int n;
    int fact=1;
    cout<<"Enter the number\n";
    cin>>n;
    fact=fact_num(n);
    cout<<fact<<endl;
    return 0;
}
int fact_num (int n)
{
    if(n==0||n==1)
    {
    return (1);
    }
    else
    return n*(fact_num (n-1));
}