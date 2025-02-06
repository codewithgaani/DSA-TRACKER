#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node*prev;
    int data;
    struct node*next;
};
struct node*addtoempty(struct node*head,int data){
    struct node*temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    head=temp;
    return head;
}
struct node*addatbeg(struct node*head,int data){
    struct node*temp=malloc(sizeof(struct node));
    temp=addtoempty(temp,data);
    temp->next=head;
    head->prev=temp;
    head=temp;
    return head;
}
struct node*addtoend(struct node*head,int data){
    struct node*temp=malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    struct node*tp=head;
    while (tp->next!=NULL){
        tp=tp->next;
    }
    tp->next=temp;
    temp->prev=tp;
    return head;
}  
    
  void display(struct node*head){
    struct node*ptr=head;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
 }

int main(){
    struct node*head=NULL;
    head=addtoempty(head,45);
    head=addatbeg(head,34);
    printf("Head node data: %d\n",head->data);
    head=addtoend(head,9);
    display (head);
    return 0;
}
