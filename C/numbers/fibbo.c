#include <stdio.h>

int main(){
    int n,n1 = 0, n2 = 1,temp,i = 1;
    printf("enter terms:");
    scanf("%d",&n);
    printf("%d, %d, ",n1, n2);
    while(i != n){
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        printf("%d, ", temp);
        i++;
    }
}
