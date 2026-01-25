#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> vec;
struct node{
    int data;
    node *left;
    node *right;
    node(int value){
        data=value;
        left=NULL;
        right=NULL;
    }
};
vector<node*> address;
node *insert(node *root,int value){
    if(root==NULL){
        return new node(value);
    }
    else if(root->data<value){
        root->right=insert(root->right,value);
    }
    else{
        root->left=insert(root->left,value);
    }
    return root;// this the top first funciton call return but this will 
    //never reach the inside function call return 
}
void bfs(node *root){
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    address.push_back(root);
    while(!q.empty()){
        node *curr=q.front();
        q.pop();
        cout<<curr->data<<endl;
        vec.push_back(curr->data);
        if(curr->left!=NULL){
            q.push(curr->left);
            address.push_back(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
            address.push_back(curr->right);
        }
    }
}

int main(){
    node *head=NULL;
    int values[10];
    for (int i = 0; i < 10; i++)
    {
        values[i]=i+100;
    }
    for(int i:values){
        head=insert(head,i);
    }
    bfs(head);
    cout<<"sorted in reverse decreasing order "<<endl;
    sort(vec.rbegin(),vec.rend());
    for(int i:vec){
        cout<<i<<endl;
    }
    for(auto &i:address){
        cout<<i<<endl;
    }
}