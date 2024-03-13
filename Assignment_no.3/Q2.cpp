#include <iostream>
using namespace std;
class Stack
{
private:
    int *array;
    int top;
    int capacity;

public:
    Stack(int size)
    {
        capacity = size;
        array = new int[capacity];
        top = -1;
    }

    ~Stack()
    {
        delete[] array;
    }

    void push(int value)
    {
        if (top == capacity - 1)
        {
            cout << "Stack Overflow " << value << endl;
            return;
        }
        array[++top] = value;
        cout << "Pushed element: " << value << endl;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty." << endl;
            return;
        }
        int value = array[top--];
        cout << "Popped element: " << value << endl;
    }
};

int main()
{
    int size = 5;
    cout << "Size of the stack: " << size << "\n"
         << endl;
    Stack stack(size);

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    cout << "\nPopped 6 elements from the above stack:" << endl;
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.pop();

    return 0;
}
