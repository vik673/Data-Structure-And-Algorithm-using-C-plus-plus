#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr){}
};

void insertEnd(Node* head, int x)
{
    Node* newNode = new Node(x);
    while(head->next) head = head->next;
    head->next = newNode;
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

    cout << "Original List : ";
    printList(head);

    insertEnd(head,4);
    cout<< "Modified List : ";
    printList(head);
    
    return 0; 
}