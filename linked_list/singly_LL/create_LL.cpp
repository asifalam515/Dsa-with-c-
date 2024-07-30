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
// lets print some node and it's value here
cout<<b->next->value<<endl;

    return 0;
}