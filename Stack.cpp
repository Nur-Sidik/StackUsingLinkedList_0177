#include <iostream>

using namespace std;

// node class
class node
{
public:
    int date;
    node *next;

    node()
    {
        next = NULL;
    }
};

// stack class
class stack
{
private:
    node *top; // Pointer to the top node of the stack

public:
    stack()
    {
        top = NULL; // Intialize the stack  with a null  top pointer
    }
    // push operation: Insert an element into nthe top of the stack
    int push(int value)
    {
        node *newNode = new node();
        newNode->date = value;
        newNode->next = top;
        top = newNode;
        cout << "Push Value: " << value << endl;
        return value;
    }

};