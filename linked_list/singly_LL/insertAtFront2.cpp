#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int value;
    Node * next;
    Node(int value){
        this->value  =value;
        this->next = NULL;

    }
};
Node * insertAtFront(Node * head,int value){
    Node * newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return head;
}

void traverseLL(Node *head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}
int main()
{
  Node * a = new Node(10);
  Node * b= new Node(120);
  Node * c = new Node(20);
  Node * d = new Node(340);
    a->next = b;
    b->next =c;
    c->next =d;
    a = insertAtFront(a,400);
    traverseLL(a);

    return 0;
}