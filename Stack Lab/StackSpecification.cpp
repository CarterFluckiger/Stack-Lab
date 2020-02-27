#include "StackHeader.h"
#include <string>
#include <new>
#include <iostream>

struct Nodetype
{
    Itemtype info;
    Nodetype* next;
};

Stack::Stack()
{
    p_top = nullptr;
}
Stack::~Stack()
{
    while(!IsEmpty())
    {
       void pop();
    }
}

void Stack:: Push(Itemtype item)
{
    Nodetype* temp_location = nullptr;
    if(IsFull())
    {
    }
    else if(IsEmpty())
    {
        p_top = new Nodetype;
        p_top->info = item;
    }else if(!IsEmpty())
    {
        temp_location = new Nodetype;
        temp_location->info = item;
        temp_location->next = p_top;
        p_top = temp_location;
    }
}

bool Stack:: IsEmpty()
{
    if(p_top == nullptr)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::IsFull()
{
    Nodetype* temp_location = nullptr;
    try
    {
        temp_location = new Nodetype;
        delete temp_location;
        return false;
    }
    catch(std::bad_alloc& e)
    {
        std::cout <<" The stack is full. "<< std::endl;
        return true;
    }
}

void Stack::Pop()
{
    if(!IsEmpty())
    {
        Nodetype* temp_location = nullptr;
        temp_location = p_top;
        p_top = p_top->next;
        delete temp_location;
    }
}
Itemtype Stack::Top()
{
    return p_top->info;
}
