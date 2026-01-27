#include<iostream>
#include<queue>
#include<stack>
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
void inorder(node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}


void preorder(node *root){
    if(root!=NULL){
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(node *root){
    if(root!=NULL){
        
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
    }
}



void dfs(node *root){
    if(root==NULL) return;
    stack<node*> s;
    s.push(root);
    while(!s.empty()){
        node *curr=s.top();
        s.pop();
        cout<<curr->data<<endl;
        if(curr->right!=nullptr){
            s.push(curr->right);
        }
        if(curr->left!=nullptr){
            s.push(curr->left);
        }
    }

}

void bfs(node *root){
    if(root==NULL) return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *curr=q.front();
        q.pop();
        cout<<curr->data<<endl;
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
}

int main(){
    node *root=NULL;
    root=insert(root,100);
    root=insert(root,53);
    root=insert(root,300);
    display(root);
    root=iterative(root,200);
    display(root);
    cout<<"inorder of tree"<<endl;
    inorder(root);
    cout<<"preorder of tree"<<endl;
    preorder(root);
    cout<<"postorder of tree"<<endl;
    postorder(root);
    cout<<"bfs"<<endl;
    bfs(root);
    cout<<"dfs depth first search"<<endl;
    dfs(root);


}