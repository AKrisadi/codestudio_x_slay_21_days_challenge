#include <bits/stdc++.h> 
bool checkDiff(int *arr,int N,int K)
{
    // Write your code here.
    std::unordered_set<int> mp;

 

    for (int i = 0; i < N; i++) {

        int complement1 = arr[i] - K;

        int complement2 = arr[i] + K;

 

        if (mp.find(complement1) != mp.end() || mp.find(complement2) != mp.end()) {

            return true;

        }

        mp.insert(arr[i]);

    }

 

    return false;
}
