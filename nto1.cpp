#include<iostream>
using namespace std;
void print(int n,int i){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    print(n,i-1);
}
int main(){
    int n;
    cin>>n; 
    print(n,n);
}
 