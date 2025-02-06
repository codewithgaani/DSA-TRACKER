#include <stdio.h>
void pattern1(int n)
{
    int i,j;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
        
    }
}
void pat2(int n){
    int i,j;
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++){
            printf ( "%d ",j );
        }
        printf("\n");
    }

}
void main(){
    int n;
    printf("enter value of n",n);
    scanf("%d",&n);
    pattern1(n);
    pat2(n);
}
