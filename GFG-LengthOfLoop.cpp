/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};*/

//Brute: HASHING TC: O(N*2*LogN), SC: O(N)
class Solution {
  public:
    int lengthOfLoop(Node *head) {
        map<Node*, int> mpp; 
       Node* temp = head; 
        int  timer = 1; 
      while(temp != NULL){
          if(mpp.find(temp) != mpp.end()){
               int val = mpp[temp]; 
               return timer - val; 
        }
        
        mpp[temp] = timer; 
        temp = temp->next; 
        timer++; 
      }
       return 0; 
    }
};
