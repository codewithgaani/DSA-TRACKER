// #include<stdio.h>
// void main(){
//     int n,k;
//     printf("enter no of terms:");
//     scanf("%d",&n);
//     printf("enter element whose frequency you want:");
//     scanf("%d",&k);
//     int c=0;
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);}
//     for(int i=0;i<n;i++){
//         if( a[i]==k){
//             c++;

//         }
       
//     }
//     printf("frequency of element is:%d",c);
// }
// #include<stdio.h>
// void main(){
//     int n, x;
//     printf("enter no of terms:");
//     scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         int sum=0;
//         while(a[i]!=0){
//             x =a[i]%10;
//             sum=sum+x;
//             a[i] /= 10;
//         }
//         a[i] = sum;
//     }
//     for(int i=0;i<n;i++){
//         printf("%d, ",a[i]);
//     }

//     }

#include <stdio.h>
#include <math.h>

float fact(float m){
    float fac = 1;
    for(int i = 2; i<=m; i++){
        fac *= i;
    }
    return fac;
}

int main(){
    float x, n,sum = 0;
    scanf("%f%f",&x, &n);
    for(int i = 1; i<= n; i++){
        if(i%2 == 0){
            sum -= (pow(x,i)/fact(i));
        } else {
            sum += (pow(x,i)/fact(i));
        }
    }
    printf("%f", sum);
    return 0;
}
