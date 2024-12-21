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
    Node* n=new Node(val);
    n->next=head;
    head=n;
}

Node* insertAtTail(Node* &head, int val){
    if(head==NULL){
        return insertAtHead(head,val);
    }
    Node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=new Node(val);
}

Node* insertAtPosition(Node* &head, int pos, int val){
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

Node* insertBeforeElement(Node* &head,int ele,int val){
    if(head == NULL || head->data == ele){
        return insertAtHead(head,val);
    }

    Node* temp=head;
    while(temp->next->data != ele){
        temp=temp->next;
    }
    Node* newNode=new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;
}

void display(Node* &head){
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
    insertAtPosition(head,4,67);
    display(head);
    insertBeforeElement(head,32,31);
    display(head);
}