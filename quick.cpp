#include<iostream>
#include<algorithm>
using namespace std;

int partition(int* a, int l, int r){
    int x=a[l];
    int j=l;
    for(int i=l+1;i<=r;i++){
        if(a[i]<=x){
            j=j+1;
            swap(a[j],a[i]);
        }
    }
    swap(a[l],a[j]);
    return j;
}

void quick(int* a, int l, int r){
    while(l<r){
        int m=partition(a,l,r);
        if((m-l)<(r-m)){
            quick(a,l,m-1);
            l=m+1;
        }
        else{
            quick(a,m+1,r);
            r=m-1;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int* a= new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    delete []a;
    return 0;
}