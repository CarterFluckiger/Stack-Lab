#include "Stack.h"
#include <string>
#include <new>
#include <iostream>

//Struct of nodes
struct Nodetype
{
    Itemtype info;
    Nodetype* next;
};
Stack::Stack()
{
    p_top = nullptr;
}
//Empties and resets
Stack::~Stack()
{
    while(!IsEmpty())
    {
       Pop();
    }
    p_top = nullptr;
}

void Stack:: Push(Itemtype item)
{
    //checks to see if the stack is full, empty, or has items(not full)
    Nodetype* temp_location = nullptr;
    if(IsFull())
    {
        // if its full it can't add a node
    }
    else if(IsEmpty())
    {
        p_top = new Nodetype;
        p_top->info = item;
        p_top->next = nullptr;
    }else if(!IsEmpty())
    {
        temp_location = new Nodetype;
        temp_location->info = item;
        temp_location->next = p_top;
        p_top = temp_location;
        
    }
    //separate protocols for if its empty or if it
    //has some nodes but isn't full
}
//Checks to see if the stack is empty
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
//"Makes a new node" but it really is checking to see
// if the stack can add another node
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
    //try catch used to see if the stack is full
}
// removes the top item from the stack
void Stack::Pop()
{
    //checks to see if it's empty first
    if(!IsEmpty())
    {
        Nodetype* temp_location = nullptr;
        temp_location = p_top;
        p_top = p_top->next;
        delete temp_location;
    }
}
//Top returns the info of p_top
Itemtype Stack::Top()
{
    if(!IsEmpty())
    {
        return p_top->info;
    }
    else
    {
        return Itemtype(-1);
    }
    //returns -1 if the stack is empty
}
