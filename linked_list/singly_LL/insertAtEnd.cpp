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


void traverseLL(Node * head){
    
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

void insertAtEnd(Node * head,int value){
    // step 1:create a new Node
    Node * newNode = new Node(value);
    // if head is NULL (linked list is empty)then make the newNode head.and return
    if(head == NULL){
        head = newNode;
        return;
    }
    // if head is not null ,thats mean there are node existed.so loop to the last node.then connect lastNodes next to newNode
    Node * temp= head;
    while(temp->next != NULL){
        temp =temp->next;
    }
    // no we are at the last node
    // connect new node to it.
    temp->next = newNode;
}
int main()
{
  Node * head = new Node(10);
  Node * a = new Node(110);
  Node * b = new Node(210);
  Node * c = new Node(40);
  Node * d = new Node(660);
  head->next = a;
  a->next = b;
  b->next = c;
  c->next = d;
    insertAtEnd(head,500);
    traverseLL(head);
    return 0;
}