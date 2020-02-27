#ifndef StackHeader_h
#define StackHeader_h

typedef int Itemtype;

struct Nodetype;

class Stack
{
public:
    Stack();
    ~Stack();
    bool IsEmpty();
    bool IsFull();
    void Push(Itemtype item);
    void Pop();
    Itemtype Top();
private:
    Nodetype* p_top;
};
#endif /* StackHeader_h */
