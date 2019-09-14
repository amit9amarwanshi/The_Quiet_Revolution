#include<bits/stdc++.h>
using namespace std;
#define ll long long int
struct node{
    ll key;
    struct node *left,*right;
};
struct node *newNode(int item){
    struct node *temp=(struct node*)malloc(sizeof(struct node));
    temp->key=item;
    temp->left=temp->right=NULL;
    return temp;
}
struct node *insert(struct node *node,int key){
    if(node==NULL) return newNode(key);
    if(key<node->key) node->left=insert(node->left,key);
    else if(key>node->key) node->right=insert(node->right,key);
    return node;
}
void inorder(struct node *root){
    if(root!=NULL){
        inorder(root->left);
        printf("%lld\n",root->key);
        inorder(root->right);
    }
}
void preorder(struct node *root){
    if(root!=NULL){
        printf("%lld\n",root->key);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%lld\n",root->key);
    }
}
int main(){
       ios::sync_with_stdio(0);
       cin.tie(nullptr);
       ll t,i,n;
       struct node *root=NULL;
       cin>>n;
       cin>>t;
       root=insert(root,t);       
       for(i=1;i<n;i++){
           cin>>t;
           insert(root,t);
       }
       inorder(root);
    return 0;
}
