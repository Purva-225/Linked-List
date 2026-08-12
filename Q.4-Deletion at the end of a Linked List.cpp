/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* removeLastNode(Node* head) {
        if(head->next == NULL || head == NULL){
            return NULL; 
        }
        Node* temp = head; 
        while(temp->next->next != NULL){
            temp = temp->next; 
        }
        free(temp->next); 
        temp->next = nullptr; 
        return head; 
    }
};
