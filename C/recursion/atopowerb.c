#include<stdio.h>
int power(int x,int y){
    if (y==0) return 1;
    return x*power(x,y-1);


}
int main(){
    int a,b;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&b);
    int pow=power(a,b);
    printf("%d raised to the power %d is %d",a,b,pow);
    return 0;
}