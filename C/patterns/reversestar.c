#include<stdio.h>
int main(){
    int i ,j,k,n;
    printf("enter a number");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for (j=1;j<=n-i;j++){
            printf(" ");
        }
            for (k=1;k<=i;k++){
                int b =64+k;
                printf("%c",b);
            }
             printf("\n");
        
    
    }
    return 0;
   
}
//     *
//    **                    
//     A
//    AB
//   ABC
//  ABCD
// ABCDE
//   ***
//  ****
// *****