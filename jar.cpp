#include<iostream>
#include<vector>
#include<fstream>
#include <openacc.h>
using namespace std;
int main(){
    vector<int> object;
    vector<int> temp[5];
    object.push_back(10);
    for(auto i:object){
        cout<<i<<endl;
    }
    vector<vector<int>> o;
    o.push_back({1});
    int count=0;
    while(count<5){
        temp[count]={count+1};
        o.push_back(temp[count]);

        count++;
    }
    auto addres=[](vector<vector<int>> object){for(const auto &row:object){
        cout<<&row<<endl;
        for(int val:row){
            cout<<val<<endl;
        }
        cout<<endl;
        }
    };
    addres(o);
}