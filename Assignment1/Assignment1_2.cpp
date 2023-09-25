
#include <iostream>

using namespace std;
struct Date
{
    int dd;
    int mm;
    int yy;

    void initDate()
    {
        this->dd = 05;
        this->mm = 02;
        this->yy = 1999;
    }

    void printDateOnConsole()
    {
        cout << "DATE = " << this->dd << "/" << this->mm << "/" << this->yy << endl;
    }

    void acceptDateFromConsole()
    {

        cout << "Enter day : ";
        cin >> this->dd;
        cout << "Enter month :";
        cin >> this->mm;
        cout << "Enter year :";
        cin >> this->yy;
    }
    
    bool isLeapYear()
    {
         if(this->yy % 4==0)
         return true;
         else 
         return false;
    }
};
int main()
{

    struct Date date;
    int choice;

    do
    {
        cout<<"**************************************"<<endl;
        cout << "Choices" << endl
             << "1.View default date" << endl
             << "2.Enter date" << endl
             << "3.Check year is leap" << endl;
        cout << "Enter your choice :: ";
        cin >> choice;

        switch (choice)
        {
        case 0:
            break;

        case 1:
            date.initDate();
            date.printDateOnConsole();
            break;

        case 2: date.acceptDateFromConsole();
                date.printDateOnConsole();
                break;
        case 3: date.acceptDateFromConsole();
                date.printDateOnConsole();
                if(date.isLeapYear())
                cout<<"year is leap year"<<endl;
                else
                cout<<"year is not a leap  year"<<endl;
                break;
        }
    } while (choice != 0);

    return 0;
}