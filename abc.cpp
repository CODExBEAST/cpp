#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int num;
    vector<int>arr;
    // int ans[n];
    for(int i=0;i<n;i++){
        cin>>num;
        arr.push_back(num);
    }
    // for(int i=1;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // int first=0;
    // int last=n/2;
    // for(int i=0;i<n;i++){
    //     if(arr[i]%2==0){
    //         ans[first]=arr[i];
    //         first++;
    //     }
    //     else{
    //         ans[last]=arr[i];
    //         last++;
    //     }
    // }
    
    int x;
    cin>>x;
    int y;
    cin>>y;
    int start=x;
    int end=y;
    while(x<=y){
        int temp=arr[x];
        arr[x]=arr[y];
        arr[y]=temp;
        x++;
        y--;
    }


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // vector<int>ans;
    // int arrr[n];
    // int arrx[n];
    // for(int i=0;i<n;i++){
    //     cin>>arrr[i];
    //     ans.push_back(arrr[i]);
    // }
    // for(int i=0;i<n;i++){
    //     cin>>arrx[i];
    //     ans.push_back(arrx[i]);
    // }
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }
}

