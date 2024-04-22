#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>arr;
    int x;
    cout<<"enter size  ";
    cin>>x;
    int ele;
    int start=0;
    int end=x-1;
   
    for(int i=0;i<x;i++){
        cin>>ele;
        if(ele==0){
            arr.push(ele);
        }
    }


    while(!arr.empty()){
        cout<<arr.top()<<" ";
        arr.pop();
    }
    
}