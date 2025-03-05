#include<iostream>
#define MAX 100

using namespace std;

class Stack
{
   int top;
   int arr[MAX];
   public:
    Stack() : top(-1) {}
    void push(int x) 
    { if(top<MAX-1)
     arr[++top] = x;
    }
    int pop() { 
        return (top>=0) ? arr[top--] : -1;
    }
    bool isEmpty() {
        return top == -1;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Popped: " << s.pop() << endl;
    cout << "popped : " << s.pop() << endl; 
    
    return 0;
}