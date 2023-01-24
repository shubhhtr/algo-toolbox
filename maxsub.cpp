#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr1, vector<int> &arr2, int i, int j, vector<vector<int>> &dp){
    if(i==arr1.size() || j==arr2.size()) return 0;

        if(dp[i][j] != -1) return dp[i][j];

        int temp=0;
        if(arr1[i]==arr2[j]) temp=1+solve(arr1,arr2,i+1,j+1,dp);
        else temp=max(solve(arr1,arr2,i+1,j,dp) , solve(arr1,arr2,i,j+1,dp));

        return dp[i][j]=temp;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    vector<int> arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    cout<<solve(arr1,arr2,0,0,dp);

    return 0;
}