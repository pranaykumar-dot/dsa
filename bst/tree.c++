#include<iostream>
using namespace std;
struct node{
    int data;
    node  *left;
    node *right;
    node (int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
node *insert(node *root,int value){
    if (root==NULL){
        node *n=new node(value);
        return n;
    }
    else if(root->data>value){
        root->left=insert(root->left,value);
    }
    else{
        root->right=insert(root->right,value);
    }
    return root;
}
void display(node *root){
    if(root!=NULL){
        display(root->left);
        cout<<root->data<<endl;
        display(root->right);
    }
}
node *iterative(node *root,int value){
    if(root==nullptr){
        node *n=new node(value);
        return n;
    }
    node *head=root;
    node *current=head;
    while(current!=NULL){
        head=current;
        if(current->data>value){
            current=current->left;
        }
        else{
            current=current->right;
        }
    }
    if(head->data>value){
        head->left=new node(value);
    }
    else{
        head->right=new node(value);
    }
    return root;
}
int main(){
    node *root=NULL;
    root=insert(root,100);
    root=insert(root,53);
    root=insert(root,300);
    display(root);
    root=iterative(root,200);
    display(root);


}