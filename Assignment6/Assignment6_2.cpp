#include <iostream>
using namespace std;


class Employee
{
private:
    int id;
    float sal;

public:
    Employee()
    {
        this->id = 0;
        this->sal = 0;
    }
    Employee(int id, float sal)
    {
        this->id = id;
        this->sal = sal;
    }

    int getid()
    {
        return this->id;
    }
    void setid(int id)
    {
        this->id = id;
    }
    int getsal()
    {
        return this->sal;
    }
    void setsal(float sal)
    {
        this->sal = sal;
    }
    void acceptEmployee()

    {
        cout << "Enter id=  ";
        cin >> this->id;
        cout << "Enter sal=  ";
        cin >> this->sal;
    }
    void displayEmployee()
    {
        cout << "Enter id=  " << id << endl;
        cout << "Enter sal=  " << sal << endl;
    }
};

class manager : virtual public Employee
{
private:
    float bonus;

public:
    manager()
    {
        this->bonus = 0;
    }
    manager(float bonus)
    {
        this->bonus = bonus;
    }
    float getbonus()
    {
        return this->bonus;
    }
    void setbonus(float bonus)
    {
        this->bonus = bonus;
    }
protected:

    void acceptmanager()
    {
        // Employee::acceptEmployee()
        cout << "Enter bonus=  " << endl;
        cin >> this->bonus;
    }
    void displaymanager()
    {
        // Employee::displayEmployee()
        cout << "Enter bonus= " << this->bonus << endl;
    }
};

class salesman : virtual public Employee
{
private:
    float comm;

public:
    salesman()
    {
        this->comm = 0;
    }

    salesman(float comm)
    {
        this->comm = comm;
    }

    float getcomm()
    {
        return this->comm;
    }

    void setcomm(float comm)
    {
        this->comm = comm;
    }

protected:
    void acceptsalesman()
    {
        Employee::acceptEmployee();
        cout << "Enter comm= " << endl;
        cin >> this->comm;
    }
    void displaysalesman()
    {
        Employee::displayEmployee();
        cout << "Enter comm= " << this->comm << endl;
    }
};

class salesmanager : public salesman, public manager
{
public:
    void acceptsalesmanager()
    {
        salesman::acceptsalesman();
        manager::acceptmanager();
    }

    void displaysalesmanager()
    {
        salesman::displaysalesman();
        manager::displaymanager();
    }
};
int main()
{
    salesmanager s;
    s.acceptsalesmanager();
    s.displaysalesmanager();
    return 0;

}
