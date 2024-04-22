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

Node* del(Node*head){
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete(temp);
    return head;

}
Node* convert(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}

Node* deltail(Node*head){
    Node* temp = head;
    if(head==NULL || head->next == NULL) return NULL;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=nullptr;
    return head;


}

// Node* delk(Node*head,int &posi){
//     Node* temp = head;
//     if(head==NULL || head->next == NULL) return NULL;
//     temp->next= posi->next;
//     free(temp->next);
//     temp->next=nullptr;
//     return head;
// }

void displ(Node*head){
    while(head != NULL){
        cout<<head->val<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

Node* removehead(Node*head){
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* deletail(Node* head){
    if(head->next==NULL || head==NULL) return NULL;
    Node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
    return head;
}

Node* nth(Node*head,int k){
    if(head==NULL) return head;

    
    if(k==1){
        Node* temp = head;
        head=head->next;
        free(temp);
        return head;
    }
    Node* temp = head;
    int count =0;
    Node*pre=NULL;
    while(temp!=NULL){
        count++;
        if(count==k){
            pre->next=pre->next->next;
            free(temp);
            break;

        }
        pre=temp;
        temp=temp->next;
        
    }
    return head;


}

Node* ele(Node*head,int el){
    if(head==NULL) return head;

    
    if(head->val==el){
        Node* temp = head;
        head=head->next;
        free(temp);
        return head;
    }

    Node* temp = head;
    Node*pre=NULL;
    while(temp!=NULL){
        
        if(temp->val==el){
            pre->next=pre->next->next;
            free(temp);
            break;

        }
        pre=temp;
        temp=temp->next;
        
    }
    return head;


}

Node*newhead(Node*head,int x){
    Node*temp=new Node(x,head);
    return temp;
}

Node*newtail(Node*head,int y){
    if(head==NULL){
        return new Node(y);
    }
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node*newnode = new Node(y);
    temp->next=newnode;
    return head;

    
}


int main(){
    vector<int> arr ={12,5,8,7};
    Node* head = convert(arr);
    // head = removehead(head);
    // head=newhead(head,200);
    head=newtail(head,55);
    displ(head);
    return 0;

}

