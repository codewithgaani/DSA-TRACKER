#include <stdio.h>
int ispalindrome(int arr[],int n){ 
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]!=arr[j]) 
        return 0;
        i++;j--;
    }
    return 1;
}
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if (ispalindrome(arr,n)){
        printf("it is palindrome .\n");

    }
    else {
        printf("not palindrome.\n");
    }
    return 0;
}
