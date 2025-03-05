#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr){}
};

class Stack
{
    Node* head;
    public:
     Stack() : head(nullptr) {}
     void push(int x)
     {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
     }
     int pop()
     {
        if(!head) return -1;
        int val = head->data;
        Node* temp = head;
        head = head->next;
        delete temp;
        return val;
     }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    return 0;
}