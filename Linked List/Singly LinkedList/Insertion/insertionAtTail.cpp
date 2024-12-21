#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* insertAtHead(Node* &head, int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
}

Node* insertAtTail(Node* &head, int val){
    if(head==NULL){
        insertAtHead(head,val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=NULL;
    insertAtHead(head,12);
    insertAtHead(head,4);
    insertAtHead(head,2);
    display(head);
    insertAtTail(head,67);
    display(head);

}