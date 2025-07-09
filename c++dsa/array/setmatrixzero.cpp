#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach  TC-(N*M)*(N+M)+(N*M) N3 
void markRow(int i, int m, vector<vector<int>> &arr){
    for(int j = 0; j < m; j++){
        if(arr[i][j] != 0){
            arr[i][j] = -1;
        }
    }
}

void markColumn(int j, int n, vector<vector<int>> &arr){
    for(int i = 0; i < n; i++){
        if(arr[i][j] != 0){
            arr[i][j] = -1;
        }
    }
}

void setMatrixZeroBrute(vector<vector<int>> &arr, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                markRow(i, m, arr);
                markColumn(j, n, arr);
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == -1){
                arr[i][j] = 0;
            }
        }
    }
}

// Better Approach (Using Two Extra Arrays) TC 0(N2)
void setMatrixZeroBetter(vector<vector<int>> &arr, int n, int m){
    int row[n]={0};int col[m]={0};
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(row[i] || col[j]){
                arr[i][j] = 0;
            }
        }
    }
}

// Optimal Approach (Using Constant Space)
void setMatrixZeroOptimal(vector<vector<int>> &arr, int n, int m){
      // int row[n] = {0}; --> matrix[..][0]
    // int col[m] = {0}; --> matrix[0][..]

    int col0 = 1;
    // step 1: Traverse the matrix and
    // mark 1st row & col accordingly:
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                // mark i-th row:
                arr[i][0] = 0;

                // mark j-th column:
                if (j != 0)
                    arr[0][j] = 0;
                else
                    col0 = 0;
            }
        }
    }

    // Step 2: Mark with 0 from (1,1) to (n-1, m-1):
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < m; j++) {
            if (arr[i][j] != 0) {
                // check for col & row:
                if (arr[i][0] == 0 || arr[0][j] == 0) {
                    arr[i][j] = 0;
                }
            }
        }
    }

    //step 3: Finally mark the 1st col & then 1st row:
    if (arr[0][0] == 0) {
        for (int j = 0; j < m; j++) {
            arr[0][j] = 0;
        }
    }
    if (col0 == 0) {
        for (int i = 0; i < n; i++) {
            arr[i][0] = 0;
        }
    }
}
// Function to print matrix
void printMatrix(vector<vector<int>> &arr, int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n, m;
    cout << "Enter matrix dimensions (n m): ";
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    
    cout << "Enter matrix elements: \n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    
    cout << "Original Matrix:\n";
    printMatrix(arr, n, m);
    
    vector<vector<int>> bruteArr = arr, betterArr = arr, optimalArr = arr;
    
    setMatrixZeroBrute(bruteArr, n, m);
    cout << "\nMatrix after Brute Force Approach:\n";
    printMatrix(bruteArr, n, m);
    
    setMatrixZeroBetter(betterArr, n, m);
    cout << "\nMatrix after Better Approach:\n";
    printMatrix(betterArr, n, m);
    
    setMatrixZeroOptimal(optimalArr, n, m);
    cout << "\nMatrix after Optimal Approach:\n";
    printMatrix(optimalArr, n, m);
    
    return 0;
}


  

