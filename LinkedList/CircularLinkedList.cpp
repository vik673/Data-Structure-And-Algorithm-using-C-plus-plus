#include<iostream>

using namespace std;

struct CNode
{
  int data;
  CNode* next;
  CNode(int val) : data(val), next(nullptr){}
};

void insertStartCircular(CNode** head, int x)
{
    CNode* newNode = new CNode(x);
    if(!*head)
    {
        newNode->next = newNode;
        *head = newNode;
    } else{
        newNode->next = (*head)->next;
        (*head)->next = newNode;
        int temp = (*head)->data;
        (*head)->data = newNode->data;
        newNode->data = temp;
    }
}

void printCircularList(CNode* head)
{
    if(!head) return;
    CNode* temp = head;
    do{
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);
    cout << endl;
}

int main()
{
    CNode* head = nullptr;
    insertStartCircular(&head,3);
    insertStartCircular(&head, 2);
    insertStartCircular(&head, 1);

    cout << "Circular linked list: ";
    printCircularList(head);
    return 0;
}