#include<iostream>
using namespace std;
template<typename T>
struct name{
    T value;
    void function(){
        cout<<"value: "<<value<<endl;
        
    }
};
int main(){
    name<int> object;
    object.value=100;
    object.function();
}