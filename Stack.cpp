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
