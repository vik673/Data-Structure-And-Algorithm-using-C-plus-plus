#include<iostream>

using namespace std;

struct Node {
 int data;
 Node* next;
 Node(int val) : data(val),next(nullptr) {}
};

Node* createLinkedList(int arr[], int n)
{
    if(n==0) return nullptr;
    Node* head = new Node(arr[0]);
    Node* curr = head;
    for(int i=1;i<n;i++)
    {
        curr->next = new Node(arr[i]);
        curr=curr->next;
    }
    return head;
}


Node* moveLastTofirst(Node* head)
{
    if(!head || !head->next) return head;
    Node* curr = head;
    Node*prev = nullptr;
    while(curr->next)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = nullptr;
    curr->next = head;
    return curr;
}

void insertEnd(Node* head, int x)
{
    Node* newNode = new Node(x);
    while(head->next) head = head->next;
    head->next = newNode;
}

Node* inserttBeforeY(Node* head, int x, int y)
{
    Node* newNode = new Node(x);
    if(!head) return newNode;
    if(head->data == y)
    {
        newNode->next = head;
        return newNode;
    }
    Node* curr = head;
    while(curr->next && curr->next->data != y) 
    {
        curr = curr->next;
    }
    if(curr->next)
    {
        newNode->next = curr->next;
        curr->next = newNode;
    }
    return head;
}

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

Node*ReverseList(Node* head)
{
    Node *prev = nullptr, *curr = head, *next = nullptr;
    while(curr)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

Node* findMiddle(Node* head)
{
    Node *slow = head, *fast = head;
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
    do{
        Node* mid = findMiddle(left);
        if(!mid) break;
        if(mid->data == key) return mid;
        else if (mid->data < key) left = mid->next;
        else right = mid;
    } while (right !=left);
    return nullptr;
}

Node* merge(Node* a, Node* b)
{
    if(!a) return b;
    if(!b) return a;
    Node* result = nullptr;
    if(a->data <= b->data)
    {
        result = a;
        result->next = merge(a->next, b);
    }
    else{
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
    int arr[] = {1,2,3,4};
    Node* head = createLinkedList(arr, 4);
    printList(head);
    return 0;
}