#include<iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data=data1;
        next=next1;
    }

};

int main(){
    Node* x=new Node(2,NULL);
    cout<<x->data;
}