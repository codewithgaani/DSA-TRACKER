//push the maximum to the last by adjacent swaps
//13,46,24,52,20,9
//step 1: 13,24,46,20,9,52
//step 2: 13,24,20.9,46,52
//step 3: 13,20,9,24,46,52
//step 4: 13,9,20,24,46,52
//step 5: 9,13,20,24,46,52
#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[], int n, int &comparisons, int &swaps) {
    for (int i = n - 1; i > 0; i--) {  
        int didswap = 0;
        for (int j = 0; j < i; j++) {
            comparisons++;  
            if (arr[j] > arr[j + 1]) {  
                swap(arr[j], arr[j + 1]);
                swaps++;  
                didswap = 1;
            }
        }
        if (didswap == 0) break;  // If no swaps, array is already sorted
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int comparisons = 0, swaps = 0;
    bubblesort(arr, n, comparisons, swaps);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nComparisons: " << comparisons;
    cout << "\nSwaps: " << swaps << endl;

    return 0;
}

}
//TC: O(N^2) AVERAGE AND WORST
//TC:O(N) BEST CASE
// ✅ The optimized Bubble Sort improves performance for nearly sorted arrays.
// ✅ The worst-case performance remains O(n²), but the best case improves to O(n).
// ✅ This simple modification makes Bubble Sort practical for small datasets.

