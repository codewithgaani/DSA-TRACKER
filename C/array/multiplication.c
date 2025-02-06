#include<stdio.h>
void mul(int[100][100],int[100][100],int,int,int,int);
int main() { 
    int a[100][100],b[100][100],i,j,r1,r2,c1,c2;
    printf("Enter number of rows and columns for matrix 1: ");
    scanf("%d%d",&r1,&c1); 
    printf("Enter elements of mat1:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter number of rows and columns for matrix 2: ");
    scanf("%d%d",&r2,&c2); 
    printf("Enter elements of mat2:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    if(c1==r2)
    mul(a,b,r1,c1,r2,c2);
    else
    printf("not possible");
    return 0;
}
void mul(int a[100][100],int b[100][100],int r1,int c1,int r2,int c2)
{
   int c[100][100]={0},i,j,k;
   for(i=0;i<r1;i++){
    for(j=0;j<c2;j++){
    for(k=0;k<c1;k++){
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
        printf("%d ",c[i][j]);
     }
     printf("\n");
     
  }  
}
    