#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val) : data(val) , next(nullptr) {}
};

Node* secondLast(Node* head)
{
    if(!head || !head->next) return nullptr;
    while(head->next->next) head = head->next;
    return head;
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    Node* result = secondLast(head);
    if(result) cout << "Second last node " << result->data << endl;
    else cout << "No second last node" << endl;
    return 0;
}


