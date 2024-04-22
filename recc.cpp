#include<iostream>
#include<vector>
using namespace std;


void print(vector<int>&arr){
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
void revv(int l,int e,vector<int>&arr){
    if(l>=e){
        return ;
    }
    swap(arr[l],arr[e]);
    
    revv(++l,--e,arr);
}

int main(){
    vector<int> arr={1,2,3,4,5};
    revv(0,4,arr);
    print(arr);
}
    