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

Node* insertAtHead(Node* &head,int val){
    Node* temp=new Node(val);
    temp->next=head;
    head=temp;
}

Node* deleteHead(Node* &head){
    if(head == NULL){
        return head;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
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
    insertAtHead(head,32);
    insertAtHead(head,12);
    insertAtHead(head,4);
    insertAtHead(head,2);
    display(head);
    deleteHead(head);
    display(head);
}