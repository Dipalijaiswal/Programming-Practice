#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node*insertAtPos(Node*head,int x,int pos){
    Node*temp=new Node(x);
    if(head==NULL){
        if(pos==1)
        return temp;
        else return  head;
    }
    if(pos==1){
        temp->next=head;
        return temp;
    }
    Node*curr=head;
    for(int i=1;i<pos-1;i++){
        if(curr==NULL){
            cout<<"Position out of range"<<endl;
            return head;
        }
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void printlist(Node*head){
    Node*curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"";
        curr=curr->next;
    }cout<<endl;
}
int main(){
    Node*head=NULL;
    head=insertAtPos(head,10,1);
    head=insertAtPos(head,20,2);
    head=insertAtPos(head,30,3);
    head=insertAtPos(head,15,2);
    printlist(head);
    return 0;
}