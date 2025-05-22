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

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Is empty" << endl;
        }

        node *temp = top;
        top = top->next;
        cout << "Popped value: " << top->date << endl;
    }

    void peek() {
        if (top == NULL)
        {
            cout << "List Is Empty." << endl;
        }
        else
        {
            node *current = top;
            while (current != NULL)
            {
                cout << current->date << " " << endl;
                current = current->next;
            }
            cout << endl;
        }
    }

    bool isEmpty ()
    {
        return top == NULL;
    }
};

int main() 
{
    stack stack;

    int choice = 0;
    int value;

    while (choice != 5)
    {
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Peek\n";
        cout << "4. exit\n";
        cout << "enter youre choice: ";
        cin >> choice;

 
    }
    return 0;
}