#include <iostream>
using namespace std;

class BaseStack
{
public:
    virtual void Push() = 0;
    virtual void display() = 0;
    virtual void Pop() = 0;
    virtual void peek() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class Stack : public BaseStack
{
private:
    int arr[20];
    int size;
    int top;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }

    void Push()
    {
        int val;
        cout << " Enter value : ";
        cin >> val;

        if (isFull())
        {
            cout << " Stack is Overflow " << endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void display()
    {
        if (isEmpty())
        {
            cout << " Stack is empty " << endl;
            return;
        }
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }

    void Pop()
    {
        if (isEmpty())
        {
            cout << " Stack is Underflow " << endl;
            return;
        }

        top--;
    }

    void peek()
    {
        if (isEmpty())
        {
            cout << " Stack is Empty " << endl;
            return;
        }
        cout << " Top element : " << arr[top] << endl;
    }
};

int main()
{
    // BaseStack* b = new Stack(20);
    Stack  b(10);

    int choice;

    do
    {
        cout << " Manage System : " << endl;
        cout << " 1. Add the element : " << endl;
        cout << " 2. display the element : " << endl;
        cout << " 3. pop the element : " << endl;
        cout << " 4. peek the element : " << endl;
        cout << " 5. stack is empty : " << endl;
        cout << " 6. stack is full : " << endl;

        cout << " Enter the choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            b.Push();
            break;

        case 2:
            b.display();
            break;

        case 3:
            b.Pop();
            break;

        case 4:
            b.peek();
            break;

        case 5:
            b.isEmpty();
            break;

        case 6:
           b.isFull();
            break;

        case 7:
            cout << " Programme Exited Successfully";
            break;

        default:
            cout << "Invalid choice\n";
        }

    } while (choice != 7);
}
