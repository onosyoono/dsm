/*
Question: 
  Chef is given an array A consisting of N positive integers. Chef shuffles the array A and creates a new array B of length N, where Bi=(Ai+i)mod2, for each i(1≤i≤N).
  Find the maximum possible sum of integers of the array B, if Chef shuffles the array A optimally.
  
  
Input Format:
    The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
    Each test case contains two lines of input.
    The first line of each test case contains an integer N.
    The second line of each test case contains N space-separated integers A1,A2,…,AN.

Output Format:
    For each test case, print a single line containing one integer - the maximum sum of integers of the array B. 
*/

#include <iostream>
#include<vector>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i + 1 + v[i]) % 2 == 0)
            {
                if (v[i] % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        int ans = 0;
        ans = abs(even - odd);
        ans = n - ans;
        cout << ans << endl;
    }

	return 0;
}

/*
Constraints:
    1≤T≤10^4
    1≤N≤10^5
    1≤Ai≤10^9
    Sum of N over all test cases does not exceed 3*10^5
    
    
Sample Input:
    3
    3
    1 2 3
    3
    2 4 5
    2
    2 4
Sample Output 1 
    2
    3
    1

Explanation
Test case 1: 
    One of the optimal ways to shuffle the array A is [2,1,3]. Then the array B=[(2+1)mod2,(1+2)mod2,(3+3)mod2]=[1,1,0]. 
    So the sum of integers of array B is 2. There is no other possible way to shuffle array A such that the sum of integers of array B becomes greater than 2.   

*/


