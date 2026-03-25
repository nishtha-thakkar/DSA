// stack 
//In DSA (Data Structures & Algorithms), both 
//stack and queue are linear data structures used to store data — 
//but they work in different ways.

// Stack (Meaning)

// A stack works on the principle of:

// 👉 LIFO (Last In First Out)
// = Last item added is the first one to be removed

// Operations:
// Push → add element
// Pop → remove element
// Peek/Top → see top element

# include <iostream>
using namespace std;


class stack{
    int arr[10];
    int size;
    int top;
    public:

    stack(int x){
        size = x;
        top = -1;

    }

    bool isEmpty (){
        return top == -1;
    }

    bool isFull(){
        return top == size-1;
    }

    // push ,pop, peek , length,display

    void dispaly(){
        if(isEmpty()){
            cout << "Stack is empty";
            }
       for(int i = top ; i>=0; i--){
        cout << arr[i] << endl;
       }  
        
    }

    void push(int val){
        if(isFull()){
            cout << "stack is overflow";
        }
        top++;
        arr[top]= val;

    }

    void pop(){
        if(isEmpty()){
            cout << "stack is underflow";
        }
        top--;

    }

    void pickElement(){
        if(isEmpty()){
        cout << "stack is underflow";

        }
        cout << "Element : " <<arr[top] << endl;
    }

    int length(){
        return top + 1;
    }



};

int main(){
    stack s(10);
    s.push(10);
    s.push(100);
    s.push(1000);
    s.pop();
    s.pickElement();
    s.dispaly();
    cout<<"Length of stack is: "<< s.length();

}