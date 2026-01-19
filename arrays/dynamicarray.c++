#include<iostream>
using namespace std;
int main(){
    cout<<"dynamic aray"<<endl;
    int *pointer=new int[5];
    *pointer=100;
    cout<<pointer<<endl;
    cout<<*pointer<<endl;
    for(int i=0;i<5;i++){
        pointer[i]=100+i;
        
    }
    for(int i=0;i<5;i++){
        cout<<*pointer<<endl;
        pointer=pointer+1;
    }
    

}