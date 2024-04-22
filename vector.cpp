#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    for(int i=0;i<5;i++){
        int n;
        cin>>n;
        v.push_back(n);

    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;

    //for each element
    for(int n:v){
        cout<<n<<" ";
    }
    cout<<endl;




    return 0;
}