#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;

        int i,arr[n];
        if(n%2==0)
        i = n/2;
        else 
        i = (n/2)+1;

        if (n&1){
            int j=n-2;
            arr[n-1]=i;
            int l=i-1,r=i+1;
            while(l>=1 && r<=n){
                arr[j]=r;
                arr[j-1]=l;
                l--;
                r++;
                j-=2;
            }
        }
        else{
            int j=n-1;
            int l=i,r=i+1;
            while(l>=1 && r<=n){
                arr[j]=l;
                arr[j-1]=r;
                l--;
                r++;
                j-=2;
            }
        }
        for(int i =0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}