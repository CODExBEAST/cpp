#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;

    Node(int data){
        val = data;
        next= NULL;
    }
};

void insertathead(Node* &head,int val){
    Node* newnode= new Node(val);
    newnode->next = head;
    head= newnode;

}

//traversal
void display(Node* head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertanend(Node* &head,int val){
    Node* endnode=new Node(val);
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next=endnode;
}

void insertatk(Node* &head,int val,int n){
    Node* newnode = new Node(val);
    if(n==0){
        insertathead(head,val);
        return;
    }
    Node* temp=head;
    int current=0;
    while(current!=n-1){
        temp = temp->next;
        current++;
    }
    //temp is pointing to node ar oisition at -1
    newnode->next=temp->next;
    temp->next=newnode;

}

int main(){
    int n;
    cin>>n;
    Node* head = NULL;
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    display(head);
    insertanend(head,3);
    display(head);
    insertanend(head,5);
    display(head);
    insertatk(head,4,n);
    display(head);
    return 0;

}