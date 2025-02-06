#include<stdio.h>
#include<stdlib.h>

//structure for a tree node
struct tree{
    int data;
    struct tree*left;
    struct tree*right;
};
struct tree*newnode(struct tree*root,int data){
    struct tree*newnode=(struct tree*)malloc(sizeof(struct tree));
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;
}
struct tree*create(struct tree*root,int data){
    if(root==NULL)
    return newnode(root,data);
    else if (data<root->data)
    root->left=create(root->left,data);
    else if (data>root->data)
    root->right=create(root->right,data);
    return root;
}
struct tree*inorderpredecessor(struct tree*root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct tree*delete(struct tree*root,int data){
    if(root==NULL)
    return root;
    else if(data<root->data)
    root->left=delete(root->left,data);
    else if(data>root->data)
    root->right=delete(root->right,data);
    else{
        if(root->left==NULL){
            struct tree*temp=(struct tree*)malloc(sizeof(struct tree));
            free(root);
            return temp;
        }
         else if(root->right==NULL){
            struct tree*temp=(struct tree*)malloc(sizeof(struct tree));
            free(root);
            return temp;
    }
    struct tree*ipre=inorderpredecessor(root);
    root->data=ipre->data;
    root->left=delete(root->left,data);
}
return root;
}
int height(struct tree*root){
    if (root==NULL)
    return -1;
    int left=height(root->left);
    int right=height(root->right);
    return( (left>right)?left:right)+1;
}
int countleafnodes(struct tree*root){
    if(root==NULL)
    return 0;
    int count=(root->left==NULL&&root->right==NULL)?1:0;
    return count + countleafnodes(root->left) + countleafnodes(root->right);
}
int twochildren(struct tree*root){
    if(root==NULL)
    return 0;
    int count=(root->left!=NULL&&root->right!=NULL)?1:0;
    return count +twochildren(root->right)+twochildren(root->left);
}
int onechildren(struct tree*root){
    if(root==NULL)
    return 0;
    int count=(root->left!=NULL || root->right!=NULL)?1:0;
    return count +onechildren(root->right)+onechildren(root->left);
}
void inorder(struct tree*root){
    if(root!=NULL){
        inorder(root->left);
        printf("%d  ",root->data);
        inorder(root->right);
    }
}
int main(){
    struct tree*root=NULL;
    int data;
    for(int i=0;i<6;i++){
        scanf("%d",&data);
        root=create(root,data);
    }
    inorder(root);
    printf("\n");
    printf("%d",height(root));
}