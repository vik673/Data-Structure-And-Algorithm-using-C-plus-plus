#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr){}
};

Node* merge(Node* a,Node* b)
{
    if(!a) return b;
    if(!b) return a;
    Node* result = nullptr;
    if(a->data <= b->data)
    {
        result = a;
        result->next = merge(a->next, b);
    } else{
        result = b;
        result->next = merge(a,b->next);
    }
    return result;
}

void split(Node* head, Node** a, Node** b)
{
    Node* slow = head;
    Node* fast = head->next;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    *a = head;
    *b = slow->next;
    slow->next = nullptr;
}

void mergeSort(Node** headRef)
{
    Node* head = *headRef;
    if(!head || !head->next) return;
    Node *a, *b;
    split(head, &a, &b);
    mergeSort(&a);
    mergeSort(&b);
    *headRef = merge(a,b);
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
    Node* head = new Node(4);
    head->next = new Node(2);
    head->next->next = new Node(1);
    head->next->next->next = new Node(3);

    cout << "Original List";
    printList(head);

    mergeSort(&head);
    cout << "Sorted List:";
    printList(head);
    return 0;
}