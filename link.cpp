#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    //constructor;
    Node(int data){
        this -> data = data;
        this ->  next = NULL;
    }

};
void insertt(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail->next;
}
void insert(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

void insertposi(Node* &head,int position ,int d){
    Node* temp = head;
    int cn=1;
    while(cn<position-1){
        temp= temp->next;
        cn++;
    }

    Node* nodetoinsert=new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;
}
int main(){
    Node* node1 = new Node(10);
    cout<<node1 -> data<<endl;
    cout<<node1 -> next<<endl;


    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertt(tail,11);
    insertt(tail,12);
    print(head);
    insertposi(head,3,22);
    print(head);


}