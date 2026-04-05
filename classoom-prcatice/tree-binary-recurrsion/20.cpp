# include <iostream>
using namespace std;

# include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

class binaryTree{
    public:
    Node* root;

    binaryTree(){
        root = NULL;

    }

   Node* createTree(){
    int val;
    cin >> val;

    if(val == -1) return NULL;
    Node* node = new Node (val);
    node ->left = createTree();
    node ->right = createTree();

    return node;

}
    void preOrder(Node* node){
    if(node == NULL) return;

    cout << node -> data << " ";
    preOrder(node ->left);
    preOrder(node ->right);




};

void inOrder(Node* node){
     if(node == NULL) return;

     inOrder(node ->left);
     cout << node -> data << " ";
     inOrder(node -> right);





}

void postOrder(Node* node){
     if(node == NULL) return;
    postOrder(node -> left );
    postOrder(node -> right );
    cout << node -> data << " ";



}


};




int main(){
    binaryTree b;

    // b.root = new Node(1);
    // b.root -> left = new Node (2);
    // b.root -> right = new Node (3);
    // b.root -> left ->left = new Node (-1);
    // b.root -> left ->right = new Node (-2);

    cout << " Enter a value : ";

    b.root = b.createTree();



    cout << "preorder : ";
    b.preOrder(b.root);


    cout << "  \nInorder  : ";
    b.inOrder(b.root);

    cout << "  \npostorder: ";
    b.postOrder(b.root);










   


}