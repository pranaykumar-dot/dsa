#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
    node(int value){
        data=value;

    }
};
node *insert(node *root,int value){//at the front not the end
    if(root==NULL){
        return new node(value);
    }
    node *temp=new node(value);
    temp->next=root;
    root=temp;
    return root;
}
void display(node *root){
    node *temp=root;
    while(temp!=nullptr){
        cout<<temp->data;
        cout<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node  *insertatend(node *root,int value){
    if(root==NULL){
        return new node(value);
    }
    node *temp=root;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new node(value);
    return root;

}
node *remove_value(node *root,int value){
    if(root==NULL){
        cout<<"nothing to remove"<<endl;
        return NULL;
    }
    if(root->data==value){
        node *temp=root;
        root=root->next;
        delete temp;
        return root;
    }
    node *pr=root;
    node *curr=root->next;
    while(curr!=nullptr){
        if(curr->data==value){
            pr->next=curr->next;
            delete curr;
            return root;
        }
        pr=curr;
        curr=curr->next;
    }
    cout<<"value is not found "<<endl;
    return root;
}
int main(){
    node *root=nullptr;
    int i=0;
    while(i<10){
        root=insert(root,i);
        i++;
    }
    display(root);
    root=insertatend(root,900);
    display(root);
    int value;
    cin>>value;
    while(true){

        cout<<"enter the value to break enter 0"<<endl;
        cin>>value;
        if(value==0){
            break;
        }
        int digit=0;
        cout<<"enter thedigit for ll"<<endl;
        cin>>digit;
        root=remove_value(root,digit);
        display(root);

    }


}