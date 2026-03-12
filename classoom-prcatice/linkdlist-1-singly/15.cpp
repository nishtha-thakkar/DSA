# include <iostream>
using namespace std;

// 1. singly -
//A Singly Linked List is a type of linked list where each node points to only one next node.

class Node{
    public:
    int data;
    Node* next;

    Node(int a){
        data=a;
        next=NULL;
    }
};

int main(){
    Node* a = new Node(10);
    Node* b = new Node (100);
    Node* c = new Node (200);
    Node* d = new Node (300);


    a->next=b;
    b->next=c;
    c->next=d;
    d->next=NULL;

    Node* head = a;
    Node*temp =head;


    while(temp!= NULL){
        cout << temp -> data << " -> ";
        temp = temp ->next;


    }
    cout << " NULL ";




}