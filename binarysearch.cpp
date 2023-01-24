#include<iostream>
using namespace std;

int binarysearch(int* a, int n, int k){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(a[mid]==k){
            return mid;
        }
        else if(a[mid]>k){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int firstind(int* a, int n, int k){
    int pos=binarysearch(a,n,k);

    if(pos==-1 || pos==0){
        return pos;
    }
    while(a[pos-1]==k && pos>0){
        pos--;
    }
    return pos;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n;
    cin>>n;
    int* a=new int[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int* b=new int[k];
    for(int i=0;i<k;i++){
        cin>>b[i];
        cout<<firstind(a,n,b[i])<<" ";   
    }


    delete []b;
    delete []a;
    return 0;
}