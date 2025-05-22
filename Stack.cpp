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

};