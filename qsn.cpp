#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(6);
    for(int i=0;i<6;i++){
        cin>>v[i];

    }
    cout<<"enter x";
    int x;
    cin>>x;

    int occ=0;

    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         occ=i;
    //     }

    // }
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            occ=i;
            break;
        }
    }


    cout<<occ<<endl;

}