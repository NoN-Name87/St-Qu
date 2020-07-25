#include <iostream>
#include "Solution.h"
#include <cstring>
#include <cassert>
using namespace std;


int main()
{


    Queue<int> *intQueue = new Queue<int>();
    Queue<string> *strQueue = new Queue<string>();
    Stack<int> *intStack = new Stack<int>();
    Stack<string> *strStack = new Stack<string>();

    intQueue->EnqueueO1(1);
    intQueue->EnqueueO1(2);
    intQueue->EnqueueO1(3);
    intQueue->EnqueueO1(4);
    intQueue->EnqueueO1(5);
    cout << "Dequeue:" << intQueue->Dequeue() << endl;
    cout << "Dequeue:" << intQueue->Dequeue() << endl;
    cout << "Dequeue:" << intQueue->Dequeue() << endl;
    cout << "Dequeue:" << intQueue->Dequeue() << endl;
    cout << "Dequeue:" << intQueue->Dequeue() << endl;


    strQueue->EnqueueO1("str1");
    strQueue->EnqueueO1("str2");
    strQueue->EnqueueO1("str3");
    strQueue->EnqueueO1("str4");
    strQueue->EnqueueO1("str5");
    cout << "Dequeue:" << strQueue->Dequeue() << endl;
    cout << "Dequeue:" << strQueue->Dequeue() << endl;
    cout << "Dequeue:" << strQueue->Dequeue() << endl;
    cout << "Dequeue:" << strQueue->Dequeue() << endl;
    cout << "Dequeue:" << strQueue->Dequeue() << endl;

    intStack->Push(1);
    intStack->Push(2);
    intStack->Push(3);
    intStack->Push(4);
    intStack->Push(5);
    cout << "Pop:" << intStack->Pop() << endl;
    cout << "Pop:" << intStack->Pop() << endl;
    cout << "Pop:" << intStack->Pop() << endl;
    cout << "Pop:" << intStack->Pop() << endl;
    cout << "Pop:" << intStack->Pop() << endl;

    strStack->Push("str1");
    strStack->Push("str2");
    strStack->Push("str3");
    strStack->Push("str4");
    strStack->Push("str5");
    cout << "Pop:" << strStack->Pop().c_str() << endl;
    cout << "Pop:" << strStack->Pop().c_str() << endl;
    cout << "Pop:" << strStack->Pop().c_str() << endl;
    cout << "Pop:" << strStack->Pop().c_str() << endl;
    cout << "Pop:" << strStack->Pop().c_str() << endl;

    delete intQueue;
    delete strQueue;
    delete intStack;
    delete strStack;
    //call destructor
    return 0;
}
