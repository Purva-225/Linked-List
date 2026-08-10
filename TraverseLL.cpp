//TRAVERSE IN LINKED LIST. 

#include <bits/stdc++.h> 
using namespace std; 

class Node{
    public: 
    int data; 
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1; 
        next = next1; 
    }
    public: 
    Node(int data1){
        data = data1; 
        next = nullptr; 
    }
}; 

Node* convertArr2LL(vector<int>& arr){
    Node* head = new Node(arr[0]); 
    Node* Mover = head; 
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        Mover->next = temp; 
        Mover = temp; 
    }
    return head; 
}
int main(){
    vector<int> arr = {3,8,4,7,10}; 
    Node* head = convertArr2LL(arr); 
    Node* temp = head; // NEVER EVER TAMPERED HEAD. 
    while(temp){
        cout<<temp->data<<" "; 
        temp = temp->next; 
    }
}
