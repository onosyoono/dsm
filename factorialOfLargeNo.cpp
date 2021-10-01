#include <bits/stdc++.h>

using namespace std;
#define MAX 100000
/*
Problem Statement: Given an integer, the task is to find factorial of the number.
Input:
The first line of input contains an integer T denoting the number of test cases.  
*/

int longMultiply(int ans[], int multiplier, int size) {
    int carry = 0;
    int current_multiple;

    for(int i = 0; i < size; i++) {
        current_multiple = ans[i]*multiplier;
        ans[i] = current_multiple+carry;
        carry = ans[i]/10;
        ans[i]%=10;
    }
    while(carry != 0) {
        ans[size] = carry%10;
        carry/=10;
        size++;
    }
    return size;
}

void longFactorial(int x) {
    int fact[MAX];
    int size = 1;
    fact[0] = 1;


    for(int i = 2; i <= x; i++) {
        size = longMultiply(fact, i, size);
    }
    for(int i = size-1; i >= 0; i--) {
        cout << fact[i];
    } cout << endl;
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
        int x; cin >> x;
        longFactorial(x);
    }
    return 0;
}