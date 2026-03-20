# include <iostream>
using namespace std;


// curd - create - add / upadte / read - display / delate - delate  / rotate


class Node{
    public:
    int data ;
    Node* next;  // it shows next value address

    Node(int val){
        data = val;
        next = NULL;


    }
};

class siglyList{
    public:
    Node* head;

    siglyList(){
     head = NULL;


    }


    void display(){
        if(head == NULL){
            cout <<" singly list is empty";
            return;
        }
        Node* temp = head;
        while (temp != NULL){
            cout << temp -> data << " -> ";
            temp = temp -> next;
        }

        cout << " NULL ";
        




    };
}

//     void addAtBeg(int val){
//         Node*    newNode = new Node(val);
//         newNode -> next = head;
//         head = newNode;

//     };
//      void addAtEnd(int val){
//           Node* newNode = new Node(val);  //
//           if(head == NULL){
//             head = newNode;
//             return;
//           }

//           Node* temp = head;
//           while (temp ->next != NULL){
//             temp = temp ->next;
//           }
//           temp ->next = newNode;

//      }

//      void update(int pos , int val){
//         Node* temp = head;   //  100
//         for(int i = 0 ; i<pos ; i++){
//             if(temp == NULL){
//                 cout << " position is not found " << endl;
//             }
//              temp = temp ->next;   // 
//         }
//         temp ->data = val;   //   
       

//      }


// };
;
int main(){
     siglyList s;
   

    // s.addAtBeg(10);
    // s.addAtBeg(100);
    // s.addAtEnd(20);
    // s.addAtEnd(200);
    // s.update(2 , 600);
    s.display();
    

}