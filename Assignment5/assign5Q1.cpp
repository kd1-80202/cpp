/*Q1. Write a menu driven program for Student management.
In main(), create Array of Objects and provide facility for accept, print, search and sort.
For student accept name, gender, rollNumber and marks of three subjects from user and print name,
rollNumber, gender and percentage.
Provide global functions void sortRecords(Studuent[] arr) and int searchRecords(Student[] arr) for
sorting and searching array.
Search function returns index of found Student, otherwise returns -1.*/

#include <iostream>
using namespace std;

class Student
{
private:
    int roll_no;
    string name;
    int marks[3];
    string gender;
    float percent;

public:
    void accept()
    {
        cout << "Enter the roll_no: ";
        cin >> roll_no;
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the gender: ";
        cin >> gender;
        for (int i = 0; i < 3; i++)
        {
            cout << "Enter marks for subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calPercent()
    {

        float sumMarks = 0;
        for (int i = 0; i < 3; i++)
        {
            sumMarks += marks[i];
        }
        percent = sumMarks / 3;
    }
    void display()
    {
        cout << "***********************************" << endl;
        cout << "Roll no is: " << roll_no << endl;
        cout << "Name is: " << name << endl;
        cout << "Gender is: " << gender << endl;
        for (int i = 0; i < 3; i++)
            cout << "Marks of suject " << i << ": " << marks[i] << endl;
        calPercent();
        cout<< "The Percentage is: "<<percent<< endl;
        cout << "***********************************" << endl;
    }
    // int get_rollno()
    // {
    //     return roll_no;
    // }
    friend int searchRecords(Student arr[], int size, int Snum);
    friend void sortRecords(Student arr[], int index);
};
void sortRecords(Student arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j].roll_no > arr[j + 1].roll_no)
            {
                Student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int searchRecords(Student arr[], int size, int Snum)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i].roll_no == Snum)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int size;
    cout << "Enter the number of students: ";
    cin >> size;
    Student arr[size];
    for (int i = 0; i < size; i++)
        arr[i].accept();
    for (int i = 0; i < size; i++)
        arr[i].display();

    int Snum;
    cout << "Enter the roll_no to search: ";
    cin >> Snum;

    int FI = searchRecords(arr, size, Snum);

    if (FI != -1)
    {
        cout << "Student found at index " << FI << ":" << endl;
        arr[FI].display();
    }
    else
        cout << "Student not found " << endl;

    sortRecords(arr, size);

    cout << "Sorted Student Records:" << endl;
    for (int i = 0; i < size; i++)
        arr[i].display();

    return 0;
}
