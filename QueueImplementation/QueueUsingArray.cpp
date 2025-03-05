#include<iostream>
#define MAX 100

using namespace std;

class Queue{
   int front, rear, arr[MAX];
   public:
    Queue() : front(-1), rear(-1) {}
    void enqueue(int x)
    {
        if(rear == MAX-1) return;
        if(front == -1) front =0;
        arr[++rear] = x;
    }
    int dequeue()
    {
        if(front == -1 || front > rear) return -1;
        return arr[front++];
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Dequeued : " << q.dequeue() << endl;
    cout << "Dequeued : " << q.dequeue() << endl;
    return 0;
}