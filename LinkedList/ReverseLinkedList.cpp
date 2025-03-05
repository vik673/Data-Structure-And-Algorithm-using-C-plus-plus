#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

Node* reverseList(Node* head)
{
    Node* prev = nullptr, *curr = head, *next = nullptr;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
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
        Node*head = new Node(1);
        head->next = new Node(2);
        head->next->next = new Node(3);

        cout << "Original List: ";
        printList(head);

        head = reverseList(head);
        cout << "Reversed List:";
        printList(head);

        return 0;    
}