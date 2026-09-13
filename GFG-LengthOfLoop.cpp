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
// OPTIMIZED BY: TORTOISE AND HARE, SC: O(1), TC: O(N)
int FindLoop(Node* Tor,Node* Hare){
        int cnt = 1; 
        Tor = Tor->next; 
        while(Tor != Hare){
           cnt++; 
         Tor = Tor->next; 
        }
         return cnt;
}

class Solution {
  public:
    int lengthOfLoop(Node *head) {
       Node* Tor = head; 
       Node* Hare = head; 
       while(Hare != NULL && Hare->next != NULL){
                 Tor = Tor->next; 
                 Hare = Hare->next->next; 
                 if(Tor == Hare){
                     return FindLoop(Tor,Hare);
                 }
       }
       return 0; 
    }
};



