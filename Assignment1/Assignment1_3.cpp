#include<iostream>

using namespace std;
class Student
{
    private:
    int roll_no;
    string name;
    int marks;
   
public:
void initStudent()
{
    cout<<"inside ctor";
    roll_no=10;
    name="Akanksha";
    marks=200;

}
void printStudentOnConsole()
{
    cout<<"Student:"<<roll_no<<","<<name<<","<<marks<<endl;
}
void acceptDateFromConsole()
{
    cout<<"Enter roll_no,name,marks";
    cin>>roll_no>>name>>marks;
}
};
int main()
{
    Student s1;
    s1.acceptDateFromConsole();
    s1.printStudentOnConsole();
    return 0;
}

