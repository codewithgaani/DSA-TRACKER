// #include<stdio.h>
// #define r 3
// #define c 3
// void sumo(int[r][c]);
// int main() { 
//     int arr[r][c];
//     printf("Enter elements of mat1:\n");
//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++) {
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     sumo(arr);
//     return 0;
// }
// void sumo(int arr[r][c])
//     {
    
//     for (int i = 0; i < r; i++) {
//         int  sum=0;
//         for (int j = 0; j < c; j++) {
//             sum=sum+arr[i][j];
           
//         }   
//         printf("%d\n",sum);
//     }
     
// }

// WITHOUT MACROS //

#include<stdio.h>
void sumo(int[100][100],int,int);
int main() { 
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[100][100]; 
    printf("Enter elements of mat1:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    sumo(arr,r,c);
    return 0;
}
void sumo(int arr[100][100],int r,int c)
    {
    
    for (int i = 0; i < r; i++) {
        int  sum=0;
        for (int j = 0; j < c; j++) {
            sum+=arr[i][j];
        }   
        printf("%d\n",sum);
    }
     return;
}