#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n < 0)
        throw 1;
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int n;
    try
    {
        cout << "Enter number: ";
        cin >> n;
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }
    catch (int error)
    {
        cout << "Factorial of negative number not possible." << endl;
    }
    cout << "Successful execution" << endl;
    return 0;
}