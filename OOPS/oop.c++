#include<iostream>
using namespace std;
class MyArray{
    public:
    static int count;
    int size;
    int noele;
    MyArray(){
        cout<<"consttuctor"<<endl;
        int sizeenter;
        cin>>sizeenter;
        size=sizeenter;
        count++;
    }
    MyArray(int sizeent){
        size=sizeent;
        if(arr==NULL){
        cout<<"not initialized";
        count++;
        arr=new int[size];
    }
    }
    int *arr=new int[size];
    

};
int MyArray::count=0;
int main(){
    MyArray object;
    cout<<object.size<<endl;
    cout<<object.arr<<endl;
    cout<<object.count<<endl;
    MyArray ob(100);
    cout<<ob.count<<endl;
}