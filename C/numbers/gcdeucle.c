#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    while(n1>0 && n2>0){
        if(n1>n2)n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1==0) printf("%d", n2);
    else printf("%d", n1);
}