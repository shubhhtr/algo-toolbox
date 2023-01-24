#include <bits/stdc++.h>
using namespace std;

void solve(int i, vector<int> &v, int sum, vector<bool> &check){
     
}

int main(){
    int n;
    cin>>n;
    vector<int> vec(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        sum+=vec[i];
    }
    if(sum%3 != 0){
        cout<<0;
        return 0;
    }

    vector<bool> check(n,false);


    return 0;
}