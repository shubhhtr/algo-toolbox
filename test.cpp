#include <bits/stdc++.h>
using namespace std;

bool solve(int A[], int B[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
 
        
        if (A[i] == B[j]) {
 
            i++;
            j++;
            
            if (j == m)
                return true;
        }
        else {
            i = i - j + 1;
            j = 0;
        }
    }
 
    return false;
}

int main(){
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++){
        cin>>b[i];
    }

    if(solve(a,b,n,m)) cout<<n-m;
    else cout<<n;
    return 0;
}