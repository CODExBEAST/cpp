#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>arr;
    int x;
    cout<<"enter size  ";
    cin>>x;
    int ele;
    int count=0;
   
    for(int i=0;i<x;i++){
        cin>>ele;
        arr.push(ele);
        count++;
        if(count==(x/2)+1){
        arr.pop();
        }
    }


    while(!arr.empty()){
        cout<<arr.top()<<" ";
        arr.pop();
    }
    
}