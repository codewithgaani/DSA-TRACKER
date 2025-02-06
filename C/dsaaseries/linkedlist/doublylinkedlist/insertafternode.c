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
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
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
struct node*addafterpos(struct node*head,int data,int pos){
    struct node*newP=NULL;
    struct node*temp=head;
    struct node*temp2=NULL;
    newP=addtoempty(newP,data);
    while (pos!=1){
        temp=temp->next;
        pos--;
    }
    if (temp->next==NULL)
    {
        temp->next=newP;
        newP->prev=temp;
    }
    else
    {
    temp2=temp->next;
    temp->next=newP;
    temp2->prev=newP;
    newP->next=temp2;
    newP->prev=temp;
    }
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
    head=addafterpos(head,50,2);
    display (head);
    return 0;
}
