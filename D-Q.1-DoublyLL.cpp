#include<bits/stdc++.h>
using namespace std; 

class Node{
    public: 
    int data; 
    Node* next; 
    Node* back; 

    public: 
     Node(int data1, Node* next1, Node* back1){
        data = data1; 
        next = next1; 
        back = back1; 
     }

     public: 
     Node(int data1){
        data = data1; 
        next = nullptr; 
        back = nullptr; 
     }
}; 

Node* ConvertArr2DLL(vector<int> &arr){
    Node* head = new Node(arr[0]); 
    Node* prev = head; 

    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev); 
        prev->next = temp; 
        temp->prev = prev; 
        prev = temp; 
    }
    return head; 
}
void print(Node* head){
    while(head != NULL){
        cout<< head->data <<" "; 
        head = head->next; 
    }
}
int main(){
   vector<int> arr = {23,9,8,4,4,23,98}; 
   Node* head = ConvertArr2DLL(arr); 
   print(head); 
    return 0; 
}

// From Greeks

/* class Node {
  public:
    int data;
    Node* next;
    Node* prev;
    Node(int d) {
        data = d;
        next = nullptr;
        prev = nullptr;
    }
}; */

class Solution {
  public:
    Node* createDLL(vector<int>& arr) {
        Node* head = new Node(arr[0]);
       Node* prev = head; 
       
       for(int i = 1; i<arr.size(); i++){
           Node* temp = new Node(arr[i]);
            prev->next = temp; 
            temp->prev = prev; 
            prev = temp; 
       }
       return head; 
    }
};
