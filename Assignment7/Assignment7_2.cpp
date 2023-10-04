#include <iostream>

using namespace std;

class Product
{
    int id;
    string title;
    float price;
    char type;

public:
    int getid()
    {
        return id;
    }
    void setid(int id)
    {
        this->id = id;
    }
    string gettitle()
    {
        return title;
    }
    void settitle(string title)
    {
        this->title = title;
    }
    float getprice()
    {
        return price;
    }
    void setprice(float price)
    {
        this->price = price;
    }
    char gettype()
    {
        return type;
    }
    void settype(char type)
    {
        this->type = type;
    }

    Product()
    {
        id = 0;
        title = "";
        price = 0.0;
    }
    Product(int id, string title, float price)
    {
        this->id = id;
        this->title = title;
        this->price = price;
    }
   virtual void accept()
    {
        cout << "Enter id= " << endl;
        cin >> id;
        cout << "Enter title= " << endl;
        cin >> title;
        cout << "Enter price= " << endl;
        cin >> price;
    }
    void display()
    {
        cout << "id= " << this->id << endl;
        cout << "title= " << this->title << endl;
        cout << "price= " << this->price << endl;
    }

    friend void calculate_bill(Product *arr[], int index);
};

class Book : public Product
{

    string author;
    char type;

public:
    Book()
    {
        author = "";
        settype('B');
    }
    Book(string author,int id, string title, float price) : Product(id, title, price)
    {
        this->author = author;
        settype('B');
    }

    void accept()
    {
       Product::accept();

        cout << "Enter the author = ";
        cin >> this->author;
    }

    void display()
    {
        Product::display();
        cout << "author = "<<author;
       
    }
};
class Tape : public Product
{

    string artist;
    char type;

public:
    Tape()
    {
        artist = "";
        settype('T');
    }
    Tape(int id, string title, float price, string artist) : Product(id, title, price)
    {
        this->artist = artist;
        settype('T');
    }
    void accept()
    {
        Product::accept();
        cout << "Enter the artist = ";
        cin >> this->artist;
    }

    void display()
    {
        Product::display();
        cout << "Tape = ";
    }
};
int menu()
{
    int choice;
    cout << "0.Exit" << endl;
    cout << "1.Add book = " << endl;
    cout << "2.Add tape = " << endl;
    cout << "3.display products = " << endl;
    cout << "4.Display bill= " << endl;
    cout << "Enter your choice= " << endl;
    cin >> choice;
    return choice;
}

void calculate_bill(Product *arr[], int index)
{
    float total_price = 0;

    for (int i = 0; i < index; i++)
    {
        if (arr[i]->type == 'B')

        {
            total_price = arr[i]->price * 0.90;
        }
        else
        {
            total_price = arr[i]->price * 0.95;
        }
    }

    cout << "TOTAL PRICE= " << total_price << endl;
}

int main()
{
    int choice;
    Product *arr[3];
    int index = 0;

    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            if (index < 3)
            {
                arr[index] = new Book();
                arr[index]->accept();
                index++;
            }
            else
            {
                cout << "product is full cannot add product " << endl;
            }
            break;
        case 2:
            if (index < 3)
            {
                arr[index] = new Tape();
                arr[index]->accept();
                index++;
            }
            else
            {
                cout << "product is full cannot add product " << endl;
            }
            break;
        case 3:
        {
            for (int i = 0; i < index; i++)
            {
                arr[i]->display();
            }
        }
        case 4:
            calculate_bill(arr, index);

            break;
        default:
            cout << "wrong choice" << endl;
            break;
        }
    }

    for (int i = 0; i < index; i++)
    {
        delete arr[i];
    }
    cout << "Thank you for shopping..." << endl;
    return 0;
}
