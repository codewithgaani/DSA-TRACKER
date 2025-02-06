#include<stdio.h>
#include<stdlib.h>
#define max 20
int stack_arr[max];
int top=-1;
void push(int data)
{
    if (isfull())
    {
        printf("Stack overflow\n");
        return;
    }
    else
    {
        top=top+1;
        stack_arr[top]=data;
    }
} 
int pop()
{
    int value;
    if(isempty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    else
    {
        value = stack_arr[top];
        top=top-1;
        return value;
    }
}
int peek()
{
    if(isempty())
    {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack_arr[top];
}
void display()
{
    int i;
    if(isempty())
    {
        printf("Stack underflow\n");
        return;
    }
    for(i=top;i>=0;i--)
    {
        printf("%d",stack_arr[i]);
        printf("\n");
    }
}
int isfull()
{
    if(top==max-1)
        return 1;
    else 
        return 0;    
}
int isempty()
{
    if(top==-1)
        return 1;
    else 
        return 0;    
}
int main()
{
    int ch,data;
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
                push(data);
                break;
            case 2:
                data=pop();
                printf("Deleted element is :%d\n",data);
                break;
            case 3:
                printf("The topmost element of the stack is %d\n",peek());
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
            default :
                printf("wrong choice\n");                   
        }
    }
    return 0;
}