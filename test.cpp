#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int rec(int value){
    if(value<=0){
        return 0;
    }
    else{
        int result=value+rec(value-1)+rec(value-2);
        return result;
    }
}
int main(){
    int result=rec(5);
    cout<<result<<endl;
    auto method=[result](){
        int value=10;
        cout<<value<<endl;
        cout<<value+result<<endl;
    };
    method();
    vector<int> trips={4,3,12,4,56};
    sort(trips.rbegin(),trips.rend());
    for(auto &i:trips){
        cout<<i<<endl;
    }
    return 0;
}