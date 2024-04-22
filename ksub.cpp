#include<iostream>
#include<vector>
using namespace std;
void sub(int i, vector<int>&ds,int s,int arr[],int sum){
    if(i==3){
        if(s==sum){
        for(int i=0;i<ds.size();i++){
            cout<<ds[i];
        }
        cout<<endl;
        }
        return;
    }
    ds.push_back(arr[i]);
    s+=arr[i];
    sub(i+1,ds,s,arr,sum);
    ds.pop_back();
    s-=arr[i];
    sub(i+1,ds,s,arr,sum);
}

int main(){
    int sum=2;
    int arr[]={1,2,1};
    vector<int>ds; 
    sub(0,ds,0,arr,sum);
}