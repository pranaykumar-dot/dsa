#include<iostream>
using namespace std;
int main(){
    int *pointer= new int[5];
    int *temp=pointer;
    for(int i=0;i<5;i++){
        *temp=i+1;
        temp++;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<< pointer[i]<<endl;
    }
    
}