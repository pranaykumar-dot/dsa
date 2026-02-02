#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<char,int> map;
    string name="aaaabbbbccccaaaad";
    for(int i=0;i<name.size();i++){
        map[name[i]]++;
    }
    for(char c:name){
        if(map[c]==1){
            cout<<c<<endl;
            break;
        }
    }
    for(auto i:map){
        cout<<i.first<<i.second<<endl;
    }
    cout<<"not found in he map"<<endl;
    return 0;

}