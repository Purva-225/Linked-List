#include<bits/stdc++.h>
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

Node*TailDel(Node* head){
    Node* tail = NULL; 
    Node* temp = head;  

    if(head == NULL || head->next == NULL){
        return NULL; 
    }
    while(temp->next != NULL){
        tail = temp; 
        temp = temp->next; 
    }
    tail->next = NULL; 
    delete temp; 
    return head; 
}

Node* KthDelete(Node* head, int k){
    Node* temp = head; 
    if(head == NULL){
        return head; 
    }
    if(k == 1){
        temp = head; 
        head = head->next; 
        delete temp; 
        return head;
    }
    int cnt = 0; 
    Node* prev = NULL; 
    while(temp != NULL){
        cnt++; 
        if(cnt == k){
        prev->next = prev->next->next;
        delete temp;  
    }
    prev = temp;
    temp = temp->next; 
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
   vector<int> arr = {23,55,98,2,7,4,1}; 
   Node* head = new Node(23, new Node(55, new Node(98, new Node(2, new Node(7, new Node(4, NULL)))))); 
    head = TailDel(head);
   print(head); 
    return 0; 
}