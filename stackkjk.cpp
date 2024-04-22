#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> rev;
    int x;
    string ele;
    cin>>ele;
    for(int i=0;i<ele.length();i++){
        char ch=ele[i];
        rev.push(ch);
    }

    while(!rev.empty()){
        cout<<rev.top()<<" ";
        rev.pop();
    }
    
} 