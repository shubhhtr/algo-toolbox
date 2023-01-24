#include<iostream>
#include<vector>
using namespace std;

long long product(vector<int> &a){
    int n=a.size();
    int index1=-1, index2=-1;
    for(int i=0;i<n;i++){
        if(index1==-1 || (a[i]>a[index1])){
            index1=i;
        }
    }
    for(int i=0;i<n;i++){
        if((i != index1) && (index2==-1 || (a[i]>a[index2]))){
            index2=i;
        }
    }
    return (long long)a[index1]*a[index2];
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<product(a)<<"\n";
    
    return 0;
}