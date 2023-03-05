/*There is a class called students which has a data student a new student as a derived class has been inherited which has a data member as Roll no.WAP usig single inheritance to print or display all the information of the new student*/
#include<iostream>
using namespace std;
class Student 
{
    public:
    char name[20];
    int age;
    int getStudent()
    {
        cout<<"Enter Name"<<endl;
        cin>>name;
        cout<<"Enter Age"<<endl;
        cin>>age;
        return 0;
    }
};
class NewStudent:public Student
{
    private:
    int roll_no;
    public:
    int getnewstudent()
    {
        cout<<"Enter Roll_no\n";
        cin>>roll_no;
        return 0;
    }
    int print()
    {
        cout<<"Name:\n\t"<<name<<endl;
        cout<<"Age:\n\t"<<age<<endl<<"Roll_no:\n\t"<<roll_no<<endl;
        return 0;
    }
};
int main()
{
    NewStudent ns;
    ns.getStudent();
    ns.getnewstudent();
    ns.print();
    return 0;
}