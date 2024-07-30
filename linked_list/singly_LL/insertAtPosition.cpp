#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int value;
    Node * next;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
Node * insertAtHead(Node *& head,int value){
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return newNode;


}
void insertAtPosition(Node * &head,int position,int value){
if(position ==0){
    insertAtHead(head,value);
}
else{
    Node *temp=head;
    Node *newNode = new Node(value);
    for(int i =1;i<position-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    
}
}

void traverseLL(Node * head){
    
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}


int main()
{
  Node * head = new Node(10);
  Node * a = new Node(20);
  Node * b = new Node(30);
  Node * c = new Node(40);
 
  head->next = a;
  a->next = b;
  b->next = c;
 
    insertAtPosition(head,5,100);
    traverseLL(head);
    return 0;
}