# include <iostream>
using namespace std;


class Queue{
    int arr[10];
    int front , last;
    int size;

    public:
    Queue(int x){
    size = x;
    front = -1;
    last = -1;

    };

    bool isEmpty(){
        return front == -1;
    }

    bool isFull(){
        return last == size-1;
    }

    void display(){
        if(isEmpty()){
            cout << "Queue is empty";
            return;
        }
        for(int i = front ; i <=last ; i++){
            cout << arr[i] << endl;
        }

    }

    void enqueue(int val){
        if(isFull()){
            cout << "Queue is overflow" << endl;
            return;
        }
        if(isEmpty()) front = 0;
        last ++;
        arr[last]= val;

        


    }
  void dequeue(){
    if(isEmpty()){
        cout << "Queue is empty"<< endl;
        return;
    }
    front++;
  }

  void peek(){
    cout << "First peek :" << arr[front] << endl;
    cout << "Last peek : " << arr[last] << endl;
  }
};

int main(){
    Queue q (10);
    q.enqueue(100);
    q.enqueue(1000);
    q.enqueue(200);
    q.enqueue(2000);
    q.dequeue();
    q.peek();
    q.display();

}