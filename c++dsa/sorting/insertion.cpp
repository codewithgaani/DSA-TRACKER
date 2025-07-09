//takes an element and place it in the correct order
#include<bits/stdc++.h>
using namespace std;
void insertionsort(int arr[],int n,int &c,int &s){
    for (int i=1;i<=n-1;i++){
        int j=i;
        //j  1 se ya 1 se bda hoga to j-1 zero tk he jayega -1 nhi jayega
        while(j>=1){
            c++;
            if(arr[j]<arr[j-1]){
           int  temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            s++;
            j--;
        }
        else {
            break;  // If no swap, break early
        }
    }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int comparisons = 0, shifts = 0;
    insertionsort(arr,n,comparisons , shifts );

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << "\nComparisons: " << comparisons;
    cout << "\nShifts: " << shifts << endl;

}
// Best Case (Already Sorted)	O(n)
// Worst Case (Reversed Order)	O(n²)
// Average Case	O(n²)
// 🚀 Insertion Sort is great for nearly sorted arrays because it can run in O(n) in the best case.

