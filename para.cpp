#include<iostream>
using namespace std;
void summ(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    summ(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    summ(n,0);
}