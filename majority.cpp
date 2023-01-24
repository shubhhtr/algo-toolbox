#include<iostream>
#include<algorithm>
using namespace std;

int majorityele(int* a, int n){
    if(n==1){
        return 1;
    }
    sort(a,a+n);
    int maxi=-1;
    int count=1;
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            count++;
        }
        else{
            count=1;
        }
        maxi=max(count,maxi);
    }
    if(maxi>n/2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int n;
    cin>>n;
    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<majorityele(a,n);

    delete []a;
    return 0;
}