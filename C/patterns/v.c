//n!/n+(n-1)!/(n-1)+......


#include<stdio.h>
int fact(int);
int sum(int);
int main(){
    int n,res;
    printf("input n:");
    scanf("%d",&n);
    res=sum(n);
    printf("%d",res);

} 
int fact(int n){
    
    if(n!=0){
        return ((n*fact(n-1)));
    }
    else 
        return 1;
}

int sum(int n){
    if(fact!=0){
        return (fact(n)/n) + sum(n-1);
    }
    else{
        return 0;
    }
}
