#include<stdio.h>
int main(){
    int a=5;
    int* x=&a; // int * ->int ka address store karta he
    *x=7;// a is changed
    int **y=&x; // int ** -> int * ka address store karta he
    printf("%p\n",&a);
    printf("%p\n",y);
    return 0;
}