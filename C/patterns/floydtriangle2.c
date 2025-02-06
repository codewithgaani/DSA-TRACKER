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
            a+=2;
        }
        printf("\n");
    }

    return 0;
}
//1
//3 5
//7 9 11
//13 15 17 19