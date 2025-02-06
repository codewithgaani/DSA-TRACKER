#include <stdio.h>

int main()
{
    int i,j;
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    int a=n;
    for (i=1;i<=n;i++) {
        for (j=1;j<=a;j++){
            printf ( "%d ", j);
        }
        printf("\n");
        a--;
    }
    return 0;
}

    

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1