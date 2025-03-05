#include<iostream>

using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* deleteNode(Node* head, int x)
{
    if(!head) return nullptr;
    if(head->data == x)
    {
        Node* temp = head->next;
        delete head;
        return temp;
    }

    Node* curr = head;
    while(curr->next && curr->next->data != x) curr = curr->next;
    if(curr->next)
    {
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
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

    cout << "Original List: ";
    printList(head);

    head = deleteNode(head, 2);
    cout << "Modified List: ";
    printList(head);
    
    return 0;
}