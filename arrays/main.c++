#include<iostream>
using namespace std;
int main(){
    int array[]={9,0,1,3,10,30};
    for(int i=0;i<6;i++){
        cout<<"i:"<<i<<endl;
        cout<<"array-> ";
        for(int k=0;k<6;k++){
            cout<<array[k];
        }
        cout<<endl;
        for(int j=i+1;j<6;j++){
            cout<<"j:"<<j<<endl;
            cout<<"before-> ";
            for(int k=0;k<6;k++){
            cout<<array[k];
            }
            cout<<endl;
            if(array[i]>array[j]){
                int temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
            cout<<"after-> ";
            for(int k=0;k<6;k++){
            cout<<array[k];
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<"endo of the j loop"<<endl;
        for(int k=0;k<6;k++){
            cout<<array[k];
        }
        cout<<endl;

    }
}