
#include<iostream>
using namespace std;
class Volume
{
    private:
    int length;
    int width;
    int hight;

    public:
    Volume()
    {
        this->length=1;
        this->width=1;
        this->hight=1;
    }
    void acceptVolume()
    {
        cout<<"Enter the length=";
        cin>>length;
        cout<<"Enter the width=";
        cin>>width;
        cout<<"Enter the hight=";
        cin>>hight;
    }
    void displayVolume()
    {
        cout<<"length="<<length<<endl;
        cout<<"width="<<width<<endl;
        cout<<"hight="<<hight<<endl;
    }
    void volume()
    {
        int volume=length*width*hight;
        cout<<"Volume:"<<volume<<endl;
    }
};
int menu()
{
    int choice;
    cout<<"******************"<<endl;
    cout<<"0.Exit"<<endl;
    cout<<"1.acceptVolume"<<endl;
    cout<<"2.DisplayVolume"<<endl;
    cout<<"3.volume"<<endl;
    cout<<"Enter your choice=";
    cin>>choice;
    cout<<"********************"<<endl;
    return choice;
}
int main()
{
    Volume v;
    int choice;
    while((choice = menu())!=0)
    {
        switch(choice)
        {
            case 1:
            v.acceptVolume();
            break;
            case 2:
            v.displayVolume();
            case 3:
            v.volume();
            break;
            default:
            cout<<"invalid choice.....:"<<endl;
            break;
        }
    }
    cout<<"thank you......"<<endl;
    return 0;
}