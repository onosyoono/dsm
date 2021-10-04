#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int n = s.length();
        int m = p.length();
       
        vector<vector<bool>> t(n+1, vector<bool>(m+1,false));
       
        t[0][0] =  true;
        for(int i = 1;i<=m;i++){
            if(p[i-1]=='*'){
                t[0][i] = t[0][i-2];
            }
        }
        
        for(int i = 1;i<=n;i++){
            for(int j = 1;j<=m;j++){
                
                if(s[i-1]==p[j-1] || p[j-1]=='.'){
                    t[i][j] = t[i-1][j-1];
                }
                
                else if(p[j-1]=='*'){
                    if(t[i][j-2]){
                        t[i][j] = true;
                    }
                    else if(s[i-1]==p[j-2] || p[j-2]=='.'){
                        t[i][j] = t[i-1][j];
                    }
                }
                
                else{
                    t[i][j] = false;
                }
            }
        }
        return t[n][m];
    }
};