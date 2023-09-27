#include "./cylinder.h"
#include "./menu.h"
int main()
{
    Cylinder c1(3,4);
    emenu choice;
    while((choice = menu())!=0)
    {
        switch(choice)
        {
            case 1:
            c1.accept();
            break;

            case 2:
            c1.print();
            break;

            case 3:
            c1.Volume();
            break;

            case 4:
            c1.getradius();
            cout<<"radius=  "<<c1.getradius()<<endl;
            c1.setradius(80);
            break;

            case 5:
            c1.getheight();
            cout<<"height=  "<<c1.getheight()<<endl;
            c1.setheight(50);
            break;

            default:
            cout<<"invalid choice.....:"<<endl;
            break;
        }
    }
    cout<<"thank you......"<<endl;
    return 0;
}