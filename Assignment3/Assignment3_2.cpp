#include <iostream>
using namespace std;
class Tollbooth
{
private:
    unsigned int totcars;
    double totamt;

public:
    Tollbooth(unsigned int totcars = 0, double totamt = 0)
    {
    }
    int payingCar()
    {
        totcars++;
        totamt = totamt + 0.50;
        return 0;
    }
    int nopayCar()
    {
        totcars++;
        return 0;
    }
    void printOnConsole()
    {
        cout << "***************************************************"<<endl;
        cout << "Total cars are: " << totcars<<endl;
        cout << "Total amount is: " << totamt<<endl;
        cout << "The Paying Cars are: " << totamt/0.5<<endl;
        cout << "The Non-Paying Cars are: " <<totcars-(totamt/0.5)<<endl;
    }
};
int main()
{
    Tollbooth T1;
    int choice;
    while (1)
    {
        cout << "**********************Details*******************"<<endl;
        cout << "1. Count Paying Cars"<<endl;
        cout << "2. Count Non-Paying Cars"<<endl;
        cout << "3. Show Totals"<<endl;
        cout << "Enter the choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            T1.payingCar();
            cout << "Paying Car Counted"<<endl;
            break;
        case 2:
            T1.nopayCar();
            cout << "Non-Paying Car Counted"<<endl;
            break;
        case 3:
            T1.printOnConsole();
            break;
        default:
            cout << "Thank you!";
            exit(1);
        }
    }
        return 0;
}