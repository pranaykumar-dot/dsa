#include <iostream>
#include<unordered_map>
using namespace std;

int main() {
    unordered_map<int,int> map;
    
    int number;
    cin>>number;
    int count=0;
    for(int i=1;i<=number;i++){
        if(number%i==0){
            count++;
        }
    }
    if(count>2){
        cout<<"notprime"<<endl;
    }
    else{
        cout<<"this is prime"<<endl;
    }
}
