#include <iostream>
using namespace std;
#include <vector>

class Node
{
public:
  string content;
  string author;
  int likes;
  Node *left;
  Node *right;

  Node(string c, string a, int l)
  {
    content = c;
    author = a;
    likes = l;
    left = NULL;
    right = NULL;
  }
};

// Node* binaryTree(){
//     Node* root = new Node ("This is my post" , "Rahul" ,10);
//     root ->left = new Node ("wow it's amazing !" , "priya" , 8);
//     root ->right = new Node ("great !", "janvi" , 80);
//     root ->left ->left = new Node ("Thanks !", "rahul" ,10);
//     root ->left ->right = new Node ("Thanks buddy !", "rahul" ,11);

//     // root->right->right = new Node ("i like it new place" , "gita" , 90);
//      return root;

// }
//   void preOrder(Node* root){
//     if(root == NULL) return;

//     cout << root->author << " " << root->content << endl;
//     preOrder(root->left);
//     preOrder(root->right);

// };

// void inOrder(Node* root){
//     if(root == NULL) return;

//     inOrder(root->left);
//     cout << root->author << " " << root->content << endl;
//     inOrder(root -> right);

// };

// void postOrder(Node* root){
//     if(root == NULL) return;

//     inOrder(root->left);
//     inOrder(root -> right);
//     cout << root->author << " " << root->content << endl;

// };

// int countComments(Node* root){
//     if(root == NULL) return;
//     int count = 1;

//     count +  countComments(root->left) + countComments(root->right);

// }

// int main(){
//     binaryTree s;

// }


