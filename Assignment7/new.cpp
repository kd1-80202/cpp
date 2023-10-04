
#include<iostream>
using namespace std;

class Employee
{   
    private:
    int id;
    float sal;
    string designation;

    public:
    Employee(int id,float sal,string designation)
    {
        this->id=id;
        this->sal=sal;
        this->designation=designation;
    
    }
     void accept()
    {
     cout<<"Enter id"<<endl;
     cin>>this->id;
     cout<<"Enter sal"<<endl;
     cin>>this->sal;
    
    } 

    void display()
    { 
      cout<<"emp id="<<this->id<<endl;;
      cout<<"emp sal="<<this->sal<<endl;
      cout<<"emp designation="<<this->designation<<endl;
    }

    string get_designation()
    {
        return this->designation;
    }
    
 };

 class Manager:virtual public Employee
 {
    private:
      float bonus;
    public:

       Manager(int id, float sal, string designation ,float bonus): Employee(id,sal,designation) ,bonus(bonus)
       {
        this->bonus=bonus;
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

class Salesman:virtual public Employee
{
  private:
   float comm;
   public:
    
    Salesman(int id, float sal, string designation ,float comm): Employee(id,sal,designation) ,comm(comm)
    {
        this->comm=comm;
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

class Sales_Manager:public Manager,public Salesman
{
   public:

   Sales_Manager(int id, float sal, string designation ,float bonus,float comm): Employee(id,sal,designation) , Manager(id,sal,designation,bonus), Salesman(id,sal,designation,comm)
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
    cout<<"-------------------------"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"1. Accept Employee"<<endl;
    cout<<"2. Display Employee"<<endl;
    cout<<"3. Count of Employees with respect to designation "<<endl;
    cout<<"4. Display respective designation of employees "<<endl;
    cout<<"*******************************************"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
   
    return choice;
 }

 int main()
 {
  int manager_count=0;
  int salesman_count=0;
  int salesmanager_count=0; 
  int choice;
  int index  = 0;
  Employee *arr[10];

  while((choice=menu())!=0)
  {
    switch(choice)
    {
        case 0: break;

        case 1:int choice1;
               cout<<"-------------------------"<<endl;
               cout<<"1. Accept Manager"<<endl;
               cout<<"2. Accept Salesman"<<endl;
               cout<<"3. Accept Salesmanager"<<endl;
               cout<<"-------------------------"<<endl;
               cout<<"Enter your choice : ";
               cin>>choice1;
               
               switch(choice1)
               {  
                case 1:
                if (index<10)
                {
                cout<<"-----------------"<<endl;
                arr[index]=new Sales_Manager(1,5000,"manager",500,200);
                arr[index]->accept();
                index++;
                break;
                }

                case 2:
                if (index<10)
                {
                cout<<"-----------------"<<endl;
                arr[index]=new Sales_Manager(2,6000,"salesman",600,300);
                arr[index]->accept();
                index++;
                break;
                 }

                case 3:
                if (index<10)
                {
                cout<<"-----------------"<<endl;
                arr[index]=new Sales_Manager(3,9000,"salesmanager",800,200);
                arr[index]->accept();
                index++;
                break;
                 }               
               }   
               break;

        case 2: cout<<"-----------------"<<endl;
                cout<<"Employee details"<<endl;
                for(int i=0;i<index;i++)
                {
                cout<<"-----------------"<<endl;
                        arr[i]->display();
                }
                 break;    

        case 3 :                      
                for(int i=0;i<index;i++)
                {
                    if(arr[i]->get_designation() == "manager")
                    {
                        manager_count++;
                    }  

                     if(arr[i]->get_designation() == "salesman")
                    {
                        salesman_count++;
                    }  

                     if(arr[i]->get_designation() == "salesmanager")
                    {
                        salesmanager_count++;
                    }  

                    
                }
                 cout<<"-------------------------"<<endl;
                 cout<<"Employee count "<<endl;
                 cout<<"manager  : "<<manager_count<<endl;
                 cout<<"salesman  : "<<salesman_count<<endl;
                 cout<<"salesmanager : "<<salesmanager_count<<endl;
                
                
                 break;

        case 4: 
                for(int i=0;i<index;i++)
                {
                    if(arr[i]->get_designation() == "manager")
                        exit; 
                }
                cout<<"-----------------"<<endl;
                cout<<"Employee designations "<<endl;
                cout<<"Manager "<<endl;

                for(int i=0;i<index;i++)
                {
                    if(arr[i]->get_designation() == "salesman")
                        exit; 
                }
                
                cout<<"Salesman "<<endl;

                for(int i=0;i<index;i++)
                {
                    if(arr[i]->get_designation() == "salesmanager")
                        exit; 
                }
                cout<<"Sales_manager "<<endl;
    }
  }
     
  for (int i = 0; i < index; i++)
  {
    delete arr[i];
  }

  cout<<"Thank you...."<<endl;
  
    return 0;
 }

	



	
