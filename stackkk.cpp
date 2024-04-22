#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>arr;
    int size;
    cin>>size;
    int ele;
    for(int i=0;i<size;i++){
        cin>>ele;
        arr.push(ele);
    }
    while(!arr.empty()){
        cout<<arr.top()<<" ";
        arr.pop();
    }
}