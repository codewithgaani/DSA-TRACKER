#include<stdio.h>
void swap(int* a ,int* b){
    int temp = *a;
    *a=*b;
    *b=temp;
    return;
}
int main(){
    int a,b;
    printf("enter first number :");
    scanf("%d",&a);
    printf("enter second number:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
    return 0;

}