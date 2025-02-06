#include<stdio.h>
void trans(int[100][100],int,int);
int main() { 
    int r,c;
    scanf("%d%d",&r,&c);
    int a[100][100]; 
    printf("Enter elements of mat1:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    trans(a,r,c);
}
void trans(int a[100][100],int r,int c){
    int b[100][100]={0};
     for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
              b[i][j]=  a[j][i];
        }
     }
      for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ",b[i][j]);
        }
        printf("\n");
      }
}