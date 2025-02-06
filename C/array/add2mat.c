//   #include<stdio.h>
//   int main(){
//     int r,c;
//     printf("enter no of rows of mat1 :");
//     scanf("%d",&r);
//     printf("enter no of columns of mat1:");
//     scanf("%d",&c);
//     int arr[r][c];
//     printf("Enter elements of mat1:\n");
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//               scanf("%d",&arr[i][j]);
//         }
//     }
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//               printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }

//     int k,l;
//     printf("enter no of rows of mat2:");
//     scanf("%d",&k);
//     printf("enter no of columns of mat2:");
//     scanf("%d",&l);
//     int brr[k][l];
//         for(int i=0;i<k;i++){
//              for(int j=0;j<l;j++){
//                 scanf("%d",&brr[i][j]);
//         }
//       }
    
//     for(int i=0;i<k;i++)
//     {
//         for(int j=0;j<l;j++)
//         {
//               printf(" %d ",brr[i][j]);
//         }
//         printf("\n");
//     }
//     if(r==k&&c==l){
//         printf("sum of matrices:\n");
//         for (int i=0;i<r;i++){
//             for(int j=0;j<c;j++){
//                 printf(" %d ",arr[i][j]+brr[i][j]);
//             }
//             printf("\n");
//         }
//          }
//          else{
//             printf("matrices cannot be added\n");
//          }
//          return 0;
//  }
 
 
 #include<stdio.h>

int main() {
    const int r=3;
    const int c=3;
    int arr[r][c];int brr[r][c];
    printf("Enter elements of mat1:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter elements of mat2:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("Sum of matrices:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j]=arr[i][j]+brr[i][j];
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
