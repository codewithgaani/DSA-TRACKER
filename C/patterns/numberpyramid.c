#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for( i =1;i<=n;i++){
        int a=i-1;
        for (int q=1;q<=n-i;q++){
            printf(" ");
        }
        for (j =1;j<=i;j++){
            printf("%d",j);
        }
        for(int k =1;k<=i-1;k++){
            printf("%d",a);
            a--;

        }
        printf("\n");


    }

    return 0;
}

//     1
//    121
//   12321
//  1234321
// 123454321