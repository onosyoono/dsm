#include <bits/stdc++.h>

using namespace std;

/*
Problem Statement: kadane algorithm - Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
*/

int Kadane(int arr[], int n) {
    int sum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(sum < 0)
            sum = 0;
        sum += arr[i];
        maxSum = max(sum, maxSum);
    }
    return maxSum;
}


int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int T; cin >> T; //number of testcases
    while(T--)
    {
        
    }
    return 0;
}