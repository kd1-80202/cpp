#include <iostream>
using namespace std;


class Employee
{
private:
    int id;
    float sal;
    string designation;

public:
   
    Employee(int id, float sal,string designation)
    {
        this->id = id;
        this->sal = sal;
        this-> designation = designation ;
    }

    
    void accept()
    {
        cout << "Enter id=  ";
        cin >> this->id;
        cout << "Enter sal=  ";
        cin >> this->sal;
    }
    void display()
    {
        cout<<"Enter designation= "<<designation<<endl;
        cout << "Enter id=  " << id << endl;
        cout << "Enter sal=  " << sal << endl;

    }
    string get_designation()
    {
        return this->designation;
    }
};

class manager : virtual public Employee
{
private:
    float bonus;

public:
    
    manager(int id,float sal,string designation,float bonus):Employee(id,sal,designation),bonus(bonus)

    {
        this->bonus = bonus;
    }
    
     void accept()
       {
       Employee::accept();
     
    
       }

       void display()
       { 
        
      Employee::display();
     

      } 

};

class Salesman : virtual public Employee
{
private:
    float comm;

public:
  

    Salesman(int id,float sal,string designation,float bonus):Employee(id,sal,designation),comm(comm)
    {
        this->comm = comm;
    }

   void  accept()
       {
   
       Employee::accept();
       
    
       }

void display()
       { 
        
      Employee::display();
      
      } 
};



class Salesmanager : public Salesman, public manager
{
public:
 Salesmanager(int id,float sal,string designation,float bonus,float comm):Employee(id,sal,designation),
  manager(id ,sal,designation,bonus),Salesman(id,sal,designation,comm)
  {

  }
    void accept()
    {   
        Employee::accept();
   
    }
        

    void display()
    {   
        Employee::display();
   
    }
        
    };
int menu()
{
  int choice;
  cout<<"--------------------------"<<endl;
  cout<<"0.Exit"<<endl;
  cout<<"1.Accept Employee"<<endl;
  cout<<"2.Display Employee"<<endl;
  cout<<"3.count of employees with respect to designation"<<endl;
  cout<<"4.Display respective designation of employees"<<endl;
  cout<<"*************************"<<endl;
  cout<<"Enter your choice: ";
  cin>>choice;

  return choice;
}
int main()
{
  int manager_count=0;
  int salesman_count=0;
  int salesmanager_count=0;
  int choice;
  int index=0;
  Employee *arr[10];

  while((choice =menu())!=0)
{
    switch (choice)
    {
        case 0:  break;
        case 1:
                int choice1;
                cout<<"----------------------"<<endl;
                cout<<"1.Accept Manager"<<endl;
                cout<<"2.Accept salesman"<<endl;
                 cout<<"3.Accept salesManager"<<endl;
                 cout<<"--------------------------"<<endl;
                 cout<<"Enter your choice: ";
                 cin>>choice1;


                 switch(choice1)
                 {
                    case 1:
                    if(index<10)
                    {
                        cout<<"--------------------------"<<endl;
                        arr[index]=new Salesmanager(1,5000,"manager",500,200);
                        arr[index]->accept();
                        index++;
                        break;
                    }
                    case 2:
                    if(index<10)
                    {
                        cout<<"--------------------------"<<endl;
                        arr[index]=new Salesmanager(2,6000,"salesman",600,300);
                        arr[index]->accept();
                        index++;
                        break;
                    }
                    case  3:
                    if(index<10)
                    {
                        cout<<"--------------------------"<<endl;
                        arr[index]=new Salesmanager(3,9000,"salesmanager",800,200);
                        arr[index]->accept();
                        index++;
                        break;
                    }
                 }
                 break;
        case 2:   cout<<"------------------"<<endl;
                    cout<<"Employee details"<<endl;
                    for(int i=0;i<index;i++)
                    {
                        cout<<"------------"<<endl;
                        arr[i]->display();
                    }
                    break;
    case3:
             for(int i=0;i<index;i++)
             {
                if(arr[i]->get_designation()=="manager")
                {
                   manager_count++;
                }
                if(arr[i]->get_designation()=="salesman")
                {
                 salesman_count++;
                }

              if(arr[i]->get_designation()=="salesmanager")
                {
                   salesmanager_count++;
                }
             }

                cout<<"-----------------------------"<<endl;
                cout<<"Employee count"<<endl;
                cout<<"manager : "<<manager_count<<endl;
                 cout<<"salesman :"<<salesman_count<<endl;
                cout<<"salesmanager  :"<<salesmanager_count<<endl;

                break;


    case4: 
    for(int i=0;i<index;i++)

           {
             if(arr[i]->get_designation()=="manager")
             
             exit;
           }
         cout<<"manager"<<endl;
    for(int i=0;i<index;i++)

           {
              if(arr[i]->get_designation()=="salesman")
             
             exit;
           }
         cout<<"salesman"<<endl;

  for(int i=0;i<index;i++)

           {
            if(arr[i]->get_designation()=="salesmanager")
             
             exit;
           }
         cout<<"sales_manager"<<endl;
                
    }
}

for( int i=0;i<index;i++)
{
    delete arr[i];
}

cout<<"Thank you...."<<endl;
return 0;
}