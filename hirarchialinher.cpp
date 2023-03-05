/*Wap using hirarichal inheritance to enter the data from grandparents upto grand children*/
#include<iostream>
#include<string.h>
using namespace std;
class GrandParent
{ 
    protected:
    char Name[20];
    int Age;
    int DOB;
    char Father_Name;
    char Mother_Name;
    int Number;
    public:
    int Grandparent_data()
    {
        cout<<"======Grand Parent Details======"<<endl;
        cout<<"Enter Name: "<<endl;
        cin>>Name;
        cout<<"Enter Age: "<<endl;
        cin>>Age;
        cout<<"Enter DOB: "<<endl;
        cin>>DOB;
        cout<<"Enter Number"<<endl;
        cin>>Number;
        return 0;
    }
};
class Parent1: virtual GrandParent
{
    char Name[20];
    int Age;
    int DOB;
    char Father_Name;
    char Mother_Name;
    int Number;
public:
    int Parent1_data()
    {
        cout << "======Parent1's Detail======" << endl;
        cout << "Enter Name: " << endl;
        cin >> Name;
        cout << "Enter Age: " << endl;
        cin >> Age;
        cout << "Enter DOB: " << endl;
        cin >> DOB;
        cout << "Enter Number" << endl;
        cin >> Number;
        return 0;
    }
};
class Parent2 : virtual GrandParent
{
    char Name[20];
    int Age;
    int DOB;
    char Father_Name;
    char Mother_Name;
    int Number;
public:
    int Parent2_data()
    {
        cout << "======Parent2's Detail======" << endl;
        cout << "Enter Name: " << endl;
        cin >> Name;
        cout << "Enter Age: " << endl;
        cin >> Age;
        cout << "Enter DOB: " << endl;
        cin >> DOB;
        cout << "Enter Number" << endl;
        cin >> Number;
        return 0;
    }
};
class GrandChildrens: virtual GrandParent,public Parent1,public Parent2
{
    char Name[20];
    int Age;
    int DOB;
    char Father_Name;
    char Mother_Name;
    int Number;
public:
    int Grandchildren_data()
    {
        cout << "======GrandChildren' Detail======" << endl;
        cout << "Enter Name: " << endl;
        cin >> Name;
        cout << "Enter Age: " << endl;
        cin >> Age;
        cout << "Enter DOB: " << endl;
        cin >> DOB;
        cout << "Enter Number" << endl;
        cin >> Number;
        return 0;
    }
};
int main()
{
    GrandParent gp;
    Parent1 p;
    Parent2 q;
    gp.Grandparent_data();
    p.Parent1_data();
    q.Parent2_data();
    GrandChildrens gc;
    gc.Grandchildren_data();
    return 0;
}