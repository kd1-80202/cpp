#include<iostream>
using namespace std;
class Address
{
    private:
    string buliding;
    string city;
    string state;
    int pin;

    public:
    Address()
    {
        buliding ="";
        city="";
        state="";
        pin=0;

    }
    
    Address(string& buliding,string& city,string& state,int pin)
    {
        this->buliding=buliding;
        this->city=city;
        this->state=state;
        this->pin=pin;
    }
    string getbuliding()
    {
        return buliding;
    }
    string getcity()
    {
        return city;
    }
    string getstate()
    {
        return state;
    }
    int getpin()
    {
        return pin;
    }
    void setbuliding(string buliding)
    {
        this->buliding=buliding;
    }
    void setcity(string city)
    {
        this->city=city;
    }
    void setstate(string state)
    {
        this->state=state;
    }
    void setpin(int pin)
    {
        this->pin=pin;
    }
    void accept()
    {
        cout<<"Enter the bluiding name:";
        cin>>buliding;
        cout<<"Enter the city : ";
        cin>>city;
        cout<<"Enter the state :";
        cin>>state;
        cout<<"Enter the pin : ";
        cin>>pin;

    }
    void display()
    {
        cout<<"Buliding"<<buliding<<endl;
        cout<<"city"<<city<<endl;
        cout<<"state"<<state<<endl;
        cout<<"pin"<<pin<<endl;
    }


};
int main()
{
    Address a1;
    a1.accept();

    cout<<"Address:"<<endl;
    a1.display();
    return 0;
}