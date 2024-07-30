#include<bits/stdc++.h>
using namespace std;
// create node
class Node {
    public:
    int value;
    Node * next;
    Node (int value){
        this->value = value;
        this->next = NULL;
    }
};
// insert at front
Node * insertAtFront(Node *head,int value){
    Node * newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    return head;
}
// traverse LL
void traverseLL(Node *head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->value <<endl;
        temp = temp->next;
    }
}
int main()
{
 Node * head =new Node(10); 
 Node * a =new Node(56); 
 Node * b =new Node(123); 
 Node * c =new Node(11); 
 head->next = a;
 a->next = b;
 b->next = c;
//  insert at head
head = insertAtFront(head,100);
traverseLL(head);

    return 0;
}