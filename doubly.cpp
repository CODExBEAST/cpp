#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:

    Node(int data1,Node* next1,Node*back1){
        data = data1;
        next= next1;
        back = back1;
    }

    public:
    Node(int data1){
        data=data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertarr2DLL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev ->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
}

Node* deleteHead(Node* head){
    if(head==NULL || head->next == NULL) return NULL;
    Node* prev = head;
    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;
    return head;

}

Node* deletetail(Node*head){
    if(head==NULL || head->next == NULL) return NULL;
    Node* tail =head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
        Node* prev = tail->back;
        prev->next=nullptr;
        tail->back=nullptr;
        delete tail;
    return head;

    
}

Node* delkth(Node*head,int k){
    if(head==NULL) return NULL;
    Node* knode = head;
    int count =0;
    while(knode!=NULL){
        count++;
        if(count==k) break;
        knode=knode->next;
    }
    Node* prev=knode->back;
    Node* front=knode->next;

    if(prev==NULL && front==NULL){
        return NULL;
    }
    else if(prev==NULL){
        return deleteHead(head);
    }
    else if(front==NULL){
        return deletetail(head);
    }
    prev->next=front;
    front->back=prev;
    knode->next=nullptr;
    knode->back=nullptr;
    delete knode;
    return head;
}

void delnode(Node*temp){
    Node* prev = temp->back;
    Node* front=temp->next;
    if(front==NULL){
        prev->next= nullptr;
        temp->back=nullptr;
        free(temp);
        return;
    }
    prev->next=front;
    front->back=prev;
    temp->next = temp->back =nullptr;
    free(temp);
}

Node* inserthead(Node*head,int val){
    Node* newhead = new Node(val,head,nullptr);
    head->back=newhead;
    return newhead;
}

Node* inserttail(Node*head,int val){
    Node* tail=head;
    
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node*prev = tail->back;
    Node* newtail = new Node(val,tail,prev);
    prev->next=newtail;
    tail->back=newtail;
    return head;
    
}

Node* insertbeforekth(Node*head,int k,int val){
    if(k==1){
        return inserthead(head,val);
    }
    Node* knode = head;
    int count =0;
    while(knode!=NULL){
        count++;
        if(count==k) break;
        knode=knode->next;
    }
    Node*prev=knode->back;
    Node* newnode= new Node(val,knode,prev);
    prev->next = newnode;
    knode->back=newnode;
    return head;

}    

void insertbeforegivennode(Node* node,int val){
    Node* prev = node->back;
    Node* newnode= new Node(val,node,prev);
    prev->next= newnode;
    node->back=newnode;
}


int main(){
    vector<int> arr ={12,5,8,7};
    Node* head = convertarr2DLL(arr);
    // head= deletetail(head);
    // head = delkth(head,1);
    // delnode(head);
    // head=insertbeforekth(head,2,20);
    insertbeforegivennode(head->next,100);
    print(head);
    return 0;

}