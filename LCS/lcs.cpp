#include<bits/stdc++.h>
using namespace std;

int findLCS(string a,string b)
{
    int n = a.size();
    int m = b.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
             if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[n][m];
}
int main()
{
    string a="abcde";
    string b="abghe";
    cout<<findLCS(a,b)<<endl;
}
