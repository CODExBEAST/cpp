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

Node* rev(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* back = NULL;
    Node* current = head;
    while(current!=NULL){
        back=current->back;
        current->back=current->next;
        current->next = back;
        current = current ->back;
    }
    return back->back;
}

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

Node*addtwonum(Node*num1,Node*num2){
    Node*dummyHead = new Node(-1);
    Node* curr = dummyHead;
    Node* temp1=num1;
    Node* temp2 = num2;
    int carry=0;
    while(temp1!=NULL || temp2!=NULL){
        int sum = carry;
        if(temp1) sum+=temp1->data;
        if(temp2) sum+= temp2->data;
        Node* newnode = new Node(sum%10);
        carry=sum/10;

        curr->next = newnode;
        curr=curr->next;

        if(temp1) temp1=temp1->next;
        if(temp2) temp2=temp2->next;
    }
    if(carry){
        Node* newnode = new Node(carry);
        curr->next = newnode;
    }
    return dummyHead->next;
}


Node* odd(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node*odd=head;
    Node*even=head->next;
    Node*evenHead=head->next;
    while(even!=NULL && even->next!=NULL){
        odd->next=odd->next->next;
        even->next=even->next->next;
        odd=odd->next;
        even=even->next;
    }
    odd->next=evenHead;
    return head;
}
int main(){
     vector<int> arr ={12,5,8,7};
    Node* head = convertarr2DLL(arr);
    // head= deletetail(head);
    // head = delkth(head,1);
    // delnode(head);
    // head=insertbeforekth(head,2,20);
    head=odd(head);
    print(head);
    return 0;

}