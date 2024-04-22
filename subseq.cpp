#include<iostream>
#include<vector>
using namespace std;
void sub(int i, vector<int>&ds,int arr[]){
    if(i>=3){
        for(int i=0;i<ds.size();i++){
            cout<<ds[i];
        }
        cout<<endl;
        return;
    }
    ds.push_back(arr[i]);
    sub(i+1,ds,arr);
    ds.pop_back();
    sub(i+1,ds,arr);
}

int main(){
    int arr[]={3,2,1};
    vector<int>ds; 
    sub(0,ds,arr);
}