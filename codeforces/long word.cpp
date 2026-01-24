#include<iostream>
using namespace std;
int main(){
    int no;
    cin>>no;
    string name;
    for(int i=0;i<no;i++){
        cin>>name;
        if(name.size()<=10){
            cout<<name<<endl;
        }
        else{
            int count=name.size()-2;
            cout<<name[0]<<to_string(count)<<name[name.size()-1]<<endl;
        }

    }
}