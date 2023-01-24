#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, vector<vector<int>> &dp){ //MISTAKE
    if(n==1){
        return {1};
    }

    if(dp[n][0] != -1) return dp[n];
    
    vector<int> temp;

    temp=solve(n-1,dp);
    if(n%2==0) temp=solve(n/2,dp);
    if(n%3==0) temp=solve(n/3,dp);
    temp.push_back(n);
    return dp[n]=temp;

}

int main(){
    int n;
    cin>>n;
    vector<int> ans;
    vector<vector<int>> dp(n+1);
    dp[0]={-1};
    dp[1]={1};
    for(int i=2;i<n+1;i++){
        dp[i]=dp[i-1];
        if(i%2==0 && dp[i].size() > dp[i/2].size()) dp[i]=dp[i/2];
        if(i%3==0 && dp[i].size() > dp[i/3].size()) dp[i]=dp[i/3];
        dp[i].push_back(i);
    }

    cout<<dp[n].size()-1<<endl;
    for(auto &i: dp[n]){
        cout<<i<<" ";
    }
    return 0;
}