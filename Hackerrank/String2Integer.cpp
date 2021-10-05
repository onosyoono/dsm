#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        stringstream ss;
        int num,z=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                z++;
            }
        }
        if(z==0){
            return 0;
        }
        ss<<s;
        ss>>num;
        return num;
    }
};