#include<iostream>
using namespace std;
void print(string name,int n,int count){
    if(count==n){
        return;
    }
    cout<<name<<endl;
    print(name,n,count+1);
}
int main(){
    int count=0;
    string name;
    cin>>name;
    int n;
    cin>>n;
    print(name,n,count);
}
