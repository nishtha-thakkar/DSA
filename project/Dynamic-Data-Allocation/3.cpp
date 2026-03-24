# include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class  dynamicMemory{
    public:
    Node* head;

     dynamicMemory(){
        head = NULL;
    }


    void display(){
    if(head == NULL){
        cout << " list is empty " << endl;
        return;
     }

     Node* temp = head;
     while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
     }
     cout << " NULL ";
}

void addatBeg(int val){
    Node* newnode = new Node (val);
    newnode -> next = head;
    head = newnode;

}

void search (int key){
    bool found = false;
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        if(temp ->data == key){
            cout << "Found : " << count << endl;
            found = true;
            return;
        }
        count++;
        temp  = temp->next;


    }
    if(!found){
        cout <<"value is not found " <<endl;
    }

}

void delete_node(int val){
        Node*temp=head;
        Node*pre=NULL;

        while(temp!=NULL){
            if(temp->data==val){
                if(pre==NULL){
                    head=temp->next;
                }
                else{
                    pre->next=temp->next;
                }
                delete temp;
                cout<<"\n Node deleted " << val << endl;
                display();
                return;
            }
            pre=temp;
            temp=temp->next;
        }
        cout<<"value Not founf\n";
        }


void reverse(){
    if(head == NULL || head ->next == NULL){
        cout << "list is empty" << endl;
        return;


    }
    Node* pre = NULL;
    Node* cur = head;
    Node* next = NULL;

    while(cur != NULL){
        next = cur ->next;
        cur ->next = pre;
        pre = cur;
        cur = next;

    }
    head = pre;
}

};



int main(){
     dynamicMemory s;
    s.addatBeg(40);
    s.addatBeg(30);
    s.addatBeg(20);
    s.addatBeg(10);
     cout <<"List is : " << endl;
    s.display();

    cout << "\nserach key :" << " ";
    s.search(30);

    // cout << "display the element" << endl;
    // s.display();

    // cout << "\ndelete the element" << endl;
    s.delete_node(20);

   
    cout << "\nreverse element" << endl;
    s.reverse();

    s.display();
}


