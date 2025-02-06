#include<stdio.h>
#define r 3
#define c 3
int sumo(int[][c]);
int main() { 
    int arr[r][c],s;
    printf("Enter elements of mat1:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    s=sumo(arr);
    printf("%d",s);
}
int sumo(int arr[][c])
    {
    int  sum=0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum=sum+arr[i][j];
           
        }
        
    }
     return sum;
}

    


// #include<stdio.h>

// int main() {
//     int arr[100][100]; 

//     int r, c,sum=0;
//     printf("Enter number of rows and columns for matrices: ");
//     scanf("%d %d", &r, &c);

//     printf("Enter elements of mat:\n");
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     printf("matrix is:\n");
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//              printf("%d ",arr[i][j]);
           
//         }
//         printf("\n");
        
//     }
//     int l1,l2,r1,r2;
//      scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
//     printf("enter the rectangle coordinates for sum from (%d,%d) to (%d,%d) :",l1,r1,l2,r2);
//      for (int i = l1 ; i <= l2; i++) {
//         for (int j = r1; j <= r2; j++) {
//             sum=sum+arr[i][j];
           
//         }
        
//     }
//      printf("%d",sum);
// }
