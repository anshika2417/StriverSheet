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

Node* deleteHead(Node* head){
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head==NULL){
        return head;
    }
    if(head->next == NULL) {
        delete head;
        return NULL;
    }
    Node* prev=NULL;
    Node* temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
    return head;
}

Node* deleteFromPosition(Node* head,int pos){
    int cnt=0;
    Node* prev=NULL;
    Node* temp=head;
    if(head == NULL) return head;
    if(pos == 1) return deleteHead(head);
    while(cnt<pos-1 && temp!=NULL){
        cnt++;
        prev=temp;
        temp=temp->next;
    }
    if(temp == NULL) return head;

    prev->next=temp->next;;
    delete temp;

    return head;

}

void display(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=NULL;
    insertAtHead(head,2);
    insertAtHead(head,4);
    insertAtHead(head,45);
    insertAtHead(head,46);
    display(head);   
    deleteFromPosition(head,3);
    display(head);

}