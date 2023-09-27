#include "./menu.h"
#include <iostream>
using namespace std;
emenu menu()
{
    int choice;
    cout<<"******************"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.Accept Radius and Height"<<endl;
    cout<<"2.print"<<endl;
    cout<<"3.volume"<<endl;
    cout<<"4.get radius"<<endl;
    cout<<"5.get height"<<endl;
    cout<<"Enter your choice=";
    cin>>choice;
    cout<<"********************"<<endl;
    return emenu(choice);
}