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

Node *insertAtFront(Node* head, int new_data)
{
    Node *new_node = new Node(new_data);
    
    new_node->next = head;
    
    if(head!=NULL)
      head->prev = new_node;
      
    return new_node;
}

Node* insertAtEnd(Node* head, int new_data)
{
    Node* new_node = new Node(new_data);
    
    if(head == NULL)
      return new_node;
    else
    {
        Node* curr = head;
        while(curr->next != NULL)
        {
            curr = curr->next;
        }
        curr->next = new_node;
        new_node->prev = curr;
    }
    return head;
}

void printList(Node *head)
{
    Node *curr = head;
    while(curr != NULL)
    {
        cout << " " << curr->data;
        curr = curr->next;
    }
      cout << endl;
}

//Recursive function for forward traversal
void forwardTraversal(Node* head)
{
    if(head == nullptr)
        return;
     
    // print curent node's data   
    cout << head->data << " ";
    
    //Recursive call with the next node
    forwardTraversal(head->next);
}

Node* insertAtPosition(Node *head, int pos, int data)
{
    Node* new_node = new Node(data);
    Node* curr = head;
    if(pos==1){
     new_node->next = head;
     
     if(head!=NULL)
        head->prev = new_node;
        
     head = new_node;
     return head;
    }
    
    for(int i=0;i<pos-1 && curr!=NULL;++i)
    {
        curr = curr->next;
    }
    
    if(curr==NULL)
    {
        delete new_node;
        cout << "new Node is outside the bound" << endl;
        return head;
    }
    
    new_node->prev = curr;
    new_node->next = curr->next;
    curr->next = new_node;
    if(new_node->next != NULL)
      curr->next->prev = new_node;
   
    
    return head;
    
}

Node *delfirst(Node *head)
{
    if(head ==nullptr)
      return nullptr ;
   Node *temp = head;
   
   head = head->next;
   
   if(head!=nullptr)
    head->prev = nullptr;
    
   delete temp;
   return head;
}

Node* delLast(Node* head)
{
    if(head == NULL)
       return NULL;
       
    if(head->next == NULL)
    {
        delete head;
        return NULL;
    }
    
    Node* curr = head;
    while(curr->next != NULL)
      curr = curr->next;
    
    curr->prev->next = NULL;
    
    delete curr;
    
    return head;
}

Node* delPos(Node* head, int x) {
    if (head == NULL || x <= 0)
        return head;

    Node* curr = head;

    // Move to the x-th node (1-based index)
    for (int i = 1; curr != NULL && i < x; ++i) {
        curr = curr->next;
    }

    // If x is out of bounds
    if (curr == NULL)
        return head;

    // If curr is not the head
    if (curr->prev != NULL)
        curr->prev->next = curr->next;
    else
        head = curr->next; // curr is head, update head

    // If curr is not the tail
    if (curr->next != NULL)
        curr->next->prev = curr->prev;

    delete curr;
    return head;
}

void printLast(Node* head)
{
    Node* curr = head;
    while(curr !=NULL)
    {
        cout << curr->data << " ";
        curr = curr -> next;
    }
    cout << endl;
}

int main() {
   Node* head = new Node(1);
   Node* second = new Node(2);
   Node* third = new Node(3);
   
   head->next = second;
   second->prev = head;
   second->next = third;
   third->prev = second;
   int data = 4;
   head = insertAtFront(head, data);
   data =5;
   head = insertAtEnd(head, data);
   data =6;
   head = insertAtPosition(head, 2,data);
    cout << "Forward Traversal: " << endl;
   forwardTraversal(head);
   cout << endl;
   head=delPos(head, 2);
    cout << "Forward Traversal: " << endl;
    forwardTraversal(head);
  
   head= delfirst(head);
   cout << endl;
   cout << "Forward Traversal: " << endl;
   forwardTraversal(head);
    head= delLast(head);
    cout << endl;
    cout << "Forward Traversal: " << endl;
    forwardTraversal(head);
    cout << endl;
    
    return 0;
}
