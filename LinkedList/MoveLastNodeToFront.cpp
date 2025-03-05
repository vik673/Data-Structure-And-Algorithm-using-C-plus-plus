#include<iostream>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* moveLastToFirst(Node* head)
{
    if(!head || !head->next) return head;
    Node* curr = head;
    Node* prev = nullptr;
    while(curr->next)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = nullptr;
    curr->next = head;
    return curr;
}

void printList(Node* head)
{
    while(head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    
    cout << "Original List ";
    printList(head);
    head = moveLastToFirst(head);
    cout <<"Modified List ";
    printList(head);
    return 0;
}