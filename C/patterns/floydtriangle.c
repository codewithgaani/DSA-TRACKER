#include <stdio.h>

int main()
{
    int i,j;
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    int a=0;
    for (i=1;i<=n;i++){     
        for (j=1;j<=i;j++){
            printf("%d ",a+1);
            a++;
        }
        printf("\n");
    }

    return 0;
}
//1
//2 3
//4 5 6
//7 8 9 10