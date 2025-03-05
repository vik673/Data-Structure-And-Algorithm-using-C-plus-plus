#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    Node(int val) : data(val), nect(nullptr){}
};

class Queue
{
    Node *front, *rear;
    public:
    Queue() : front(nullptr), rear(nullptr){}
    void enqueue(int x){
        Node* newNode = new Node(x);
        if(!rear){
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    int dequeue()
    {
        if(!front) return -1;
        Node* temp = front;
        int val = temp->data;
        front = front->next;
        if(!front) rear = nullptr;
        delete temp;
        return val;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Dequeue : " << q.dequeue() << endl;
    cout << "Dequeue : " << q.dequeue() << endl;
    return 0;
}