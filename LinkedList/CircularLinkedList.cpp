#include <iostream>
using namespace std;

struct Node{
  int data;
  Node *next,*prev;
  
  Node(int new_data)
  {
      data = new_data;
      next = prev = NULL;
  }
};
Node* insertAtBeginning(Node * head, int key)
{
    Node* new_node = new Node(key);
    Node* curr = head;
    
    if(head == NULL)
    {
        new_node->next = new_node;
        return new_node;
    }
    while(curr->next !=head)
    {
        curr = curr->next;
    }
    new_node->next = curr->next;
    curr->next = new_node;
    head = new_node;
    return head;
}

Node* insertEnd(Node* head, int value)
{
    
    Node* new_node = new Node(value);
    Node* curr = head;
    if(head == NULL)
    {
        new_node->next = new_node;
        return new_node;
    }
    while(curr->next !=head)
    {
        curr = curr->next;
    }
     new_node->next = curr->next;
     curr->next = new_node;
     return head;
}

void printList(Node* head)
{
    if(head == NULL) return;
    Node* curr = head;
    
    do {
        cout << curr->data;
        curr = curr->next;
        if(curr != head) cout << " -> ";
    } while(curr != head);
    cout << endl;
}

Node* insertPosition(Node* head, int data, int pos)
{
   
    
    if(head == NULL)
    {
        if(pos != 1)
        {
            cout << "Invalid position " << endl;
            return head;
        }
         Node* new_node = new Node(data);
        new_node->next = new_node;
        return new_node;
    }
    Node* new_node = new Node(data);
    Node* curr = head;
    
    while(curr->next!=head)
    {
        curr = curr->next;
    }
    
    if(pos==1)
    {
        new_node->next = curr->next;
        curr->next = new_node;
        return new_node;
    }
    // move current to head
    curr = curr->next;
    //Traverse the list to find the insertion point
    for(int i=1;i<pos-1;i++)
    {
        curr = curr->next;
        if(curr->next == head)
        {
            cout << "invalid position" << endl;
            return head;
        }
    }
    new_node->next = curr->next;
    curr->next = new_node;
    
    return head;
}

Node* deleteLastNode(Node* head)
{
    if(head == nullptr)
    {
        return nullptr;
    }
    Node* curr = head;
    if(curr->next == head)
    {
        delete curr;
        return nullptr;
    }
    Node* prev = nullptr;
    while(curr->next != head)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = head;
    delete curr;
    return head;
}
Node* deletespecificNode(Node* head, int key)
{
    if (head == nullptr)
        return nullptr;

    Node* curr = head;
    Node* prev = nullptr;

    // Case 1: Only one node in the list
    if (curr->next == head && curr->data == key)
    {
        delete curr;
        return nullptr;
    }

    // Case 2: More than one node
    do {
        if (curr->data == key)
        {
            if (prev != nullptr)
                prev->next = curr->next;
            else
            {
                // Deleting head node
                Node* temp = head;
                while (temp->next != head)
                    temp = temp->next;
                temp->next = head->next;
                head = head->next;
            }
            delete curr;
            return head;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != head);

    // Key not found
    return head;
}

Node* deleteFirstNode(Node* head)
{
    Node* curr = head;
    if(head == nullptr){
    cout << "list is empty" << endl;
    return nullptr;
    }
    
    if(curr->next == head)
    {
        delete curr;
        return nullptr;
    }
    else
    {
        while(curr->next != head)
        {
            curr= curr->next;
        }
        curr->next = head->next;
        curr = head;
        head = head->next;
        delete curr;
    }
    return head;
}
int main() {
   Node* head = new Node(1);
   head->next = new Node(2);
   head->next->next = new Node(4);
   head->next->next->next = head;
   
   head = insertAtBeginning(head,5);
   printList(head);
   head = insertEnd(head,3);
   printList(head);
   head = insertPosition(head,2,4);
   printList(head);
   head = deletespecificNode(head,5);
   printList(head);
   head = deleteFirstNode(head);
   printList(head);
   head = deleteLastNode(head);
   printList(head);
    return 0;
}
