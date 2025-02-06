
#include<stdio.h>
void decrease(int n){
    if( n==0){   //base call
        return;

    }
    printf("%d",n); //code
    decrease(n-1);  //call
}
int main(){
    int n;
    printf("input n:");
    scanf("%d",&n);
    decrease(n);
    return 0;

} 
 




