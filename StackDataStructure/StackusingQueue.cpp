#include<iostream>
#include<queue>

using namespace std;

class Stack
{
    queue<int> q1, q2;
    public:
       void push(int x)
       {
        q2.push(x);
        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
       }
       int pop() {int val = q1.front(); q1.pop(); return  val;}
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Popped " << s.pop() << endl;
    cout << "popped: " << s.pop() << endl;
    return 0;
}