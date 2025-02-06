#include<stdio.h>
#include<stdlib.h>
struct cqueue {
    int size;
    int r;
    int f;
    int *arr;
};
void enqueue(struct cqueue*q,int val){
    if(isfull(q)){
        printf("cqueue overflow" );
        return ;

    }
    else{
      q->r = (q->r+1)%q->size
        q->arr[q->r]=val;
    }
}
  int dequeue(struct cqueue*q){
    int a=-1;
    if(isempty(q)){
        printf("cqueue underflow");
        return -1;
    }
    else {
    q->f=(q->f+1)%q->size;
    a=q->arr[q->f];
  }  
  return a;
  }
 int isfull(struct cqueue *q){
    if((q->r+1)%q->size==q->f)
        return 1;
    else 
        return 0;    
 } 
 int isempty(struct cqueue *q){
    if(q->r==q->f)
        return 1;
    else 
        return 0;    
 } 
void display(struct cqueue*q)
{
    int i;
    if(isempty(q))
    {
        printf("cqueue underflow\n");
        return;
    }
    i=(q->f+1)%q->size;
    while(i!=(q->r+1)%q->size)
    {
        printf("%d\n",q->arr[i]);
        i=(i+1)%q->size;
    }
}
int peek(struct cqueue *q)
{
    if(isempty(q))
    {
        printf("cqueue underflow\n");
        return -1;
    }
    return q->arr[q->r];
}
int main(){
    struct cqueue *q=(struct cqueue *)malloc (sizeof(struct cqueue));
    q->size=30;
    q->f=q->r=0 ;
    q->arr=(int *)malloc (q->size*sizeof(int));
    int ch,data;
 while(1)
    {
        printf("\n");
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Print the rear element\n");
        printf( "4.Print all the elements of the cqueue\n");
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
                printf("The rear element of the cqueue is %d\n",peek(q));
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