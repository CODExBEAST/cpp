#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    public:

    Node(int data,Node* next1){
        val = data;
        next= next1;
    }

    public:
    Node(int data){
        val=data;
        next = nullptr;
    }
};


// PRINT LINK LIST;
void displ(Node*head){
    while(head != NULL){
        cout<<head->val<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

// INPUT LINKLIST
void insertNode(Node* &head,Node* &tail,int val){
    Node* endnode=new Node(val);
    if(head==NULL){
        head=endnode;
        tail=head;
    }
    else{
        tail->next=endnode;
        tail=tail->next;
    }
}

// ###########################################################################################################################################################
// ABOVE SYNTAX COPY AS SAME 2222 SAME
// ############################################################################################################################################




Node* removehead(Node*head){
    Node*temp=head;
    head=head->next;
    delete temp;
    return head;
}




int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    Node* tail=head;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        insertNode(head,tail,ele);
    }
    head=removehead(head);
    displ(head);
    return 0;

}