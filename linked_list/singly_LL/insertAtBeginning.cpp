#include<bits/stdc++.h>
using namespace std;
// we are going to create node here:
// Node contain 2 things .Value and the next pointer
class Node{
    // this class is public class
    public:
    int value;
    Node * next;
    Node(int value){
        // we are declare a constructor 
        this->value = value;
        this->next = NULL; //next item's address will be NULL(at the end)

    }
};

Node * insertAtFront(Node * head,int value){
    // Create a new node with the given value.
    Node * newNode = new Node(value);
    // Set the next pointer of the new node to the current head.
    newNode->next = head;
    // Move the head to point to the new node.
    head = newNode;
    return head;


}

void traverseLinkedList(Node*head){
    // first create a temp variable as we don't want to move our head
      // Start from the head of the linked list
    Node *temp =head;
    // Traverse the linked list until reaching the end
    while(temp != NULL){
        // Print the data of the current node
        cout<<temp->value<<endl;
        // // Move to the next node
        temp= temp->next;
    }
}

int main()
{
//   lets create object (dynamic) from the Node class
Node *head = new Node(10);
Node *a = new Node(20);
Node *b = new Node(30);
Node *c = new Node(40);

// lets define the connections 
head->next = a;
a->next = b;
b->next = c;
// we are done with our linked list
// insert at front.thats mean update the head only
head = insertAtFront(head,100);
traverseLinkedList(head);


    return 0;
}