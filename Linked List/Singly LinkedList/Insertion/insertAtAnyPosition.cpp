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

Node* inserAtTail(Node* &head, int val){
    if(head == NULL){
        insertAtHead(head,val);
    }
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    temp->next=newNode;
}

Node* insertAtPosition(Node* &head,int pos, int val){
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    if(pos==1){
        return insertAtHead(head,val);
    }
    while(cnt<pos-1){
        cnt++;
        prev=temp;
        temp=temp->next;
    }
    Node* n=new Node(val);
    n->next=prev->next;
    prev->next=n;
}

void display(Node* &head){
    Node* temp=head;
    while(temp != NULL){
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
    insertAtPosition(head,2,96);
    display(head);
}