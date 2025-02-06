#include<stdio.h>
#include<stdlib.h>
struct queue {
    int size;
    int r;
    int f;
    int *arr;
};
void enqueue(struct queue*q,int val){
    if(isfull(q)){
        printf("queue overflow" );
        return ;

    }
    else{
        q->r=q->r+1;
        q->arr[q->r]=val;
    }
}
  int dequeue(struct queue*q){
    int a=-1;
    if(isempty(q)){
        printf("queue underflow");
        return -1;
    }
    else {
    q->f=q->f+1;
    a=q->arr[q->f];
  }  
  return a;
  }
 int isfull(struct queue *q){
    if(q->r==q->size-1)
        return 1;
    else 
        return 0;    
 } 
 int isempty(struct queue *q){
    if(q->r==q->f)
        return 1;
    else 
        return 0;    
 } 
void display(struct queue*q)
{
    int i;
    if(isempty(q))
    {
        printf("queue underflow\n");
        return;
    }
    for(i=q->f+1;i<=q->r;i++)
    {
        printf("%d\n",q->arr[i]);
    }
}
int peek(struct queue *q)
{
    if(isempty(q))
    {
        printf("queue underflow\n");
        return -1;
    }
    return q->arr[q->r];
}
int main(){
    struct queue *q=(struct queue *)malloc (sizeof(struct queue));
    q->size=30;
    q->f=q->r=-1;
    q->arr=(int *)malloc (q->size*sizeof(int));
    int ch,data;
 while(1)
    {
        printf("\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Print the rear element\n");
        printf( "4.Print all the elements of the queue\n");
        printf( "5.Quit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                printf("Enter the element to be enqueued:");
                scanf("%d",&data);
                enqueue(q,data);
                break;
            case 2:
                data=dequeue(q);
                printf("Deleted element is :%d\n",data);
                break;
            case 3:
                printf("The rear element of the queue is %d\n",peek(q));
                break;
            case 4:
                display(q);
                break;
            case 5:
                free(q->arr);
                free(q);
                exit(1);
            default :
                printf("wrong choice\n");                   
        }
    }
    return 0;
}