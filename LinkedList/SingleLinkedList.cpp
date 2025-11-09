#include <iostream>
using namespace std;

// singly linked list node structure
class Node {
public:
    int data;
    Node* next;

    // constructor to initialize a new node with data
    Node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

Node* insertionAtBegin(Node* root, int x)
{
    Node* new_node = new Node(x);
    new_node->next=root;
    return new_node;
}

Node* insertionAtEnd(Node* root, int x){
     Node* new_node = new Node(x);
     Node* curr = root;
     while(curr->next!=NULL)
     {
         curr= curr->next;
     }
     curr->next = new_node;
     return root;
}

Node* insertAtPosition(Node* root,int pos, int x)
{
      Node* new_node = new Node(x);
      Node* curr = root;
      if(pos == 1)
      {
          new_node->next = curr;
          return new_node;
      }
    
      for(int i=0;i<pos-1 && curr!=NULL;i++)
      {
          curr=curr->next;
      }

      if(curr == nullptr)
      {
          cout << "position is out of linked list" << endl;
          return root;
      }
     
      new_node->next = curr->next;
      curr->next = new_node;
      
      return root;
     
}

Node* deleteFromBegin(Node* head)
{
    if(head== nullptr)
      return head;
    
    Node* temp = head;
    head=head->next;
    free(temp);
    return head;
}

Node* deleteFromEnd(Node* head)
{
    Node* curr = head;
    if(curr == nullptr)
      return curr;
  
  if (curr->next == nullptr) {
        delete curr;
        return nullptr;
    }
    
    
    while(curr->next->next !=nullptr)
    {
        curr=curr->next;
    }
    delete curr->next;
     curr->next = nullptr;
    return head;
}

Node* deleteFromSpecificPos(Node* head, int pos)
{
      Node* curr = head;
    if(curr == nullptr)
      return curr;
  
  if (curr->next == nullptr && pos ==1) {
        delete curr;
        return nullptr;
    }
    if (curr->next == nullptr && pos >11) {
        cout << "position is outside the bound" << endl;
        return curr;
    }
    for(int i=1;i<pos-1&&curr!=NULL;i++)
    {
        curr = curr->next;
    }
    if(curr==NULL)
    {
        return head;
    }
    Node* temp = curr->next;
    curr->next = temp->next;
    delete temp;
    
    return head;
}

// Function to search for a key in the linked list
bool searchKey(struct Node *head, int key)
{
    struct Node *curr = head;

    while (curr != NULL)
    {
        if (curr->data == key)
            return true;
        curr = curr->next;
    }

    return false;
}

Node* reverseLinkedList(Node* head)
{
    Node* curr = head;
    Node* prev = nullptr,*next = curr->next;
    while(curr!=NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
   return prev;
}

int main() {
    
    // Create the first node (head of the list)
    Node* head = new Node(10);

    // Link the second node
    head->next = new Node(20);

    // Link the third node
    head->next->next = new Node(30);

    // Link the fourth node
    head->next->next->next = new Node(40);
    
    head= insertionAtBegin(head,4);
    head = insertionAtEnd(head,10);
    head = insertAtPosition(head, 2, 5);
    head = deleteFromBegin(head);
    head = deleteFromEnd(head);
    head = deleteFromSpecificPos(head,2);
    head = reverseLinkedList(head);
    // printing linked list
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
}
