#include<iostream>
using namespace std;
class MyArray{
    public:
    int size;
    int noele;
    MyArray(){
        cout<<"consttuctor"<<endl;
        int sizeenter;
        cin>>sizeenter;
        size=sizeenter;
    }
    MyArray(int sizeent){
        size=sizeent;
        if(arr==NULL){
        cout<<"not initialized";
    }
    }
    int *arr=new int[size];
    

};
int main(){
    MyArray object;
    cout<<object.size<<endl;
    cout<<object.arr<<endl;
    
    return 0;
}