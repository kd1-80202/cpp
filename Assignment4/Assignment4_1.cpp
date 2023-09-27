#include<iostream>
using namespace std;
class Time
{
private:
    int h;
    int m;
    int s;


// void geth()
// {
//     cout<<"Enter hr= ";
//     cin>>this->h;

// }
// void getm()
// {
//     cout<<"Enter min= ";
//     cin>>this->m;
    
// }
// void gets()
// {
//     cout<<"Enter sec= ";
//     cin>>this->s;
    
// }
// void seth()
// {
//     this->h=2;
// }
// void setm()
// {
//     this->m=46;
// }
// void sets()
// {
//     this->s=44;
// }

public:
    void acceptTime()
    {
        cout <<"Enter hr= " ;
        cin>>this->h;
        cout <<"Enter Min= " ;
        cin>>this->m;
        cout <<"Enter Sec= ";
        cin>>this->s;

    }  
    void printTime()
    {
        cout<<"Hr= "<<this->h<<endl;
        cout<<"Min=  "<<this->m<<endl;
        cout<<"Sec=  "<<this->s<<endl;
    }
};

int main()
{
       Time **arr = new Time *[3];

         for(int i=0;i<3;i++)
         arr[i]=new Time();

         for (int i=0;i<3;i++)
    {
        cout<<"Enter the values for index "<< i<< "=" << endl;
        arr[i]->acceptTime();
    }

         for (int i=0;i<3;i++)
    {
         cout<<"values at index= "<< i<< "=" << endl;
         arr[i]->printTime();
    }
         for (int i=0;i<3;i++)
        delete arr[i];

         delete[]arr;

       return 0;
}