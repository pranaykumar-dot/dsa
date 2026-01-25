#include<iostream>
using namespace std;
namespace mellow{
template<typename T>
struct name{
    T value;
    void function(){
        cout<<"value: "<<value<<endl;
        
    }
};
template<typename T>
class hello{
    public:
    int value;
    name<T> object; 
    void newfunction(){
        object.value=1000;
        value=199;
        cout<<object.value<<endl;
    }
};
}

int main(){
    mellow::hello<int> object;
    object.value=100;
    cout<<object.value<<endl;
    cout<<object.object.value<<endl;
    object.object.function();
    object.newfunction();
    object.object.function();

}