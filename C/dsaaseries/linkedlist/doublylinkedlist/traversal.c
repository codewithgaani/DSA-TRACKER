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
struct node *createList(struct node*head){
        int n,data,i;
        printf("enter the number of nodes:");
        scanf("%d",&n);
        if (n==0) return head;
        printf("enter the element for the node 1: ");
        scanf("%d",&data);
        head=addtoempty(head,data);
        for(i=1;i<n;i++){
            printf("enter the element for node %d:",i+1);
            scanf("%d",&data);
            head=addtoend(head,data);
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
    struct node*head=   NULL;
    struct node*ptr;
    head=createList(head);
    display(head);
    
    
    
}