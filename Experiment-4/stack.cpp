#include <iostream>
#define SIZE 10

using namespace std;

class Stack
{
    int stack[SIZE], top;

public:
    Stack() // Constructor for initializing top
    {
        top = -1;
    }

    void push(int num)
    {
        if (top == SIZE - 1) // Stack is full
        {
            cout << "\nSTACK OVERFLOW";
        }
        else
        {
            top++;
            stack[top] = num;
        }
    }

    void pop()
    {
        int num;
        if (top == -1) // Stack is empty
        {
            cout << "\nSTACK UNDERFLOW";
        }
        else
        {
            num = stack[top];
            top--;
            cout << "\nELEMENT DELETED: " << num;
        }
    }

    void traverse()
    {
        if (top == -1)
        {
            cout << "\nSTACK IS EMPTY";
        }
        else
        {
            cout << "\n\nSTACK ELEMENTS\n";

            for (int i = top; i >= 0; i--)
            {
                cout << stack[i] << endl;
            }
        }
    }
};

int main()
{
    Stack s;

    s.traverse();

    s.push(10);
    s.push(20);
    s.push(30);

    s.traverse();

    s.pop();

    s.traverse();
    return 0;
}