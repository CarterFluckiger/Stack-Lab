#ifndef Stack_h
#define Stack_h

typedef int Itemtype;
// defines Itemtype to int and can be changed as needed

struct Nodetype;
//struct Nodetype is used to make nodes

class Stack
{
public:
    //Pre-conditions- None
    //Post conditions- Sets p_top equal to nullptr
    Stack();
    //Pre-conditions- None
    //Post conditions- Empties the list and sets pointer to nullptr
    ~Stack();
    //Pre-conditions- Object must be created
    //Post conditions- Checks to see if the stack is empty and returns a
    // bool
    bool IsEmpty();
    //Pre-conditions- Object must be created
    //Post conditions- Creates a new node and attempts to add a node.  If it
    // is able to add the node it is not full and returns false.  If it is
    // not full the try catch catches the bad allocation and returns true
    bool IsFull();
    //Pre-conditions- Object must be created
    //Post conditions- Checks to see if it's full, if is is it is done.
    // If it is empty creates a node , if it has items it adds the item as
    //well
    void Push(Itemtype item);
    //Pre-conditions- Object must be created
    //Post conditions- If the Stack is not empty it takes an item of the list
    void Pop();
    //Pre-conditions- Object must be created
    //Post conditions- returns info of top item
    Itemtype Top();
private:
    Nodetype* p_top;
    //p_top is the pointer used
};
#endif /* StackHeader_h */
