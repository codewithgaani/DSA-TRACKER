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
struct tree*inorderpredecessor(struct tree*root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
struct tree*deletenode(struct tree*root,int value){
    if(root==NULL){
        return root;
    }

    else if(value>root->value){
        root->right=deletenode(root->right,value);
    }
    else if(value<root->value){
        root->left=deletenode(root->left,value);
    }
    else{
        if(root->left==NULL){
            struct tree*temp=root->right;
            free(root);
            return temp;
        }
       else if(root->right==NULL){
            struct tree*temp=root->left;
            free(root);
            return temp;
    }
        struct tree*ipre=inorderpredecessor(root);
        root->value=ipre->value;
        root->left=deletenode(root->left,ipre->value);
    }
    return root;
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
    deletenode(root,3);
    deletenode(root,4);
    inorder(root);
    return 0;
}