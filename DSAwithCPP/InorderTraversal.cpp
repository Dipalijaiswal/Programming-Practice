#include<iostream>
using namespace std;
struct Node{
    int key;
    Node*left;
    Node*right;
    Node(int k){
        key=k;
        left=NULL;
        right=NULL;
    }
};
void inorder(Node*root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->right->left=new Node(4);
    root->right->right=new Node(5);
    inorder(root);
    return 0;
}