#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,j,a[10],tmp;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         if (a[i]<a[j])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }    
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<'\t'<<a[i];
    }
    return 0;
    getch();


}