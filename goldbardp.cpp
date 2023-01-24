#include <bits/stdc++.h>
using namespace std;

int solve(int i, int sps, vector<int> &wei, vector<vector<int>> &dp){
    
    if(i==0){
        if(wei[0]<=sps) return dp[i][sps]=wei[0];
        else return 0;
    }
    if(sps==0) return 0;
    
    if(dp[i][sps] != -1) return dp[i][sps];

    int take=INT_MIN;
    if(wei[i]<=sps) take=wei[i]+solve(i-1,sps-wei[i],wei,dp);
    int nttake=solve(i-1,sps,wei,dp);

    return dp[i][sps]=max(take,nttake);
}

int main(){
    int sps,n;
    cin>>sps>>n;
    vector<int> wei(n);
    for(int i=0;i<n;i++) cin>>wei[i];

    vector<vector<int>> dp(n+1,vector<int>(sps+1,-1));

    cout<<solve(n-1,sps,wei,dp);
    return 0;
}