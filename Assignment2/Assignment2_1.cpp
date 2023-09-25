#include<iostream>
using namespace std;
namespace Nstudent
{
    class Student
    {
        public:
        int roll_no;
        string name;
        int marks;
    };
}
int main()
{
    Nstudent::Student S1;
    S1.roll_no=10;
    S1.name="Akanksha";
    S1.marks=300;

    Nstudent::Student S2;
    S2.roll_no=20;
    S2.name="Zikra";
    S2.marks=500;

    cout<<S1.roll_no<<endl;
    cout<<S1.name<<endl;
    cout<<S1.marks<<endl;

    cout<<S2.roll_no<<endl;
    cout<<S2.name<<endl;
    cout<<S2.marks<<endl;

    return 0;
}
