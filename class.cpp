#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    public:

     student(string name,int roll){
        this->name=name;
        this->roll=roll;
    }


};
int main(){

    student s("Adarsh",2210991176);
    cout<<s.name<<endl;
    cout<<s.roll<<endl;
    return 0;




}