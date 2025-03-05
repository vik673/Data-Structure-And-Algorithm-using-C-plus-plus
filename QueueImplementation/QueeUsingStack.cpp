#include<iostream>
#include<stack>

using namespace std;

class Queue
{
    stack<int> s1, s2;
    public:
    void enqueue(int x){ s1.push(x);}
    int dequeue(){
        if(!s1.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int val = s2.top();
        s2.pop();
        return val;
    }
};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Dequeued: " << q.dequeue() << endl;
    return 0;
}