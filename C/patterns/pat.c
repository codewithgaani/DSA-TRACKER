#include <stdio.h>
int main()
{
    int i,j,n;
    printf("enter a number:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if (i%2 != 0)
            {
                printf("%d",j);
            }   
            else
            {
                int b = 64 + j;
                printf("%c",b);
            }
            
        }
        printf("\n");

    }

}
// 1
// AB
// 123
// ABCD
// 12345