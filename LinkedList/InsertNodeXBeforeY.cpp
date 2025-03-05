#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val): data(val), next(nullptr){}
};

Node* insertBeforeY(Node* head, int x, int y)
{
    Node* newNode = new Node(x);
    if(!head) return newNode;
    if(head->data == y)
    {
        newNode->next = head;
        return newNode;
    }
    Node* curr = head;
    while(curr->next && curr->next->data != y) curr = curr->next;
    if(curr->next)
    {
        newNode->next = curr->next;
        curr->next = newNode;
    }
    return head;
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

    cout << "Original List :";
    printList(head);

    head = insertBeforeY(head, 5, 3);
    cout << "Modified list:";
    printList(head);
    
    return 0;
}