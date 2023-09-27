#include <iostream>


using namespace std;


class stack
{
private:
     int size;
     int top;
     int data;
     int *arr;

public:
stack()
{
    this->size=5;
    this->top=-1;
    this->data=0;
}
  stack(int size)
      {
        this->size=size;
        this->top=-1;
        this->data=0;
        arr=new int[5];
      }
      ~stack()
      {
          delete[] arr;
      }
     
void push()
  {
    if (isFull())
    {
        cout<<"stack is full!!!!"<<endl;

    }
    else
    {
        cout<<"Enter the elements to push: ";
        cin>>data;
        ++top;
        arr[top]=data;
    }
  }


void pop()
  {
    if(isEmpty())
    
        cout<<"stack is empty!!!"<<endl;
    else
       cout<<"popped element is =   "<<arr[top]<<endl;
    arr[top]=0;
    top-=1;
  }
void peek()
  {
    cout<<"Top most element is=  "<<arr[top]<<endl;
  }
  bool isEmpty()
     {
        if (top==-1)
          return true;
     else
          return false;
     }

     bool isFull()
     {
        if (top==size-1)
           return true;
         else
            return false;
     }

};


int  main()
{
    stack s(5);
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.push();
    s.peek();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();

    return 0;
}