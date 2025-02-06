#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};

void push(struct stack*s,int data)
{
    if (isfull(s))
    {
        printf("Stack overflow\n");
        return;
    }
    else
    {
        s->top=s->top+1;
        s->arr[s->top]=data;
    }
} 
int pop(struct stack*s)
{
    int value;
    if(isempty(s))
    {
        printf("Stack underflow\n");
        return -1;
    }
    else
    {
        value = s->arr[s->top];
       s->top=s->top-1;
        return value;
    }
}
int peek(struct stack *s)
{
    if(isempty(s))
    {
        printf("Stack underflow\n");
        return -1;
    }
    return s->arr[s->top];
}
void display(struct stack*s)
{
    int i;
    if(isempty(s))
    {
        printf("Stack underflow\n");
        return;
    }
    for(i=s->top;i>=0;i--)
    {
        printf("%d",s->arr[i]);
        printf("\n");
    }
}
int isfull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
        return 1;
    else 
        return 0;    
}
int isempty(struct stack *ptr)
{
    if(ptr->top==-1)
        return 1;
    else 
        return 0;    
}
int main()
{
    int ch,data;
    struct stack *s=(struct stack*)malloc (sizeof (struct stack));
     s->size=50;
     s->top=-1;
     s->arr=(int*)malloc(s->size*sizeof(int)); 
     printf("stack has successfully been created")  ;
    
    while(1)
    {
        printf("\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Print the top element\n");
        printf( "4.Print all the elements of the stack\n");
        printf( "5.Quit\n");
        printf("Enter your choice:");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                printf("Enter the element to be pushed:");
                scanf("%d",&data);
                push(s,data);
                break;
            case 2:
                data=pop(s);
                printf("Deleted element is :%d\n",data);
                break;
            case 3:
                printf("The topmost element of the stack is %d\n",peek(s));
                break;
            case 4:
                display(s);
                break;
            case 5:
                free(s->arr);
                free(s);
                exit(1);
            default :
                printf("wrong choice\n");                   
        }
    }
    return 0;
}