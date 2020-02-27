/*
 Carter Fluckiger
 Data Structure Spring 2020
 Due: February 28, 2020
 Lab:  A stack is an abstract data type in which elements are added and removed from only
 one end; a “last in, first out” structure. This stack must be implemented as a linked
 structure (ie using pointers).
*/

#include "StackHeader.h"


#include <iostream>

int main()
{

    Stack list;
    if(list.IsFull())
    {
        std::cout<<"Full"<<std::endl;
    }
    if(list.IsEmpty())
    {
        std::cout<<"Empty"<<std::endl;
    }
    list.Push(4);
    list.Push(34);
    list.Push(99);
    list.Pop();
    list.Pop();
    std::cout<<list.Top()<<std::endl;

    return 0;
}
