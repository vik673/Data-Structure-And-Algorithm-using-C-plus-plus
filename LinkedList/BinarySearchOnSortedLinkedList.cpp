#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr){}
};

Node* findMiddle(Node* head)
{
    Node* slow = head, *fast = head;
    while(fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

Node* binarySearch(Node* head, int key)
{
    Node* left = head;
    Node* right = nullptr;
    do
    {
    Node* mid = findMiddle(left);
    if(!mid) break;
    if(mid->data == key) return mid;
    else if(mid->data < key) left = mid->next;
    else right = mid;
    } while (right != left);
    return nullptr;
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

    cout << "Sorted Linked list: ";
    printList(head);

    int key = 3;
    Node* result = binarySearch(head, key);
    if(result) cout <<"Element " << key << " found in the list" << endl;
    else cout << "Element " << key << "not found in the list" << endl;
    return 0;
}