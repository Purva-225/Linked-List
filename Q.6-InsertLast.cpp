/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
      if(head == NULL){
          return new Node(x);
      }
      Node* temp = head; 
      while(temp->next != NULL){
       temp = temp->next;
      }
       Node* newNode = new Node(x); // pointing to NULL
       temp->next = newNode; 
        return head; 
    }
};
