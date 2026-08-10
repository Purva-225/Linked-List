// LENGTH OF LINKED LIST SIMILAR CODE AS TRAVERSAL ONLY ADD "COUNTER"

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
int LenOfLL(Node* head){
    int cnt = 0; 
    Node* temp = head; 
    while(temp){
        temp = temp->next; 
        cnt++; 
    }
    return cnt; 
}
int main(){
    vector<int> arr = {3,8,4,7,10}; 
    Node* head = convertArr2LL(arr); 
    cout<<"LENGTH OF LL IS:"<<LenOfLL(head); 
}
