#include<stdio.h>
int main() {
    int arr[100][100]; 
    int r, c,max,min;
    printf("Enter number of rows and columns for matrices: ");
    scanf("%d %d", &r, &c);
     printf("Enter elements of mat:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("enter [%d][%d] element:",i,j);
            scanf("%d", &arr[i][j]);
        }

    }
    max=arr[0][0];
    min=arr[0][0];
    int min_row = 0, min_col = 0; 
    int max_row = 0, max_col = 0;
     for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if(arr[i][j]< min){
                  min=arr[i][j];
                  min_row = i;
                  min_col = j;
            }
             if(arr[i][j]> max){
                    max=arr[i][j];
                    max_row = i;
                    max_col = j;
             }

                }
            }
     printf("min %d value at index [%d][%d]\n",min,min_row,min_col);
     printf("max:%d value at index [%d][%d]",max,max_row,max_col);
} 
  
   
