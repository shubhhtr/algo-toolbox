#include<iostream>
using namespace std;

int gcd(int a, int b){
    int ans=-1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            ans=max(ans,i);
        }
    }
    return ans;
}

long long int fstgcd(long long int a, long long int b){
    if(a<b){
        swap(a,b);
    }
    if(b==0){
        return a;
    }
    int rem=a%b;
    return (long long int)fstgcd(b,rem);
}

int main(){
    long long int a,b;
    cin>>a>>b;
    cout<<fstgcd(a,b);
    
    return 0;
}