#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val, Node* next1){
        data=val;
        next=next1;
    }

    Node(int val){
        data=val;
        next=NULL;
    }
};

Node* convertArr2LL(vector<int>arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

int main(){
    vector<int>arr={12,4,5,6,7};
    Node* head=convertArr2LL(arr);
    cout<<head->data; 
}