// #include<stdio.h>
// void sum(int n,int s){
//     if(n==0 ){
//         printf("%d",s);
    
//     return ;}
//     sum(n-1,s+n); 

//     return;
//     }
// int main(){
//     int n;
//     printf("input n:");
//     scanf("%d",&n);
//     sum(n,0);
//     return 0;

// } 


//second method with return type

#include<stdio.h>
int sum(int n){
    if(n!=0)
     return(n+sum(n-1));
    else
     return 0;

}
int main(){
    int n;
    printf("input n:");
    scanf("%d",&n);
    int sumo = sum(n);
     printf("Sum of numbers from 1 to %d: %d", n, sumo);

    return 0;
}

