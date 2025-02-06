#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
void display(struct node*ptr){
    while(ptr!=NULL){
    printf("Element :%d\n",ptr->data);
    ptr=ptr->next;
    }
}
int main(){
    struct node *head=malloc (sizeof(struct node));
   linkedlistTraversal(head);
    return 0;
}

