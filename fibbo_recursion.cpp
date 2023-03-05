/*WAP in c++ to generate a fibbonacci series upto n terms. Esnter number of terms through the keyboard*/
#include<iostream>
#include<iomanip>
using namespace std;
int fibbo(int n);
int main()
{
int i,n;
cout<<"Enter number of terms\n";
cin>>n;
for(i=0;i<=n;i++)
{
    cout<<fibbo(i);
}
return 0;
}
int fibbo(int n)
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fibbo(n-1)+fibbo(n-2);
    }

}