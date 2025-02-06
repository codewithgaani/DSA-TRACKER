#include <stdio.h>

int main()
{
    int i,j;
    int n;
    int a;
    printf("enter value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        if(i%2!=0) a=1;
        else a=0;
        
        for (j=1;j<=i;j++){
            printf("%d",a);
            if (a==0)a=1;
            else a=0;
        }
        printf("\n");
    }

    return 0;
}
//1
//0 1
//1 0 1
//0 1 0 1

// second method

#include <stdio.h>

int main()
{
    int i,j;
    int n;
    printf("enter value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        
        for (j=1;j<=i;j++){
            if((i+j)%2==0)
            printf("1 ");
            else 
            printf("0 ");
        }
        printf("\n");
    }

    return 0;
}
//1
//0 1
//1 0 1
//0 1 0 1