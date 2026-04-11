#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
   Node(int x){
    data=x;
    next=nullptr;
   }
};
Node* deleteMid(Node* head) {
    if (head == nullptr)
        return nullptr;
    if (head->next == nullptr)
        return nullptr;

    int count = 0;
    Node* p1 = head;
    while (p1 != nullptr) {
        count++;
        p1 = p1->next;
    }

    int middleIndex = count / 2;
    Node* p2 = head;
    for (int i = 0; i < middleIndex - 1; i++) {
        p2 = p2->next;
    }

    Node* temp = p2->next;
    p2->next = temp->next;
    delete temp;
    return head;
}

void printlist(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}
        int main(){
            Node*head=new Node(10);
            head->next=new Node(20);
            head->next->next=new Node(30);
            head->next->next->next=new Node(40);
            head->next->next->next->next=new Node(50);
            cout<<"Original list: ";
            printlist(head);
            head=deleteMid(head);
            cout<<"List after deleting middle node: ";
            printlist(head);
            return 0;   
}