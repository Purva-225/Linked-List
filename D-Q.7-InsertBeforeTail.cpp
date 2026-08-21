#include<bits/stdc++.h> 
using namespace std; 

struct Node{
    public: 
    int data; 
    Node* next;
    Node* back; 

    public:
    Node(int data1, Node* next1, Node* back1){
        back = back1; 
        data = data1; 
        next = next1; 
    }
    public: 
    Node(int data1){
        data = data1; 
        next = nullptr; 
        back = nullptr; 
    }
}; 

Node* InsertHeadBef(Node*head, int val){
    Node* temp = new Node(val, head, nullptr);
    head->back = temp;  
    return temp; 
}
Node* BefTail(Node*head, int val){
    if(head == NULL || head->next == NULL){
        return InsertHeadBef(head,val);
    }
    Node* tail = head; 
    while(tail->next != NULL){
        tail = tail->next; 
    }
    Node* prev = tail->back; 
    Node* NewNode = new Node(val,tail,prev); 
    prev->next = NewNode;
    tail->back = NewNode; 
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
    vector<int> arr = {2,4,5}; 
    Node* head = convertArr2DLL(arr);
    head = BefTail(head,100); 
    print(head); 
    return 0; 
}
