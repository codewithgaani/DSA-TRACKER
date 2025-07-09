#include <bits/stdc++.h>
using namespace std;

void duplicate(int arr[], int n, int key) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }

    if (mpp.find(key) != mpp.end()) {
        cout << "Key " << key << " is present " << mpp[key] << " times" << endl;
    } else {
        cout << "Key " << key << " is not present." << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, key;
        cin >> n;
        int arr[n];
        bool checkInput = false;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] > 999) {
                cout << "Invalid input" << endl;
                checkInput = true;
                break;
            }
        }
        if(checkInput) continue;
        cin>>key;
        duplicate(arr,n,key);
    }
}