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
void printKdistance(Node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->key<<" ";
    }else{
        printKdistance(root->left,k-1);
        printKdistance(root->right,k-1);
    }
}
int main(){
    Node*root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    int k=2;
    printKdistance(root,k);
    return 0;
}