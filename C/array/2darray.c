  #include<stdio.h>
  int main(){
    int r,c;
    printf("enter no of rows:");
    scanf("%d",&r);
    printf("enter no of columns:");
    scanf("%d",&c);
    int arr[r][c];
    printf("enter elements of array:");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
              scanf("%d",&arr[i][j]);
        }
    }
        for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
              printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
  
  }