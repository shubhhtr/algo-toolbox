#include<iostream>
#include<iomanip>
using namespace std;

bool empty(int arr[][2], int n){
    
    for(int i=0;i<n;i++){
        if(arr[i][0]>=0){
            return false;
        }
    }
    return true;
}

int max_index(int arr[][2], int n){
    double maxi=-1.00;
    int ind=-1;
    for(int i=0;i<n;i++){
        if((arr[i][0]*1.00)/arr[i][1] > maxi){
            ind=i;
            maxi=(arr[i][0]*1.00)/arr[i][1];
        }
    }
    return ind;
}

double maxloot(int arr[][2], int n, int w){
    if(w==0 || empty(arr, n)){
        return 0.00;
    }
    int m=max_index(arr, n);
    int wei=min(w,arr[m][1]);
    double ans=((arr[m][0]*1.0)/arr[m][1])*wei;
    w-=wei;
    arr[m][0]=-1;
    return ans+maxloot(arr,n,w);
}

int main(){
    int n,w;
    cin>>n>>w;
    int a[n][2];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    cout<<fixed<<setprecision(4)<<maxloot(a,n,w);
    return 0;
}