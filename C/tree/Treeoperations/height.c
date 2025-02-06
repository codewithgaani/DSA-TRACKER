#include<stdio.h>
#include<stdlib.h>
struct tree{
    int value;
    struct tree*left;
    struct tree*right;
};
struct tree*createnode(int value){
    struct tree*newnode=(struct tree*)malloc(sizeof(struct tree));
    newnode->value=value;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct tree *insertnode(struct tree*root,int value){
    if(root==NULL){
        return createnode(value);
        }
    else if(value>root->value){
    root->right=insertnode(root->right,value);
    }
    else if(value<root->value)
    {
    root->left=insertnode(root->left,value);
    }
    return root;
}
struct tree*height(struct tree*root){
    if(root==NULL)
    return -1;
    int leftheight=height(root->left);
     int rightheight=height(root->right);
     return(leftheight>rightheight?leftheight:rightheight)+1;   
}
int countleafnodes(struct tree*root){
    if (root == NULL) {
        return 0; 
    }
    if (root->left == NULL && root->right == NULL) {
        return 1; 
    }
    return countleafnodes(root->left) + countleafnodes(root->right);
}
int twochildren(struct tree*root){
     if (root==NULL)
    return 0;
    int two=(root->left!=NULL&&root->right!=NULL)?1:0;
    return two+ twochildren(root->left)+twochildren(root->right);
}
int parentnodes(struct tree*root){
     if (root==NULL)
    return 0;
    int parent=(root->left==NULL || root->right==NULL)?1:0;
    return parent+parentnodes(root->right)+parentnodes(root->left);
}
void inorder(struct tree*root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d  ",root->value);
        inorder(root->right);
    }
}
int main(){
    struct tree*root=NULL;
    int data;
    for(int i=0;i<5;i++){
        scanf("%d",&data);
        root=insertnode(root,data);
    }
    inorder(root);
    printf("\n");
    return 0;
}