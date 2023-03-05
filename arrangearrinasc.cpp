#include<iostream>
using namespace std;
int main()
{
    //initialization
    int a[10],i,j,n,temp;
    // dispaly comments and linking input values
    cout<<"Enter the size of an array";
    cin>>n;
    // reading the elements entered
    for(i=0;i<n;i++)
    {    
        cin>>a[i];   
    }
    //shorting process
    cout<<"Arranging in ascending order"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
// displaying the outcome
    cout << "Elements after shorting" << endl;
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}