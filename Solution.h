#ifndef SOLUTION_H_INCLUDED
#define SOLUTION_H_INCLUDED
#include <iostream>
#include <cstring>
using namespace std;
template<typename T>
///////////List//////////
class List
{
    public:
    List *pnext;
    T data;
    List(T data=T(),List *pnext=nullptr)
    {
        this->data=data;
        this->pnext=pnext;
    }
} ;

///////////List////////////

///////////Queue///////////

template<typename T>
class Queue
{
protected:
    int Size;
    List<T> *head;
   public:
       Queue();
       ~Queue();
       void EnqueueO1(T data);
       void Rec(List<T>*curr,T data);
       void EnqueueOnRecursive(T data);
       T Dequeue();
       unsigned int Get_Size(){return Size;}
       T Peek();
};

template<typename T>
Queue<T>::Queue()
{
   Size=0;
   head=nullptr;
}


template<typename T>
Queue<T>::~Queue()
{

}

template<typename T>
void Queue<T>::EnqueueO1(T data)
{
    if(head==nullptr)
    {
        head=new List<T>(data);
    }
    else
        {
            List<T>*current=this->head;
            while(current->pnext!=nullptr)
            {
                current=current->pnext;
            }
            current->pnext=new List<T>(data);

        }
        Size++;
}

template<typename T>
void Queue<T>::Rec(List<T>*curr,T data)
{
    if(curr->pnext!=nullptr)
    {
        Rec(curr->pnext,data);
    }
    else
        {
        curr->pnext=new List<T>(data);
        }
}

template<typename T>
void Queue<T>::EnqueueOnRecursive(T data)
{
    if(head==nullptr)
    {
        head=new List<T>(data);
    }
    else
    {
        Rec(head,data);
    }
   Size++;
}

template<typename T>
T Queue<T>::Dequeue()
{
    if(head==nullptr)
    {
        cout << "The queue is empty" << endl;
        return 0;
    }
    else
        {
            List<T> *temp=head;
            head=head->pnext;
            return temp->data;
            delete temp;
            Size--;
        }
}
template<typename T>
T Queue<T>::Peek()
{
    if(head==nullptr)
    {
        cout << "The queue is empty" << endl;
        return 0;
    }
    else
    return head->data;
}



///////////Queue///////////

//////////Stack///////////
template<typename T>
class Stack
{
protected:
    int Size;
    List<T> *head;
  public:
    Stack();
    ~Stack();
    void Push(T data);
    T Pop();
    T Peek();
    unsigned int Get_Size(){return Size;}

};

template<typename T>
Stack<T>::Stack()
{
   Size=0;
   head=nullptr;
}


template<typename T>
 Stack<T>::~Stack()
{


}


template<typename T>
void Stack<T>::Push(T data)
{
    List<T> *p=new List<T>;
    p->data=data;
    p->pnext=head;
    head=p;
    Size++;
}


template<typename T>
T Stack<T>::Pop()
{
    if(head==nullptr)
    {
        cout << "The stack is empty" << endl;
        return 0;
    }
    else
        {
   List<T>*temp=head;
   head=head->pnext;
   return temp->data;
   delete temp;
   Size--;
        }
}

template<typename T>
T Stack<T>::Peek()
{
    if(head==nullptr)
    {
        cout << "The queue is empty" << endl;
        return 0;
    }
    else
    return head->data;
}

#endif // SOLUTION_H_INCLUDED
