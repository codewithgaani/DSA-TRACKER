#include<stdio.h>
int main()
{
    int i,j;
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=1;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=a;j+=2)
        {
            printf("%d",j);
            a+=2;
        }
    }
    return 0;
    
}