#include<bits/stdc++.h>
using namespace std; 

struct Node{
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
Node* DeleteTail(Node* head){
    Node* tail = head; 

    if(head == NULL || head->next == NULL){
        return NULL; 
    }

    while(tail->next != NULL){
        tail = tail->next; 
    }
    Node* prev = tail->back; 
    prev = tail->back; 
    prev->next = nullptr; 
    tail->back = nullptr; 

    free(tail); 
    return head; 
}
Node* convertArr2DLL(vector<int>& arr){
    Node* head = new Node(arr[0]); 
    Node* Mover = head; 
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        Mover->next = temp; 
        temp->back = Mover; 
        Mover = temp; 
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
    vector<int> arr = {2,4,5,7,8}; 
    Node* head = convertArr2DLL(arr);
    head = DeleteTail(head); 
    print(head); 
    return 0; 
}
