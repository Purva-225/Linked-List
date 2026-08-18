/* Structure of doubly linked list Node
class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = nullptr;
        prev = nullptr;
    }
};*/
class Solution {
  public:
    Node* deleteHead(Node* head) {
        // Node* back = head; 
         
        if(head == NULL || head->next == NULL){
            return NULL; 
        }
      
     /*  Node* prev = back->next; 
      head = prev; 
      
       head->prev = nullptr; 
       
        free(back); 
        return head; */ 
        
        Node* prev = head; 
          prev = head->next; 
        Node* last = head; 
        head = prev; 
        prev->prev = nullptr; 
        free(last); 
        return head; 
    }
};
