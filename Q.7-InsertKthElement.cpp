/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/

class Solution {
  public:
    Node* insertPos(Node* head, int pos, int val) {
        if(head == NULL){
        return new Node(val); // may be it will have at least 1 element. 
    }
    if(pos == 1){
        Node* temp = new Node(val); 
        temp->next = head; 
        head = temp; 
          return temp; 
    }
    int cnt = 1; Node* temp = head; 
    while(temp != NULL){
        if(cnt == pos-1){
            
        Node* New = new Node(val); 
        New->next = temp->next;
        temp->next = New; 
        break;  
        }
        temp = temp->next; 
        cnt++; 
    }
    return head; 
        
    }
};
