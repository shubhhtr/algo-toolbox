#include <bits/stdc++.h>
using namespace std;

bool solve(int i, vector<int> &v, int sum, vector<bool> &check, int t, int k){
    if(k==1) return true;
    if(sum==t) return solve(0,v,0,check,t,k-1);
     
    for(unsigned int ind=i;ind<v.size();ind++){
        if(check[ind] || sum+v[ind] > t) continue;
        check[ind]=true;
        if(solve(ind+1,v,sum+v[ind],check,t,k)) return true;
        check[ind]=false;
    }
    return false;
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
    if(n<3 || sum%3 != 0){
        cout<<0;
        return 0;
    }

    vector<bool> check(n,false);

    cout<<solve(0,vec,0,check,sum/3,3);


    return 0;
}