#include <bits/stdc++.h>
using namespace std;
void mostFrequentAlphabet(vector<char> &arr, int n)
{
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i] - 'a']++;
    }
    int maxFreq = 0, maxIndex = -1;

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > maxFreq)
        {
            maxFreq = count[i];
            maxIndex = i;
        }
    }

    if (maxFreq <= 1)
        cout << "No Duplicates Present\n";
    else
        cout << (char)(maxIndex + 'a') << " - " << maxFreq << "\n";
}
int main()
{
    cout << "Name: Krishna bhatt \n Rollno.: 42\n";
    int T, n;
    cin >> T;
    while (T--)
    {
        cin >> n;
        vector<char> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        mostFrequentAlphabet(arr, n);
    }
    return 0;
}

