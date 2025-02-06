
#include<stdio.h>
int fact(int);
int main(){
    int n,res;
    printf("input n:");
    scanf("%d",&n);
    res=fact(n);
    printf("%d",res);
    return 0;

} 
int fact(int n){
    
    if(n!=0){
        return ((n*fact(n-1)));
    }
    else 
        return 1;
}




